// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYADDLINKCONTEXTSERVICE_H
#define SYADDLINKCONTEXTSERVICE_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, SYAddLinkContextServiceProtocol, OS_dispatch_queue, SYAddLinkContextServiceDelegate;

#import <Foundation/Foundation.h>


@interface SYAddLinkContextService : NSObject <NSXPCListenerDelegate, SYAddLinkContextServiceProtocol>



@property (readonly, nonatomic) BOOL _forTesting; // ivar: __forTesting
@property (retain, nonatomic) NSXPCListener *_listener; // ivar: __listener
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue; // ivar: __serviceQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SYAddLinkContextServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initForTesting:(BOOL)arg0 ;
-(void)beginListeningToConnections;
-(void)dealloc;
-(void)userDidRemoveContentItemDatas:(id)arg0 ;
-(void)userEditDidAddContentItemDatas:(id)arg0 ;
-(void)userWillAddLinkWithActivityData:(id)arg0 completion:(id)arg1 ;


@end


#endif