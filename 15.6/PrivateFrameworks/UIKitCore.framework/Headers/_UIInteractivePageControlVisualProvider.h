// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIINTERACTIVEPAGECONTROLVISUALPROVIDER_H
#define _UIINTERACTIVEPAGECONTROLVISUALPROVIDER_H

@class UIPageControlVisualProvider, NSString, CADisplayLink, CAMediaTimingFunction;
@protocol _UIPageIndicatorFeedDelegate, _UIPageIndicatorStoreDelegate, UIGestureRecognizerDelegate, _UIControlEventsGestureRecognizerDelegate;


#import "UIVisualEffectView.h"
#import "_UIPageControlContentView.h"
#import "UIViewFloatAnimatableProperty.h"
#import "_UIPageControlIndicatorContentView.h"
#import "_UIPageIndicatorFeed.h"
#import "_UIPageIndicatorStore.h"
#import "_UIPageControlInteractor.h"
#import "UIImpactFeedbackGenerator.h"
#import "UILongPressGestureRecognizer.h"
#import "UISelectionFeedbackGenerator.h"
#import "UIDelayedAction.h"
#import "UITapGestureRecognizer.h"

@interface _UIInteractivePageControlVisualProvider : UIPageControlVisualProvider <_UIPageIndicatorFeedDelegate, _UIPageIndicatorStoreDelegate, UIGestureRecognizerDelegate, _UIControlEventsGestureRecognizerDelegate>

 {
    ? _state;
    NSInteger _indicatorStartIndex;
    NSInteger _numberOfVisibleIndicators;
    NSInteger _targetPage;
    NSInteger _currentTick;
    NSInteger _tickThreshold;
    CGFloat _panDistance;
    CGFloat _indicatorPaddingOffset;
    CGFloat _continuousStartIndex;
}


@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) _UIPageControlContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIViewFloatAnimatableProperty *continuousDisplayedPage; // ivar: _continuousDisplayedPage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIPageControlIndicatorContentView *indicatorContentView; // ivar: _indicatorContentView
@property (retain, nonatomic) _UIPageIndicatorFeed *indicatorFeed; // ivar: _indicatorFeed
@property (retain, nonatomic) _UIPageIndicatorStore *indicatorStore; // ivar: _indicatorStore
@property (retain, nonatomic) CAMediaTimingFunction *indicatorTransformCurve; // ivar: _indicatorTransformCurve
@property (retain, nonatomic) _UIPageControlInteractor *interactor; // ivar: _interactor
@property (nonatomic) BOOL isPlatterExpanded;
@property (nonatomic) BOOL isScrubbing;
@property (retain, nonatomic) UIImpactFeedbackGenerator *joggingFeedbackGenerator; // ivar: _joggingFeedbackGenerator
@property (nonatomic) NSInteger previousMoveDirection; // ivar: _previousMoveDirection
@property (nonatomic) CGPoint previousTouchLocation; // ivar: _previousTouchLocation
@property (readonly, nonatomic) NSInteger resolvedDirection; // ivar: _resolvedDirection
@property (retain, nonatomic) UIViewFloatAnimatableProperty *scrubProgress; // ivar: _scrubProgress
@property (retain, nonatomic) UILongPressGestureRecognizer *scrubbingGestureRecognizer; // ivar: _scrubbingGestureRecognizer
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (retain, nonatomic) UIDelayedAction *successiveTapAction; // ivar: _successiveTapAction
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldDisableTouchTracking;
-(NSUInteger)maxVisibleIndicators;
-(id)customIndicatorImageForPage:(NSInteger)arg0 ;
-(id)indicatorImageForPage:(NSInteger)arg0 ;
-(id)preferredIndicatorImage;
-(struct CGSize )indicatorSizeForImage:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeForNumberOfPages:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureIndicator:(id)arg0 atPage:(NSInteger)arg1 ;
-(void)controlEventsGestureRecognizer:(id)arg0 recognizedControlEvent:(NSUInteger)arg1 withEvent:(id)arg2 ;
-(void)didScrubPageControl:(id)arg0 ;
-(void)didTapPageControl:(id)arg0 ;
-(void)didUpdateBackgroundEffect;
-(void)didUpdateBackgroundStyle;
-(void)didUpdateCurrentPageIndicatorTintColor;
-(void)didUpdateCustomLayoutValues;
-(void)didUpdateInteractionTypeAvailability;
-(void)didUpdateLayoutDirection;
-(void)didUpdateNumberOfPages;
-(void)didUpdatePageIndicatorTintColor;
-(void)displayLinkTicked:(id)arg0 ;
-(void)invalidateIndicators;
-(void)layoutSubviews;
-(void)prepare;
-(void)pruneArchivedSubviews:(id)arg0 ;
-(void)resetSuccessiveTapInfo;
-(void)setCustomIndicatorImage:(id)arg0 forPage:(NSInteger)arg1 ;
-(void)setPreferredIndicatorImage:(id)arg0 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg0 ;
-(void)updateDisplayedPageToCurrentPage;


@end


#endif