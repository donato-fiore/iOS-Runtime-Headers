// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTCARDIOFITNESSDATA_H
#define HKINTERACTIVECHARTCARDIOFITNESSDATA_H



#import "HKInteractiveChartSinglePointData.h"

@interface HKInteractiveChartCardioFitnessData : HKInteractiveChartSinglePointData

@property (nonatomic) NSInteger age; // ivar: _age
@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (nonatomic) NSInteger classification; // ivar: _classification
@property (nonatomic) NSUInteger sampleCount; // ivar: _sampleCount


-(id)description;


@end


#endif