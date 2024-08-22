// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMCOMPUTEXPCPUBLISHERCLIENT_H
#define BMCOMPUTEXPCPUBLISHERCLIENT_H

@class NSXPCConnection, NSXPCListenerEndpoint, NSMutableDictionary;
@protocol BMComputePublisher, BMComputePublishing, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BMComputeXPCPublisherClient : NSObject <BMComputePublisher, BMComputePublishing>

 {
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_listenerEndpoint;
}


@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSMutableDictionary *pendingEvents; // ivar: _pendingEvents
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableDictionary *subscriptions; // ivar: _subscriptions


+(id)shared;
+(void)_initializeSharedClientWithQueue:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 listenerEndpoint:(id)arg1 ;
-(void)_handleEventWithPayload:(id)arg0 ;
-(void)_setXPCEvent:(id)arg0 identifier:(id)arg1 ;
-(void)receiveInputForIdentifier:(id)arg0 ;
-(void)subscribe:(id)arg0 ;
-(void)unsubscribeWithIdentifier:(id)arg0 ;


@end


#endif