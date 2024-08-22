// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSONBOARDINGEVENTMETRIC_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSONBOARDINGEVENTMETRIC_H

@class NSNumber, NSString;
@protocol HKMobilityAnalyticsEventMetric;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsOnboardingEventMetric : NSObject <HKMobilityAnalyticsEventMetric>



@property (retain, nonatomic) NSNumber *acceptDefaultHeight; // ivar: _acceptDefaultHeight
@property (retain, nonatomic) NSNumber *acceptDefaultNotifications; // ivar: _acceptDefaultNotifications
@property (retain, nonatomic) NSNumber *acceptDefaultWeight; // ivar: _acceptDefaultWeight
@property (copy, nonatomic) NSString *activeWatchProductType; // ivar: _activeWatchProductType
@property (retain, nonatomic) NSNumber *age; // ivar: _age
@property (retain, nonatomic) NSNumber *biologicalSex; // ivar: _biologicalSex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *featureVersion; // ivar: _featureVersion
@property (retain, nonatomic) NSNumber *hasDefaultHeight; // ivar: _hasDefaultHeight
@property (retain, nonatomic) NSNumber *hasDefaultWeight; // ivar: _hasDefaultWeight
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed; // ivar: _improveHealthAndActivityAllowed
@property (copy, nonatomic) NSString *provenance; // ivar: _provenance
@property (copy, nonatomic) NSString *step; // ivar: _step
@property (readonly) Class superclass;


+(BOOL)requiresImproveHealthAndActivityAllowed;
-(id)eventName;
-(id)eventPayload;
-(id)initWithImproveHealthAndActivityAllowed:(BOOL)arg0 ;


@end


#endif