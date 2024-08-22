// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSDAILYEVENTMETRIC_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSDAILYEVENTMETRIC_H

@class NSString, NSNumber;
@protocol HKMobilityAnalyticsEventMetric;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsDailyEventMetric : NSObject <HKMobilityAnalyticsEventMetric>



@property (retain, nonatomic) NSString *activePairedWatchType; // ivar: _activePairedWatchType
@property (retain, nonatomic) NSNumber *age; // ivar: _age
@property (retain, nonatomic) NSNumber *biologicalSex; // ivar: _biologicalSex
@property (retain, nonatomic) NSString *currentWalkingSteadinessClassification; // ivar: _currentWalkingSteadinessClassification
@property (retain, nonatomic) NSNumber *daysSinceLastInitialNotification; // ivar: _daysSinceLastInitialNotification
@property (retain, nonatomic) NSNumber *daysSinceLastRepeatNotification; // ivar: _daysSinceLastRepeatNotification
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *hasHeight; // ivar: _hasHeight
@property (retain, nonatomic) NSNumber *hasWalkingSteadinessMeasurements; // ivar: _hasWalkingSteadinessMeasurements
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed; // ivar: _improveHealthAndActivityAllowed
@property (retain, nonatomic) NSNumber *numberOfDaysSinceLastWalkingSteadinessMeasurement; // ivar: _numberOfDaysSinceLastWalkingSteadinessMeasurement
@property (retain, nonatomic) NSNumber *numberOfInitialNotificationsInPastYear; // ivar: _numberOfInitialNotificationsInPastYear
@property (retain, nonatomic) NSNumber *numberOfLowNotificationsInPastYear; // ivar: _numberOfLowNotificationsInPastYear
@property (retain, nonatomic) NSNumber *numberOfRepeatLowNotificationsInPastYear; // ivar: _numberOfRepeatLowNotificationsInPastYear
@property (retain, nonatomic) NSNumber *numberOfRepeatVeryLowNotificationsInPastYear; // ivar: _numberOfRepeatVeryLowNotificationsInPastYear
@property (retain, nonatomic) NSNumber *numberOfVeryLowNotificationsInPastYear; // ivar: _numberOfVeryLowNotificationsInPastYear
@property (retain, nonatomic) NSString *previousWalkingSteadinessClassification; // ivar: _previousWalkingSteadinessClassification
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=isWalkingSteadinessNotificationsEnabled) NSNumber *walkingSteadinessNotificationsEnabled; // ivar: _walkingSteadinessNotificationsEnabled


+(BOOL)requiresImproveHealthAndActivityAllowed;
-(id)eventName;
-(id)eventPayload;
-(id)initWithImproveHealthAndActivityAllowed:(BOOL)arg0 ;


@end


#endif