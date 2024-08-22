// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFFLUIDPROGRESSVIEW_H
#define _SFFLUIDPROGRESSVIEW_H

@class UIView, WBSFluidProgressState, NSString, UIColor;
@protocol WBSFluidProgressControllerDelegate, _SFFluidProgressViewDelegate;



@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate>

 {
    UIView *_progressBar;
    UIView *_clippingView;
    WBSFluidProgressState *_state;
}


@property (nonatomic) BOOL alignsToTop; // ivar: _alignsToTop
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFFluidProgressViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL progressAnimationSuppressed; // ivar: _progressAnimationSuppressed
@property (retain, nonatomic) UIColor *progressBarFillColor; // ivar: _progressBarFillColor
@property (readonly, nonatomic, getter=isShowingProgress) BOOL showingProgress;
@property (readonly) Class superclass;


+(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_progressBarBoundsForValue:(CGFloat)arg0 ;
// -(void)_animateUsingDefaultTiming:(BOOL)arg0 stepAnimationTime:(CGFloat)arg1 options:(NSUInteger)arg2 animations:(id)arg3 completion:(unk)arg4  ;
-(void)_finishProgressBarWithDuration:(CGFloat)arg0 ;
-(void)fluidProgressController:(id)arg0 setProgressToCurrentPosition:(id)arg1 ;
-(void)fluidProgressController:(id)arg0 startFluidProgressBar:(id)arg1 animateFillFade:(BOOL)arg2 ;
-(void)fluidProgressController:(id)arg0 updateFluidProgressBar:(id)arg1 completion:(id)arg2 ;
-(void)fluidProgressControllerFinishProgressBar:(id)arg0 animateFillFade:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setAlignToTop:(BOOL)arg0 ;
-(void)setProgressToCurrentPositionForState:(id)arg0 ;


@end


#endif