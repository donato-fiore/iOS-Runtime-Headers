// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKWORKOUTROUTEQUERYSERVERCONFIGURATION_H
#define _HKWORKOUTROUTEQUERYSERVERCONFIGURATION_H



#import "HKQueryServerConfiguration.h"
#import "HKWorkoutRoute.h"

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration

@property (retain, nonatomic) HKWorkoutRoute *workoutRoute; // ivar: _workoutRoute


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif