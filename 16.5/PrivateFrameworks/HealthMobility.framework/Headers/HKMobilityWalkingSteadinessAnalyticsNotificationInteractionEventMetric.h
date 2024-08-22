// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONINTERACTIONEVENTMETRIC_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSNOTIFICATIONINTERACTIONEVENTMETRIC_H

@class NSNumber, NSString;
@protocol HKMobilityAnalyticsEventMetric;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventMetric : NSObject <HKMobilityAnalyticsEventMetric>



@property (retain, nonatomic) NSNumber *age; // ivar: _age
@property (retain, nonatomic) NSNumber *biologicalSex; // ivar: _biologicalSex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed; // ivar: _improveHealthAndActivityAllowed
@property (copy, nonatomic) NSString *notificationClassification; // ivar: _notificationClassification
@property (copy, nonatomic) NSString *notificationInteractionType; // ivar: _notificationInteractionType
@property (copy, nonatomic) NSString *notificationType; // ivar: _notificationType
@property (readonly) Class superclass;


+(BOOL)requiresImproveHealthAndActivityAllowed;
-(id)eventName;
-(id)eventPayload;
-(id)initWithImproveHealthAndActivityAllowed:(BOOL)arg0 ;


@end


#endif