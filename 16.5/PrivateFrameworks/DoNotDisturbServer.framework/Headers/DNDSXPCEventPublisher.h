// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSXPCEVENTPUBLISHER_H
#define DNDSXPCEVENTPUBLISHER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

#import <Foundation/Foundation.h>


@interface DNDSXPCEventPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSMutableArray *_pendingEvents;
    NSMutableDictionary *_subscribers;
    char * _requiredEntitlement;
}




-(id)initWithStream:(char *)arg0 ;
-(void)_handleEventAction:(unsigned int)arg0 token:(NSUInteger)arg1 descriptor:(id)arg2 ;
-(void)_queue_addSubscriberForToken:(NSUInteger)arg0 descriptor:(id)arg1 ;
-(void)_queue_removeSubscriberForToken:(NSUInteger)arg0 ;
-(void)_queue_sendEventWithXPCObject:(id)arg0 ;
-(void)_queue_sendPendingEvents;
-(void)broadcastEvent:(id)arg0 ;


@end


#endif