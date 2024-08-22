// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXUSEREVENTTRACKER_H
#define PXUSEREVENTTRACKER_H

@class NSHashTable;


#import "PXUserEventTrackerCommon.h"

@interface PXUserEventTracker : PXUserEventTrackerCommon {
    CGFloat _timeLoggedOnDetailViewWillAppear;
    CGFloat _timeLoggedOnMemoriesFeedWillAppear;
    NSUInteger _totalNumberOfRelatedJumps;
    NSUInteger _MaxDepthOfRelatedJumps;
}


@property (retain, nonatomic, setter=_setRelatedLookupTable:) NSHashTable *_relatedLookupTable; // ivar: __relatedLookupTable


+(id)sharedInstance;
-(BOOL)isEventSourceSenderAppearingForTheFirstTime:(id)arg0 ;
-(id)init;
-(struct __CFString *)_aggdKeyForFirstTimeExperienceIsReady:(BOOL)arg0 librarySize:(NSInteger)arg1 ;
-(void)_aggdDurationLoggingDryrun:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_aggdDurationLoggingDryrunForSubState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_aggdJumpCountLoggingDryrun:(NSUInteger)arg0 totalJumpCount:(NSUInteger)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_logAggdAddValueForScalarKey:(struct __CFString *)arg0 value:(NSInteger)arg1 ;
-(void)_logAggdDurationCounterForLogState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_logAggdDurationCounterForLogSubState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_logAggdDurationCounterForLogSubSubState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_logAggdRelatedJumpStatistics:(NSUInteger)arg0 totalJumpCount:(NSUInteger)arg1 ;
-(void)_resetDetailViewTraversalStatistics;
-(void)didConfirmDeleteOfMemory;
-(void)didCreateMemoryViaAddToMemories;
-(void)didFavoriteMemory;
-(void)didFinishViewingDetailsWithCurrentContext:(id)arg0 ;
-(void)didFinishViewingMemoriesFeedView;
-(void)didNavigateInOneUpFromOrigin:(NSInteger)arg0 ;
-(void)didPlayMovieForAssetCollection:(id)arg0 ;
-(void)didPresentOneUpFromOrigin:(NSInteger)arg0 ;
-(void)didViewDetailsForAssetCollection:(id)arg0 ;
-(void)logCounterValuesForLogState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)logCounterValuesForLogSubState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)logCounterValuesForLogSubSubState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)logFirstTimeExpericeReadiness:(BOOL)arg0 forLibrarySize:(NSInteger)arg1 ;
-(void)logForYouContextualMemoriesDetailsCount;
-(void)logForYouInboxItemSelectedWithType:(NSInteger)arg0 ;
-(void)logForYouInboxViewedCount;
-(void)logForYouMemoriesDetailsCount;
-(void)logForYouMemoriesFeedCount;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromCollageView;
-(void)logForYouNavigatedToSharedAlbumActivityViewFromRecentActivityEntry;
-(void)logForYouSharedAlbumInvitationAcceptedCount;
-(void)logForYouSharedAlbumInvitationDeclinedCount;
-(void)logForYouSharedAlbumInvitationReportedAsJunkCount;
-(void)logForYouSuggestionSavedCount;
-(void)logForYouSuggestionSharedCount;
-(void)logForYouSuggestionViewed1UpCount;
-(void)logForYouSuggestionViewedCount;
-(void)logImpressionCountForEventSource:(NSUInteger)arg0 ;
-(void)logInterestingMemoryNotificationRespondedCount;
-(void)logInterestingMemoryNotificationSeenCount;
-(void)logNavigationListViewTapWithKey:(struct __CFString *)arg0 ;
-(void)logUserDidSelectGadgetAccessoryButtonWithKey:(struct __CFString *)arg0 ;
-(void)logViewCountForLogState:(NSUInteger)arg0 ;
-(void)logViewCountForLogSubState:(NSUInteger)arg0 ;
-(void)logViewCountForLogSubSubState:(NSUInteger)arg0 ;
-(void)willViewDetailsWithCurrentContext:(id)arg0 ;
-(void)willViewMemoriesFeedView;


@end


#endif