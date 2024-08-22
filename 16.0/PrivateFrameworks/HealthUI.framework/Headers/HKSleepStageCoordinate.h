// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPSTAGECOORDINATE_H
#define HKSLEEPSTAGECOORDINATE_H

@class NSArray;


#import "HKSleepPeriodCoordinate.h"

@interface HKSleepStageCoordinate : HKSleepPeriodCoordinate

@property (readonly, nonatomic) NSArray *asleepCoreYValues; // ivar: _asleepCoreYValues
@property (readonly, nonatomic) NSArray *asleepDeepYValues; // ivar: _asleepDeepYValues
@property (readonly, nonatomic) NSArray *asleepRemYValues; // ivar: _asleepRemYValues
@property (readonly, nonatomic) NSArray *asleepUnspecifiedYValues; // ivar: _asleepUnspecifiedYValues
@property (readonly, nonatomic) NSArray *awakeValues; // ivar: _awakeValues


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithXValue:(CGFloat)arg0 asleepUnspecifiedYValues:(id)arg1 asleepDeepYValues:(id)arg2 asleepCoreYValues:(id)arg3 asleepRemYValues:(id)arg4 awakeValues:(id)arg5 inBedYValues:(id)arg6 yValues:(id)arg7 highlighted:(BOOL)arg8 userInfo:(id)arg9 ;


@end


#endif