// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDRICHCOMPLICATIONCORNERBASEGAUGEVIEW_H
#define CDRICHCOMPLICATIONCORNERBASEGAUGEVIEW_H

@class CLKUICurvedColoringLabel;


#import "CDRichComplicationCornerView.h"
#import "CDRichComplicationCurvedProgressView.h"

@interface CDRichComplicationCornerBaseGaugeView : CDRichComplicationCornerView {
    CLKUICurvedColoringLabel *_leftLabel;
    CDRichComplicationCurvedProgressView *_progressView;
    CLKUICurvedColoringLabel *_rightLabel;
}




+(BOOL)isMeteredProgressView;
+(NSInteger)progressFillStyle;
-(CGFloat)_calculateProgressWidthWithLeftLabelWidth:(CGFloat)arg0 rightLabelWidth:(CGFloat)arg1 ;
-(CGFloat)_layoutLabel:(id)arg0 withLabelCenter:(struct CGPoint )arg1 labelWidthInRadius:(CGFloat)arg2 leftInRadius:(CGFloat)arg3 ;
-(CGFloat)_layoutProgressViewWithBeginAngle:(CGFloat)arg0 widthInRadius:(CGFloat)arg1 bottomPadding:(CGFloat)arg2 ;
-(CGFloat)_progressViewHorizontalPaddingInRadius;
-(id)initWithFontFallback:(NSInteger)arg0 ;
-(id)leftLabel;
-(id)progressView;
-(id)rightLabel;
-(void)_calculateLabel:(id)arg0 center:(struct CGPoint *)arg1 widthInRadius:(*CGFloat)arg2 ;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_layoutSubviewsWithoutAnimation;
-(void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration )arg0 ;
-(void)_updateLabelMaxWidths;
-(void)handleGaugeProvider:(id)arg0 leftTextProvider:(id)arg1 rightTextProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)setPosition:(NSInteger)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif