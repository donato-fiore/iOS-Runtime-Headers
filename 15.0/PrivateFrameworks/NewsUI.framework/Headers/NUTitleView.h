// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUTITLEVIEW_H
#define NUTITLEVIEW_H

@class UIView;
@protocol NUTitleViewDelegate, OS_dispatch_semaphore, NUTitleViewStyler;


#import "NUAnimationQueue.h"
#import "NUFadeViewAnimator.h"
#import "NUCrossFadeTitleView.h"
#import "NUSlideViewAnimator.h"

@interface NUTitleView : UIView

@property (readonly, nonatomic) NUAnimationQueue *animationQueue; // ivar: _animationQueue
@property (weak, nonatomic) NSObject<NUTitleViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NUFadeViewAnimator *fadeAnimator; // ivar: _fadeAnimator
@property (retain, nonatomic) NUCrossFadeTitleView *incomingTitleView; // ivar: _incomingTitleView
@property (nonatomic) CGRect lastLayoutBounds; // ivar: _lastLayoutBounds
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lingerSemaphore; // ivar: _lingerSemaphore
@property (readonly, nonatomic) NUSlideViewAnimator *slideAnimator; // ivar: _slideAnimator
@property (retain, nonatomic) NSObject<NUTitleViewStyler> *styler; // ivar: _styler
@property (retain, nonatomic) NUCrossFadeTitleView *titleView; // ivar: _titleView


-(id)createMaskingLayerForTranslation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyler:(id)arg0 ;
-(void)applyTitleViewUpdate:(id)arg0 animation:(NSUInteger)arg1 ;
-(void)finishDisplayingTitleViewUpdate:(id)arg0 finished:(id)arg1 ;
-(void)layoutSubviews;
-(void)relayoutWithAnimation:(BOOL)arg0 ;


@end


#endif