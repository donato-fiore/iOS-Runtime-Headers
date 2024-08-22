// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DCHARTPIERESIZER_H
#define TSCH3DCHARTPIERESIZER_H



#import "TSCH3DChartResizer.h"

@interface TSCH3DChartPieResizer : TSCH3DChartResizer {
    tvec2<bool> _directions;
}




+(float)perspectiveness;
+(struct tvec2<float> )adjustLabelWrapSize:(*void)arg0 ;
-(struct tvec2<bool> )canImprove;
-(struct tvec2<float> )squareSize:(*void)arg0 ;
-(struct tvec2<float> )updateDirectionsFromRequestedSize:(*void)arg0 startingSize:(*void)arg1 ;
-(struct tvec2<float> )updateResizerFromRequestedSize:(*void)arg0 startingSize:(*void)arg1 ;
-(struct tvec3<float> )adjust:(*void)arg0 by:(float)arg1 ;
-(void)setScale:(*void)arg0 ;


@end


#endif