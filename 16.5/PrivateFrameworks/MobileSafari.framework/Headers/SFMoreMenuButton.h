// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFMOREMENUBUTTON_H
#define SFMOREMENUBUTTON_H

@class SFDimmingButton, UIColor, UIView;
@protocol SFDeferrableUpdateView;


#import "SFProgressView.h"

@interface SFMoreMenuButton : SFDimmingButton <SFDeferrableUpdateView>

 {
    SFProgressView *_progressView;
    CGFloat _movedToWindowTime;
    BOOL _isShowingArrowDown;
    BOOL _iconFilled;
    UIColor *_progressTintColor;
    ? _deferrableUpdateViewState;
    UIView *_viewPendingPulse;
}


@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (nonatomic, getter=isIconFilled) BOOL iconFilled;
@property (nonatomic) NSInteger progressStyle; // ivar: _progressStyle
@property (retain, nonatomic) UIColor *progressTintColor;
@property (nonatomic) NSInteger symbolScale; // ivar: _symbolScale


-(BOOL)_shouldShowProgressView;
-(CGFloat)_progressViewRadius;
-(CGFloat)_progressViewTrackWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? *)deferrableUpdateViewState;
-(void)_setShowsProgressView:(BOOL)arg0 ;
-(void)_updateContentsAnimated:(BOOL)arg0 ;
-(void)_updateImage;
-(void)_updateImageAllowingDissolve:(BOOL)arg0 ;
-(void)_updateProgressViewMetrics;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setNeedsPulseOnView:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContents;


@end


#endif