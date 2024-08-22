// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDINTERACTIONSTORENOTIFIER_H
#define _CDINTERACTIONSTORENOTIFIER_H

@class NSMutableDictionary;
@protocol _CDXPCEventPublisherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDXPCEventPublisher.h"

@interface _CDInteractionStoreNotifier : NSObject <_CDXPCEventPublisherDelegate>

 {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
    _CDXPCEventPublisher *_interactionRecordedEventPublisher;
    _CDXPCEventPublisher *_interactionDeletedEventPublisher;
    NSMutableDictionary *_interactionStoreRecordedEventSubscribersByToken;
    NSMutableDictionary *_interactionStoreDeletedEventSubscribersByToken;
    BOOL _isRootProcess;
}




+(id)sharedInstance;
-(id)filterInteractionsForUser:(id)arg0 ;
-(id)init;
-(void)addSubscriber:(id)arg0 ;
-(void)dealloc;
-(void)deleteAll;
-(void)deleted:(id)arg0 ;
-(void)handleXPCNotificationEvent:(id)arg0 ;
-(void)postPackedMechanisms:(NSUInteger)arg0 ;
-(void)publishDeletedXPCEvent:(id)arg0 ;
-(void)publishRecordedXPCEvent:(id)arg0 ;
-(void)recorded:(id)arg0 ;
-(void)removeSubscriberWithToken:(NSUInteger)arg0 streamName:(id)arg1 ;
-(void)resume;
-(void)suspend;


@end


#endif