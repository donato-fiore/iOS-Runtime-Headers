// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEHIGHLIGHTBUTTON_H
#define CKMESSAGEHIGHLIGHTBUTTON_H

@class UIView, CAShapeLayer, UIVisualEffectView, UIButton, UIImageView;
@protocol CKMessageHighlightButtonDelegate;



@interface CKMessageHighlightButton : UIView

@property (readonly, nonatomic) UIView *backgroundColorView; // ivar: _backgroundColorView
@property (readonly, nonatomic) UIView *backgroundColorViewForCrossFade; // ivar: _backgroundColorViewForCrossFade
@property (readonly, nonatomic) CAShapeLayer *blurEffectMaskLayer; // ivar: _blurEffectMaskLayer
@property (readonly, nonatomic) UIVisualEffectView *blurEffectView; // ivar: _blurEffectView
@property (readonly, nonatomic) UIButton *button; // ivar: _button
@property (weak, nonatomic) NSObject<CKMessageHighlightButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL didUpdate; // ivar: _didUpdate
@property (readonly, nonatomic) UIImageView *glyphView; // ivar: _glyphView
@property (readonly, nonatomic) UIImageView *glyphViewForCrossFade; // ivar: _glyphViewForCrossFade
@property (readonly, nonatomic) BOOL isHighlighted; // ivar: _isHighlighted


-(char)transcriptOrientation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithInitialState:(BOOL)arg0 ;
-(struct CGRect )balloonViewFrame;
-(struct CGRect )calculateFrameRelativeToBalloonViewFrame;
-(struct CGRect )calculateFrameRelativeToBalloonViewFrame:(struct CGRect )arg0 transcriptHighlightFrame:(struct CGRect )arg1 ;
-(struct CGRect )calculateTranscriptHighlightFrameRelativeToBalloonFrame:(struct CGRect )arg0 ;
-(struct CGRect )replyButtonFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )transcriptHighlightSize;
-(void)buttonWasPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)performFadeoutAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)performHideAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)performSelectedAnimation:(id)arg0 ;
-(void)performShowAnimation:(id)arg0 ;
-(void)performUnselectedDismissAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;


@end


#endif