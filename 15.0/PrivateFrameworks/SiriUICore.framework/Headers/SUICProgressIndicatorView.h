// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUICPROGRESSINDICATORVIEW_H
#define SUICPROGRESSINDICATORVIEW_H

@class UIView, LAUICheckmarkLayer, UIImageView;


#import "_SUICRingLayer.h"
#import "_SUICProgressRingLayer.h"

@interface SUICProgressIndicatorView : UIView {
    _SUICRingLayer *_shadowRingLayer;
    _SUICProgressRingLayer *_progressRingLayer;
    LAUICheckmarkLayer *_checkmarkLayer;
    UIImageView *_actionArrowImageView;
}


@property (nonatomic, getter=isArrowVisible) BOOL arrowVisible;
@property (nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible;
@property (nonatomic, getter=isDarkened) BOOL darkened;
@property (nonatomic) CGFloat progressValue;
@property (nonatomic, getter=isSpinning) BOOL spinning;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)setRingColor:(id)arg0 ;
-(void)setRingLineWidth:(CGFloat)arg0 ;
-(void)setShadowColor:(id)arg0 ;
-(void)setShadowLineWidth:(CGFloat)arg0 ;


@end


#endif