// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCDOWNLOADPROGRESSVIEW_H
#define DOCDOWNLOADPROGRESSVIEW_H

@class UIView, NSOperationQueue, UIColor, NSProgress, UITapGestureRecognizer;


#import "DOCDeterminateProgressRingView.h"
#import "DOCGhostRingView.h"
#import "DOCIndeterminateProgressRingView.h"

@interface DOCDownloadProgressView : UIView {
    NSOperationQueue *_pendingAnimationQueue;
}


@property (copy, nonatomic) UIColor *activeStrokeColor; // ivar: _activeStrokeColor
@property (nonatomic) BOOL canShowStopButton; // ivar: _canShowStopButton
@property (retain, nonatomic) DOCDeterminateProgressRingView *determinateProgressRingView; // ivar: _determinateProgressRingView
@property (retain, nonatomic) DOCGhostRingView *ghostRingView; // ivar: _ghostRingView
@property (nonatomic) BOOL graduallyIncreasingProgress; // ivar: _graduallyIncreasingProgress
@property (copy, nonatomic) UIColor *inactiveStrokeColor; // ivar: _inactiveStrokeColor
@property (retain, nonatomic) DOCIndeterminateProgressRingView *indeterminateProgressRingView; // ivar: _indeterminateProgressRingView
@property (retain, nonatomic) NSProgress *observedProgress; // ivar: _observedProgress
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_addToPendingAnimationQueue:(id)arg0 ;
-(void)_commonInit;
-(void)_updateStatusPropertiesAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)animateToFullRingAndHideWithCompletion:(id)arg0 ;
-(void)beginGraduallyIncreasingProgress;
-(void)dealloc;
-(void)fadeoutWithCompletion:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif