// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKGRAPHVIEWYAXISTRANSFORM_H
#define _HKGRAPHVIEWYAXISTRANSFORM_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"
#import "HKAxis.h"

@interface _HKGraphViewYAxisTransform : NSObject

@property (readonly, nonatomic) HKValueRange *endingRange; // ivar: _endingRange
@property (readonly, nonatomic) HKLinearTransform endingTransform; // ivar: _endingTransform
@property (readonly, nonatomic) NSArray *seriesForTransform; // ivar: _seriesForTransform
@property (readonly, nonatomic) HKLinearTransform startingTransform; // ivar: _startingTransform
@property (readonly, nonatomic) HKAxis *yAxisForTransform; // ivar: _yAxisForTransform


-(id)initWithYAxis:(id)arg0 seriesForTransform:(id)arg1 startingTransform:(struct HKLinearTransform )arg2 endingTransform:(struct HKLinearTransform )arg3 endingRange:(id)arg4 ;


@end


#endif