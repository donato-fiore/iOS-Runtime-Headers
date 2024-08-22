// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICHARTMULTIDASHEDBACKGROUNDVIEW_H
#define FIUICHARTMULTIDASHEDBACKGROUNDVIEW_H

@class UIImageView, UIColor;


#import "FIUIChartBackgroundView.h"

@interface FIUIChartMultiDashedBackgroundView : FIUIChartBackgroundView {
    UIImageView *_imageView;
    UIColor *_lineColor;
    UIColor *_subLineColor;
    CGFloat _previousWidth;
}


@property (nonatomic) BOOL backgroundIsTransparent; // ivar: _backgroundIsTransparent
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (nonatomic) NSUInteger numLines; // ivar: _numLines
@property (nonatomic) CGFloat sublineInset; // ivar: _sublineInset
@property (nonatomic) NSUInteger sublineInterval; // ivar: _sublineInterval


+(id)calculateRoundedLinePositionsForTotalWidth:(CGFloat)arg0 lineWidth:(CGFloat)arg1 numberOfLines:(NSUInteger)arg2 roundedInView:(id)arg3 ;
-(id)_stretchableLinesPatternImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setNeedsRegenerateBackgroundImage;
-(void)layoutSubviews;


@end


#endif