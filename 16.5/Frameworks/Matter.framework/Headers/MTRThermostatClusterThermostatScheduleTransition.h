// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTHERMOSTATCLUSTERTHERMOSTATSCHEDULETRANSITION_H
#define MTRTHERMOSTATCLUSTERTHERMOSTATSCHEDULETRANSITION_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRThermostatClusterThermostatScheduleTransition : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *coolSetpoint; // ivar: _coolSetpoint
@property (copy, nonatomic) NSNumber *heatSetpoint; // ivar: _heatSetpoint
@property (copy, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif