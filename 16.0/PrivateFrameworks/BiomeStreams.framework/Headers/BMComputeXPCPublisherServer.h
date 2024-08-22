// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMCOMPUTEXPCPUBLISHERSERVER_H
#define BMCOMPUTEXPCPUBLISHERSERVER_H

@class NSString, NSXPCInterface, NSXPCListener, NSMutableArray;
@protocol BMComputePublisher, NSXPCListenerDelegate, OS_xpc_event_publisher, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BMBookmarkStorage.h"

@interface BMComputeXPCPublisherServer : NSObject <BMComputePublisher, NSXPCListenerDelegate>



@property (copy, nonatomic) id *activationCompletion; // ivar: _activationCompletion
@property (readonly, nonatomic) BMBookmarkStorage *bookmarkStorage; // ivar: _bookmarkStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCInterface *interface; // ivar: _interface
@property (readonly, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // ivar: _publisher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSMutableArray *subscriptions; // ivar: _subscriptions
@property (readonly) Class superclass;


+(id)new;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 listener:(id)arg1 ;
-(id)subscriptionsForStream:(id)arg0 ;
-(void)_addSubscription:(id)arg0 ;
-(void)_handlePublisherAction:(unsigned int)arg0 token:(NSUInteger)arg1 descriptor:(id)arg2 ;
-(void)_removeSubscriptionWithIdentifier:(id)arg0 client:(id)arg1 ;
-(void)_removeSubscriptionWithToken:(NSUInteger)arg0 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)receiveInputForSubscription:(id)arg0 streamIdentifier:(id)arg1 storeEvent:(id)arg2 ;
-(void)subscribe:(id)arg0 ;
-(void)unsubscribeWithIdentifier:(id)arg0 ;


@end


#endif