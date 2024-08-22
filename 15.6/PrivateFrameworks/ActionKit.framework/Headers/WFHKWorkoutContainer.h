// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHKWORKOUTCONTAINER_H
#define WFHKWORKOUTCONTAINER_H

@class HKUnit, NSString, HKWorkout;
@protocol WFNaming, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFHKWorkoutContainer : NSObject <WFNaming, NSSecureCoding>



@property (retain, nonatomic) HKUnit *caloriesUnit; // ivar: _caloriesUnit
@property (readonly, nonatomic) CGFloat caloriesValue;
@property (retain, nonatomic) HKUnit *distanceUnit; // ivar: _distanceUnit
@property (readonly, nonatomic) CGFloat distanceValue;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (retain, nonatomic) HKWorkout *workout; // ivar: _workout


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkout:(id)arg0 ;
-(id)initWithWorkout:(id)arg0 distanceUnit:(id)arg1 caloriesUnit:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif