// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYLINKCONTEXTSERVICE_H
#define SYLINKCONTEXTSERVICE_H

@class NSXPCConnection, NSArray, NSXPCListener, NSString;
@protocol SYLinkContextServiceProtocol, NSXPCListenerDelegate, SYAddLinkContextServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SYLinkContextService : NSObject <SYLinkContextServiceProtocol, NSXPCListenerDelegate, SYAddLinkContextServiceDelegate>



@property (retain, nonatomic) NSXPCConnection *_activeConnection; // ivar: __activeConnection
@property (copy, nonatomic) NSArray *_contextsDataForTesting; // ivar: __contextsDataForTesting
@property (readonly, nonatomic) BOOL _forTesting; // ivar: __forTesting
@property (retain, nonatomic) NSXPCListener *_listener; // ivar: __listener
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue; // ivar: __serviceQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initForTesting:(BOOL)arg0 ;
-(void)beginListeningToConnections;
-(void)dealloc;
-(void)fetchLinkContextsDataForUserActivityInfo:(id)arg0 completion:(id)arg1 ;
-(void)simpleMethod;
-(void)userDidRemoveContentItemDatas:(id)arg0 ;
-(void)userEditDidAddContentItemDatas:(id)arg0 ;
-(void)userWillAddLinkWithActivityData:(id)arg0 completion:(id)arg1 ;


@end


#endif