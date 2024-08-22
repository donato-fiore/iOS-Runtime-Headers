// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDSPOTLIGHTCOALESCEDDELETIONMANAGER_H
#define _CDSPOTLIGHTCOALESCEDDELETIONMANAGER_H

@class NSString;
@protocol OS_dispatch_queue, _DKKnowledgeEventStreamDeleting;

#import <Foundation/Foundation.h>

#import "_CDPersistedCoalescingTimer.h"

@interface _CDSpotlightCoalescedDeletionManager : NSObject {
    NSObject<OS_dispatch_queue> *_deletionCoalescingQueue;
    NSString *_persistencePath;
    CGFloat _delay;
    _CDPersistedCoalescingTimer *_deletionCoalescingTimer;
    id<_DKKnowledgeEventStreamDeleting> *_knowledgeStore;
}




-(id)initWithKnowledgeStore:(id)arg0 ;
-(id)initWithKnowledgeStore:(id)arg0 persistencePath:(id)arg1 delay:(CGFloat)arg2 ;
-(void)deleteKnowledgeEventsMatchingPredicate:(id)arg0 withCompletion:(id)arg1 ;
-(void)processDeletionForOperation:(id)arg0 ;
-(void)setupCoalescingTimer;


@end


#endif