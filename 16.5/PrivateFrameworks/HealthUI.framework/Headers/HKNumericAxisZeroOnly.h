// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKNUMERICAXISZEROONLY_H
#define HKNUMERICAXISZEROONLY_H

@class NSString;


#import "HKNumericAxis.h"

@interface HKNumericAxisZeroOnly : HKNumericAxis

@property (readonly, nonatomic) NSString *zeroLabel; // ivar: _zeroLabel


-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithZeroLabel:(id)arg0 axisConfiguration:(id)arg1 ;


@end


#endif