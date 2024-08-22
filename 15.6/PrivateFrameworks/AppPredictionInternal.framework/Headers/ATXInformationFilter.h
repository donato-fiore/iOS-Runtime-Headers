// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFORMATIONFILTER_H
#define ATXINFORMATIONFILTER_H

@class NSCache, _PASQueueLock, ATXInformationStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXTimelineAbuseControlConfig.h"
#import "_ATXAppLaunchHistogram.h"
#import "ATXDigitalHealthBlacklist.h"

@interface ATXInformationFilter : NSObject {
    NSCache *_appLaunchCountsByBundleId;
    NSObject<OS_dispatch_queue> *_queue;
    _PASQueueLock *_lock;
    ATXInformationStore *_store;
    ATXTimelineAbuseControlConfig *_abuseControlConfig;
    _ATXAppLaunchHistogram *_histogram;
    ATXDigitalHealthBlacklist *_digitalHealthBlockList;
}




+(NSInteger)chsFamilyForTimelineRelevanceSuggestionLayoutOptions:(NSUInteger)arg0 ;
-(BOOL)_canSuggestionPassAppLaunchCheck:(id)arg0 ;
-(BOOL)_isFirstPartyApp:(id)arg0 ;
-(BOOL)_isSuggestionBlockedByDismiss:(id)arg0 withGuardedData:(id)arg1 ;
-(BOOL)_shouldBlockTimelineSuggestion:(id)arg0 updatingAbuseControlOutcomes:(id)arg1 ;
-(BOOL)shouldDisableRandomization:(id)arg0 ;
-(BOOL)stalenessRotationsAreEnabled:(id)arg0 ;
-(NSInteger)_numberOfSeenRotationsForSuggestion:(id)arg0 ;
-(NSInteger)numberOfSeenRotationsForWidget:(id)arg0 kind:(id)arg1 intent:(id)arg2 filterByClientModelId:(id)arg3 ;
-(id)_fetchAppLaunchCountForBundleId:(id)arg0 ;
-(id)filterInfoSuggestions:(id)arg0 ;
-(id)init;
-(id)initWithStore:(id)arg0 abuseControlConfig:(id)arg1 ;
-(id)initWithStore:(id)arg0 abuseControlConfig:(id)arg1 histogram:(id)arg2 digitalHealthBlockList:(id)arg3 ;
-(void)_demoteFirstPartyDonatedSuggestionIfNecessary:(id)arg0 ;
-(void)_populateDismissRecordsCacheAsynchronously;
-(void)_removeExpiredDismissRecordsAsynchronously;
-(void)recordDismissOfSuggestion:(id)arg0 isDismissalLongTerm:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif