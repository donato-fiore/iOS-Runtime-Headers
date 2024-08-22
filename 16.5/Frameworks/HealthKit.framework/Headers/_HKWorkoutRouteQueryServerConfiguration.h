// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKWORKOUTROUTEQUERYSERVERCONFIGURATION_H
#define _HKWORKOUTROUTEQUERYSERVERCONFIGURATION_H

@class NSDateInterval, NSUUID;


#import "HKQueryServerConfiguration.h"
#import "HKWorkoutRoute.h"

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration

@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (retain, nonatomic) HKWorkoutRoute *workoutRoute; // ivar: _workoutRoute
@property (retain, nonatomic) NSUUID *workoutUUID; // ivar: _workoutUUID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif