// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONTRIGGERDATA_H
#define CALNTRIGGEREDEVENTNOTIFICATIONTRIGGERDATA_H

@class NSString, EKTravelEngineHypothesis;

#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationTriggerData : NSObject

@property (readonly, copy, nonatomic) NSString *alarmID; // ivar: _alarmID
@property (readonly, nonatomic) EKTravelEngineHypothesis *hypothesis; // ivar: _hypothesis
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart; // ivar: _isOffsetFromTravelTimeStart
@property (readonly, nonatomic) NSUInteger trigger; // ivar: _trigger


-(id)description;
-(id)initWithTrigger:(NSUInteger)arg0 alarmID:(id)arg1 isOffsetFromTravelTimeStart:(BOOL)arg2 hypothesis:(id)arg3 ;


@end


#endif