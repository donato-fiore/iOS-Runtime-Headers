// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DVERTICALCHARTTITLEPOSITIONER_H
#define TSCH3DVERTICALCHARTTITLEPOSITIONER_H



#import "TSCH3DChartTitlePositioner.h"

@interface TSCH3DVerticalChartTitlePositioner : TSCH3DChartTitlePositioner



-(float)categoryVerticalPadding;
-(struct LabelTransform )categoryAxisTitleTransform;
-(struct LabelTransform )mainTitleTransform;
-(struct LabelTransform )valueAxisTitleTransform;
-(struct tvec2<float> )sizeOfValueAxisLabelsForAlignment:(unsigned int)arg0 ;


@end


#endif