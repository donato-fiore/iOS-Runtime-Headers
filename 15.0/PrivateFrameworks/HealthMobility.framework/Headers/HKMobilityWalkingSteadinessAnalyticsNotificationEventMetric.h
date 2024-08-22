// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONEVENTMETRIC_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONEVENTMETRIC_H

@class NSNumber, NSString;
@protocol HKMobilityAnalyticsEventMetric;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsNotificationEventMetric : NSObject <HKMobilityAnalyticsEventMetric>



@property (retain, nonatomic) NSNumber *age; // ivar: _age
@property (retain, nonatomic) NSNumber *biologicalSex; // ivar: _biologicalSex
@property (retain, nonatomic) NSNumber *daysSinceLastNotification; // ivar: _daysSinceLastNotification
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed; // ivar: _improveHealthAndActivityAllowed
@property (retain, nonatomic) NSString *notificationClassification; // ivar: _notificationClassification
@property (retain, nonatomic) NSString *notificationType; // ivar: _notificationType
@property (readonly) Class superclass;


+(BOOL)requiresImproveHealthAndActivityAllowed;
-(id)eventName;
-(id)eventPayload;
-(id)initWithImproveHealthAndActivityAllowed:(BOOL)arg0 ;


@end


#endif