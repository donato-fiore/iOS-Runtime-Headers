// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMFITNESSMACHINEWORKOUT_H
#define CMFITNESSMACHINEWORKOUT_H

@class NSString;


#import "CMWorkout.h"

@interface CMFitnessMachineWorkout : CMWorkout {
    NSString *fManufacturerName;
    NSString *fModel;
}


@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) NSString *model;


+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)fitnessMachineWorkoutInstance:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 workoutType:(NSInteger)arg1 manufacturerName:(id)arg2 model:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif