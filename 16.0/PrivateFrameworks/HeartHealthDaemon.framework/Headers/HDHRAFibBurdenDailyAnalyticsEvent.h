// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRAFIBBURDENDAILYANALYTICSEVENT_H
#define HDHRAFIBBURDENDAILYANALYTICSEVENT_H

@class HDProfile, NSString;
@protocol HKAnalyticsEvent, HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider;

#import <Foundation/Foundation.h>


@interface HDHRAFibBurdenDailyAnalyticsEvent : NSObject <HKAnalyticsEvent>

 {
    HDProfile *_profile;
    id<HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> *_notificationsAuthorizedProvider;
}


@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;


-(NSInteger)_bucketedBurdenValueForSample:(id)arg0 ;
-(NSInteger)_bucketedWeeksSinceDate:(id)arg0 dataSource:(id)arg1 ;
-(NSInteger)_daysSinceDate:(id)arg0 dataSource:(id)arg1 ;
-(NSInteger)_daysSinceDate:(id)arg0 maximum:(id)arg1 dataSource:(id)arg2 ;
-(id)_determineIfSamplesOverlappingSample:(id)arg0 dataSource:(id)arg1 ;
-(id)_numberOfSamplesOfType:(id)arg0 dateInterval:(id)arg1 additionalPredicate:(id)arg2 bucketer:(id)arg3 ;
-(id)_sedentaryAndBackgroundHeartRateContextPredicate;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 notificationsAuthorizedProvider:(id)arg1 ;
-(id)makeIHAGatedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(id)makeUnrestrictedEventPayloadWithDataSource:(id)arg0 error:(*id)arg1 ;
-(void)_extractAFibBurdenFeatureStatusPropertiesFromDataSource:(id)arg0 payload:(id)arg1 ;
-(void)_extractBucketedDaysSinceLastSampleOfType:(id)arg0 intoProperty:(id)arg1 inPayload:(id)arg2 dataSource:(id)arg3 ;
-(void)_extractBurdenSamplePropertiesIntoPayload:(id)arg0 dataSource:(id)arg1 ;
-(void)_extractDaysSinceDateInKeyValueDomain:(id)arg0 withKey:(id)arg1 intoProperty:(id)arg2 inPayload:(id)arg3 dataSource:(id)arg4 ;
// -(void)_extractFeatureStatusPropertiesForFeatureIdentifier:(id)arg0 payload:(id)arg1 dataSource:(id)arg2 ifOnboardedBlock:(id)arg3 ifUsageRequirementsEvaluationPresentBlock:(unk)arg4 ifErrorRetrievingFeatureStatusBlock:(id)arg5  ;
-(void)_extractIRNFeatureStatusPropertiesFromDataSource:(id)arg0 payload:(id)arg1 ;
-(void)_extractWatchWearPropertiesIntoPayload:(id)arg0 dataSource:(id)arg1 ;


@end


#endif