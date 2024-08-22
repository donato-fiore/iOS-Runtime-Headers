// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCARDIOFITNESSLEVELDATA_H
#define HKCARDIOFITNESSLEVELDATA_H


#import <Foundation/Foundation.h>


@interface HKCardioFitnessLevelData : NSObject

@property (nonatomic) NSInteger ageLowerBound; // ivar: _ageLowerBound
@property (nonatomic) NSInteger ageUpperBound; // ivar: _ageUpperBound
@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (nonatomic) NSInteger cardioFitnessLevel; // ivar: _cardioFitnessLevel
@property (nonatomic) CGFloat vo2MaxLowerBound; // ivar: _vo2MaxLowerBound
@property (nonatomic) CGFloat vo2MaxUpperBound; // ivar: _vo2MaxUpperBound


-(id)description;
-(id)initWithCardioFitnessLevel:(NSInteger)arg0 biologicalSex:(NSInteger)arg1 ageLowerBound:(NSInteger)arg2 ageUpperBound:(NSInteger)arg3 vo2MaxLowerBound:(CGFloat)arg4 vo2MaxUpperBound:(CGFloat)arg5 ;


@end


#endif