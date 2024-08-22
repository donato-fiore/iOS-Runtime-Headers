// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONDATA_H
#define CALNTRIGGEREDEVENTNOTIFICATIONDATA_H

@class NSString, EKTravelEngineHypothesis, NSDate;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *alarmID; // ivar: _alarmID
@property (readonly, nonatomic) BOOL hasDisplayedLeaveByMessage; // ivar: _hasDisplayedLeaveByMessage
@property (readonly, nonatomic) BOOL hasDisplayedLeaveNowMessage; // ivar: _hasDisplayedLeaveNowMessage
@property (readonly, nonatomic) BOOL hasDisplayedRunningLateMessage; // ivar: _hasDisplayedRunningLateMessage
@property (readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis; // ivar: _hypothesis
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart; // ivar: _isOffsetFromTravelTimeStart
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // ivar: _lastFireTimeOfAlertOffsetFromTravelTime
@property (readonly, copy, nonatomic) NSDate *lastTimeNotificationAdded; // ivar: _lastTimeNotificationAdded


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNotificationData:(id)arg0 ;
-(id)_initWithAlarmID:(id)arg0 isOffsetFromTravelTimeStart:(BOOL)arg1 lastFireTimeOfAlertOffsetFromTravelTime:(id)arg2 hypothesis:(id)arg3 hasDisplayedLeaveByMessage:(BOOL)arg4 hasDisplayedLeaveNowMessage:(BOOL)arg5 hasDisplayedRunningLateMessage:(BOOL)arg6 lastTimeNotificationAdded:(id)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif