// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYBACKCONTENTTRANSITIONINGVIEW_H
#define AVPLAYBACKCONTENTTRANSITIONINGVIEW_H

@class UIScrollView, NSString, NSValue;
@protocol UIScrollViewDelegate, AVPlaybackContentContainer, AVPlaybackContentTransitioningViewDelegate;


#import "AVPlaybackContentContainerView.h"

@interface AVPlaybackContentTransitioningView : UIScrollView <UIScrollViewDelegate, AVPlaybackContentContainer>



@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView; // ivar: _activeContentView
@property (nonatomic) NSInteger boundsOrContentSizeAdjustmentCount; // ivar: _boundsOrContentSizeAdjustmentCount
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (weak, nonatomic) NSObject<AVPlaybackContentTransitioningViewDelegate> *contentTransitioningDelegate; // ivar: _contentTransitioningDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frameForActiveContentView; // ivar: _frameForActiveContentView
@property (nonatomic) CGRect frameForTransitioningContentView; // ivar: _frameForTransitioningContentView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVPlaybackContentContainerView *incomingContentView; // ivar: _incomingContentView
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // ivar: _playingOnSecondScreen
@property (copy, nonatomic) NSString *stateDescription; // ivar: _stateDescription
@property (readonly) Class superclass;
@property (retain, nonatomic) NSValue *targetContentOffset; // ivar: _targetContentOffset
@property (readonly, nonatomic) NSInteger transitionDirection; // ivar: _transitionDirection
@property (nonatomic, getter=isTransitionInteractive) BOOL transitionInteractive; // ivar: _transitionInteractive
@property (readonly, nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress
@property (readonly, nonatomic) NSInteger transitionState; // ivar: _transitionState
@property (nonatomic) CGRect videoContentFrame;


-(BOOL)_canTransitionFromState:(NSInteger)arg0 toState:(NSInteger)arg1 ;
-(BOOL)_isAdjustingBoundsOrContentSize;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_descriptionForState:(NSInteger)arg0 ;
-(id)_makeStateDescription;
-(id)initWithFrame:(struct CGRect )arg0 activeContentView:(id)arg1 ;
-(struct CGRect )_frameExcludingActiveContent;
-(struct CGRect )_frameExcludingTransitioningContent;
-(void)_ensureContentViews;
-(void)_performBoundsOrContentSizeAdjustment:(id)arg0 ;
-(void)_updateSizeAndContentFrame;
-(void)_updateTransitionStateIfPossible;
-(void)performTransition:(NSInteger)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setDelegate:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setVideoGravity:(NSInteger)arg0 removingAllSubayerTransformAnimations:(BOOL)arg1 ;


@end


#endif