// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCALORIEDATA_H
#define CMCALORIEDATA_H

@class NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMCalorieData : NSObject <NSSecureCoding, NSCopying>

 {
    NSInteger fWorkoutType;
    CGFloat fDuration;
    CGFloat fMets;
    CGFloat fBasalMets;
    CGFloat fTotalCalories;
    CGFloat fBasalCalories;
}


@property (readonly, nonatomic) NSNumber *basalCalories;
@property (readonly, nonatomic) NSNumber *basalMets;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSNumber *mets;
@property (readonly, nonatomic) NSNumber *totalCalories;
@property (readonly, nonatomic) NSInteger workoutType;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkoutType:(NSInteger)arg0 duration:(CGFloat)arg1 mets:(CGFloat)arg2 basalMets:(CGFloat)arg3 totalCalories:(CGFloat)arg4 basalCalories:(CGFloat)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif