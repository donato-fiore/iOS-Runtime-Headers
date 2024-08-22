// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKAUDIOVISIBLERANGEOVERLAYSERIES_H
#define _HKAUDIOVISIBLERANGEOVERLAYSERIES_H



#import "HKLineSeries.h"

@interface _HKAudioVisibleRangeOverlaySeries : HKLineSeries



-(NSInteger)overlayType;
-(id)_leqDataFromBlockCoordinates:(id)arg0 pointTransform:(struct CGAffineTransform )arg1 screenRect:(struct CGRect )arg2 ;
-(void)drawOverlayInContext:(struct CGContext *)arg0 seriesOverlayData:(id)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg0 axisRect:(struct CGRect )arg1 zoomLevelConfiguration:(id)arg2 pointTransform:(struct CGAffineTransform )arg3 renderContext:(struct CGContext *)arg4 secondaryRenderContext:(id)arg5 seriesRenderingDelegate:(id)arg6 ;


@end


#endif