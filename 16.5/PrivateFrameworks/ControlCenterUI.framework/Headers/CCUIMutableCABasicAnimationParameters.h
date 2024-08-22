// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIMUTABLECABASICANIMATIONPARAMETERS_H
#define CCUIMUTABLECABASICANIMATIONPARAMETERS_H

@protocol CCUIAnimationTimingFunctionDescription;


#import "CCUICABasicAnimationParameters.h"

@interface CCUIMutableCABasicAnimationParameters : CCUICABasicAnimationParameters

@property (nonatomic) CGFloat duration;
@property (nonatomic) CAFrameRateRange frameRateRange;
@property (nonatomic) unsigned int highFrameRateReason;
@property (copy, nonatomic) NSObject<CCUIAnimationTimingFunctionDescription> *timingFunction;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif