// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNMUTABLETRIGGEREDEVENTNOTIFICATIONDATA_H
#define CALNMUTABLETRIGGEREDEVENTNOTIFICATIONDATA_H

@class NSString, EKTravelEngineHypothesis, NSDate;
@protocol NSCopying;


#import "CALNTriggeredEventNotificationData.h"

@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData <NSCopying>



@property (copy, nonatomic) NSString *alarmID;
@property (nonatomic) BOOL hasDisplayedLeaveByMessage;
@property (nonatomic) BOOL hasDisplayedLeaveNowMessage;
@property (nonatomic) BOOL hasDisplayedRunningLateMessage;
@property (copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic) NSDate *lastTimeNotificationAdded;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif