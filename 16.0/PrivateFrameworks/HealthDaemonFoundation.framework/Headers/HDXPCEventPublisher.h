// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDXPCEVENTPUBLISHER_H
#define HDXPCEVENTPUBLISHER_H

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

#import <Foundation/Foundation.h>


@interface HDXPCEventPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSMutableArray *_pendingEvents;
    NSMutableArray *_pendingSubscribers;
    NSMutableDictionary *_subscribers;
    char * _requiredEntitlement;
}




-(id)initWithStream:(char *)arg0 entitlement:(char *)arg1 ;
-(void)broadcastEvent:(id)arg0 ;


@end


#endif