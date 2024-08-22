// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDIGESTONBOARDINGSUGGESTIONCLIENT_H
#define ATXDIGESTONBOARDINGSUGGESTIONCLIENT_H

@class NSHashTable, NSUserDefaults, NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXDigestOnboardingSuggestionClient : NSObject {
    NSHashTable *_observers;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_trigger;
    BOOL _hasRegisteredKVO;
}




+(id)sharedInstance;
+(void)changeNumPreviousDaysToCheckForNotificationProblemToNumDays:(NSUInteger)arg0 ;
+(void)removeRandomizedSelectionForDigestOnboardingSuggestion;
+(void)resetDigestOnboardingSuggestionsAtHour:(id)arg0 minute:(id)arg1 ;
+(void)resetRandomizedSelectionForDigestOnboardingSuggestion;
-(BOOL)hasNotificationProblemForPreviousNumDays:(NSInteger)arg0 ;
-(id)init;
-(id)notificationStreamPublisherForStartDate:(id)arg0 ;
-(void)_handleLocaleChange;
-(void)_invalidateTriggerOnMainQueue;
-(void)_registerForKVOChangesOnMainQueue;
-(void)_registerForLocaleChangeOnMainQueue;
-(void)_registerForOnboardingSuggestionOnMainQueueWithThresholdForShowingDigestOnboardingSuggestionToSeedUsers:(CGFloat)arg0 thresholdForShowingDigestOnboardingSuggestion:(CGFloat)arg1 ;
-(void)_registerForTriggerOnMainQueueAtHour:(NSInteger)arg0 minute:(NSInteger)arg1 ;
-(void)_setProbabilityOfShowingDigestOnboardingToUser;
-(void)_suggestDigestOnboardingIfApplicableOnMainQueue;
-(void)_unregisterForKVOChangesOnMainQueue;
-(void)_unregisterForLocaleChangeOnMainQueue;
-(void)averageNumberOfNotifications:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerForOnboardingSuggestions;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterForOnboardingSuggestions;
-(void)userAcceptedDigestOnboardingSuggestion:(id)arg0 ;


@end


#endif