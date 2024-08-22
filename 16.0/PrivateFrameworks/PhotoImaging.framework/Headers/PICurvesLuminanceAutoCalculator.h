// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICURVESLUMINANCEAUTOCALCULATOR_H
#define PICURVESLUMINANCEAUTOCALCULATOR_H



#import "PICurvesAutoCalculator.h"

@interface PICurvesLuminanceAutoCalculator : PICurvesAutoCalculator



-(id)computeCurvesForImageHistogram:(id)arg0 ;
-(struct CGPoint )curvePointAtIndex:(int)arg0 blackPoint:(CGFloat)arg1 whitePoint:(CGFloat)arg2 histogram:(id)arg3 ;


@end


#endif