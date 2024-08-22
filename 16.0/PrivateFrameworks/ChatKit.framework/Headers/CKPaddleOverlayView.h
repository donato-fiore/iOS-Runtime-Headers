// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPADDLEOVERLAYVIEW_H
#define CKPADDLEOVERLAYVIEW_H

@class UIView, UIImageView, UIVisualEffectView;
@protocol CKPaddleOverlayViewDelegate;



@interface CKPaddleOverlayView : UIView

@property (nonatomic) CGRect anchorRect; // ivar: _anchorRect
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *darkOuterGlowView; // ivar: _darkOuterGlowView
@property (weak, nonatomic) NSObject<CKPaddleOverlayViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *innerGlowView; // ivar: _innerGlowView
@property (nonatomic) CGRect overlayRect; // ivar: _overlayRect
@property (retain, nonatomic) UIView *paddleView; // ivar: _paddleView
@property (retain, nonatomic) UIImageView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) UIView *viewToShow; // ivar: _viewToShow
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithOverlayView:(id)arg0 atAnchorRect:(struct CGRect )arg1 inView:(id)arg2 delegate:(id)arg3 ;
-(void)dismiss;
-(void)drawMacPaddle;
-(void)showPaddleAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateShadowVisualStyling;


@end


#endif