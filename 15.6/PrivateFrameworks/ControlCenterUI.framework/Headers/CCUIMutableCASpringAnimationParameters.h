// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIMUTABLECASPRINGANIMATIONPARAMETERS_H
#define CCUIMUTABLECASPRINGANIMATIONPARAMETERS_H

@protocol CCUIAnimationTimingFunctionDescription;


#import "CCUICASpringAnimationParameters.h"

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (nonatomic) CGFloat damping;
@property (nonatomic) CAFrameRateRange frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) CGFloat mass;
@property (nonatomic) CGFloat stiffness;
@property (copy, nonatomic) NSObject<CCUIAnimationTimingFunctionDescription> *timingFunction;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif