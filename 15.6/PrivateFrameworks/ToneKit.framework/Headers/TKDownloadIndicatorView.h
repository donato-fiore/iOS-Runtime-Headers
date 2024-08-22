// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKDOWNLOADINDICATORVIEW_H
#define TKDOWNLOADINDICATORVIEW_H

@class UIView, CADisplayLink, NSMutableArray, CAMediaTimingFunction;



@interface TKDownloadIndicatorView : UIView {
    float _initialAnimatedProgress;
    float _currentAnimatedProgress;
    CGFloat _progressAnimationEndTime;
    CGFloat _progressAnimationStartTime;
    BOOL _isAnimatingProgress;
    CADisplayLink *_displayLink;
    NSMutableArray *_progressAnimationCompletionHandlers;
    CAMediaTimingFunction *_progressAnimationTimingFunction;
}


@property (nonatomic) float progress; // ivar: _progress


+(struct CGSize )_intrinsicDownloadIndicatorViewSize;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleDisplayLinkDidFire:(id)arg0 ;
-(void)_stopProgressAnimation;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif