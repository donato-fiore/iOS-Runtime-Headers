// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHAMEMORYELECTIONTASK_H
#define PHAMEMORYELECTIONTASK_H

@class NSString, CLLocation, PGFeature, NSDate;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHAMemoryElectionTask : NSObject <PHATask>



@property (nonatomic) BOOL createTransientMemories; // ivar: _createTransientMemories
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceNotification; // ivar: _forceNotification
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (nonatomic) NSUInteger requestedCategory; // ivar: _requestedCategory
@property (retain, nonatomic) PGFeature *requestedFeature; // ivar: _requestedFeature
@property (nonatomic) NSUInteger requestedTriggerType; // ivar: _requestedTriggerType
@property (retain, nonatomic) NSString *requestedUniqueMemoryIdentifier; // ivar: _requestedUniqueMemoryIdentifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *universalDate; // ivar: _universalDate
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated
@property (readonly, nonatomic) NSUInteger version;


+(BOOL)reloadWidgetTimelineWithLoggingConnection:(id)arg0 error:(*id)arg1 ;
+(id)_filterMemoriesWithAcceptableUserFeedback:(id)arg0 allMemoriesFetchResult:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_filterSuggestionsToFeatureBasedOnUserFeedbackForSuggestionsToFeature:(id)arg0 sugestionsFetchResult:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_userFeedbackCalculatorWithPhotoLibrary:(id)arg0 ;
+(void)findAndSetFeaturedStateForMemoriesAndSuggestionsIfNeededInPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
+(void)findMemoriesAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
+(void)findMemoriesAndSetNeverFeatureStateIfNeededInPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
+(void)findSuggestionsAndSetFeaturedStateIfNeededInPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
+(void)sendElectedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
+(void)sendGeneratedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
+(void)sendMemoryTriggersAnalyticsEventWithElectedMemoryType:(id)arg0 triggerType:(id)arg1 loggingConnection:(id)arg2 analytics:(id)arg3 ;
+(void)sendNotifiedMemoriesPipelineAnalyticsEventWithMemoryType:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
+(void)sendTriggeredMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)_electorConfigurationForExistingMemories:(id)arg0 graphManager:(id)arg1 loggingConnection:(id)arg2 ;
-(id)_recentlySuggestedMoodsFromExistingMemoriesSortedByCreationDate:(id)arg0 ;
-(id)init;
-(void)collectMetricsOnElectedEnrichedMemories:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
-(void)collectMetricsOnExistingMemories:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
-(void)collectMetricsOnMemoriesInGraphWithWorkingContext:(id)arg0 loggingConnection:(id)arg1 analytics:(id)arg2 ;
-(void)handleNotificationsForMemories:(id)arg0 graphManager:(id)arg1 userFeedbackCalculator:(id)arg2 loggingConnection:(id)arg3 ;
-(void)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 reply:(id)arg2 ;


@end


#endif