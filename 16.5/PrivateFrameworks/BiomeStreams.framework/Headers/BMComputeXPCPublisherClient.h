// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMCOMPUTEXPCPUBLISHERCLIENT_H
#define BMCOMPUTEXPCPUBLISHERCLIENT_H

@class NSXPCConnection, NSXPCListenerEndpoint, NSString, NSMutableDictionary;
@protocol BMComputePublishing, BMComputePublisher, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BMComputeXPCPublisherClient : NSObject <BMComputePublishing, BMComputePublisher>

 {
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_listenerEndpoint;
}


@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *pendingEvents; // ivar: _pendingEvents
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableDictionary *subscriptions; // ivar: _subscriptions
@property (readonly) Class superclass;


+(id)new;
+(id)shared;
+(void)_initializeSharedClientWithQueue:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 listenerEndpoint:(id)arg1 ;
-(void)_handleEventWithPayload:(id)arg0 ;
-(void)_setXPCEvent:(id)arg0 identifier:(id)arg1 ;
-(void)dealloc;
-(void)receiveInputForIdentifier:(id)arg0 streamIdentifier:(id)arg1 storeEvent:(id)arg2 ;
-(void)subscribe:(id)arg0 ;
-(void)unsubscribeWithIdentifier:(id)arg0 ;


@end


#endif