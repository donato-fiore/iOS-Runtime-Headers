// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCURVEDPROGRESSVIEW_H
#define NTKRICHCOMPLICATIONCURVEDPROGRESSVIEW_H



#import "NTKRichComplicationProgressView.h"
#import "NTKRichComplicationCurveView.h"

@interface NTKRichComplicationCurvedProgressView : NTKRichComplicationProgressView {
    CGFloat _curveWidth;
    NSInteger _progressFillStyle;
    NTKRichComplicationCurveView *_backgroundView;
    NTKRichComplicationCurveView *_foregroundView;
}


@property (nonatomic) CGFloat beginAngle; // ivar: _beginAngle
@property (nonatomic) BOOL clockwise; // ivar: _clockwise
@property (nonatomic) CGFloat endAngle; // ivar: _endAngle


-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFamily:(NSInteger)arg0 curveWidth:(CGFloat)arg1 padding:(CGFloat)arg2 beginAngle:(CGFloat)arg3 endAngle:(CGFloat)arg4 forDevice:(id)arg5 withFilterStyle:(NSInteger)arg6 progressFillStyle:(NSInteger)arg7 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg0 ;
-(id)overrideBackgroundGradientColorsForGradientColors:(id)arg0 locations:(id)arg1 ;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif