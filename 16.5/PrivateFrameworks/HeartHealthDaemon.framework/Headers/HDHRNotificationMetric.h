// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRNOTIFICATIONMETRIC_H
#define HDHRNOTIFICATIONMETRIC_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface HDHRNotificationMetric : NSObject

@property (copy, nonatomic) NSString *cardioFitnessNotificationType; // ivar: _cardioFitnessNotificationType
@property (copy, nonatomic, getter=isDoNotDisturbOn) NSNumber *doNotDisturbOn; // ivar: _doNotDisturbOn
@property (nonatomic) NSInteger irregularRhythmNotificationsAlgorithmVersion; // ivar: _irregularRhythmNotificationsAlgorithmVersion
@property (copy, nonatomic) NSNumber *notificationThreshold; // ivar: _notificationThreshold
@property (readonly, copy, nonatomic) NSString *notificationType; // ivar: _notificationType


+(id)eventName;
-(id)eventPayload;
-(id)initWithNotificationType:(id)arg0 ;
-(void)submit;


@end


#endif