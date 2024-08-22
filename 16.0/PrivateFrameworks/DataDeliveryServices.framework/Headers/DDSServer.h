// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSSERVER_H
#define DDSSERVER_H

@class NSMutableSet, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, DDSManaging, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDSServer : NSObject <NSXPCListenerDelegate>



@property (readonly, nonatomic) NSMutableSet *clientConnections; // ivar: _clientConnections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<DDSManaging> *manager; // ivar: _manager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithManager:(id)arg0 ;
-(void)dealloc;
-(void)handleEndedConnection:(id)arg0 ;


@end


#endif