// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTILINGVIEWTRANSITIONHELPER_H
#define PUTILINGVIEWTRANSITIONHELPER_H

@class NSString, PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition>, NSArray;
@protocol PUTilingViewControllerTransition, PUInterruptibleViewControllerTransition, PUTilingViewControllerTransitionEndPoint;

#import <Foundation/Foundation.h>

#import "PUMaximumChangeRateValueFilter.h"
#import "PUTilingView.h"
#import "PUAnimationGroup.h"

@interface PUTilingViewTransitionHelper : NSObject <PUTilingViewControllerTransition, PUInterruptibleViewControllerTransition>



@property (nonatomic, setter=_setBackgroundProgressOffset:) CGFloat _backgroundProgressOffset; // ivar: __backgroundProgressOffset
@property (retain, nonatomic, setter=_setChromeProgressValueFilter:) PUMaximumChangeRateValueFilter *_chromeProgressValueFilter; // ivar: __chromeProgressValueFilter
@property (nonatomic, setter=_setCurrentOperation:) NSInteger _currentOperation; // ivar: __currentOperation
@property (weak, nonatomic, setter=_setEndPointOwningTilingView:) NSObject<PUTilingViewControllerTransitionEndPoint> *_endPointOwningTilingView; // ivar: __endPointOwningTilingView
@property (weak, nonatomic, setter=_setFromEndPoint:) NSObject<PUTilingViewControllerTransitionEndPoint> *_fromEndPoint; // ivar: __fromEndPoint
@property (nonatomic, setter=_setInteractionOptions:) NSUInteger _interactionOptions; // ivar: __interactionOptions
@property (nonatomic, setter=_setProgressSpeed:) CGFloat _progressSpeed; // ivar: __progressSpeed
@property (nonatomic, setter=_setStartTime:) CGFloat _startTime; // ivar: __startTime
@property (weak, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // ivar: __tilingView
@property (retain, nonatomic, setter=_setTilingViewAnimationGroup:) PUAnimationGroup *_tilingViewAnimationGroup; // ivar: __tilingViewAnimationGroup
@property (weak, nonatomic, setter=_setToEndPoint:) NSObject<PUTilingViewControllerTransitionEndPoint> *_toEndPoint; // ivar: __toEndPoint
@property (nonatomic, setter=_setTransitionProgressOffset:) CGFloat _transitionProgressOffset; // ivar: __transitionProgressOffset
@property (retain, nonatomic, setter=_setTransitionProgressValueFilter:) PUMaximumChangeRateValueFilter *_transitionProgressValueFilter; // ivar: __transitionProgressValueFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat dismissalDuration; // ivar: _dismissalDuration
@property (nonatomic, setter=_setHasStarted:) BOOL hasStarted; // ivar: _hasStarted
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat presentationDuration; // ivar: _presentationDuration
@property (readonly) Class superclass;
@property (weak, nonatomic) PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *transition; // ivar: _transition
@property (nonatomic, getter=isTransitionPaused, setter=_setTransitionPaused:) BOOL transitionPaused; // ivar: _transitionPaused
@property (copy, nonatomic) NSArray *transitionPausingCall; // ivar: _transitionPausingCall


+(id)transitionEndPointWithViewController:(id)arg0 ;
+(void)registerTransitionEndPoint:(id)arg0 forViewController:(id)arg1 ;
+(void)unregisterTransitionEndPoint:(id)arg0 forViewController:(id)arg1 ;
-(BOOL)_endPointUsesTransientTilingView:(id)arg0 ;
-(BOOL)_validateTransitionFromEndPoint:(id)arg0 toEndPoint:(id)arg1 ;
-(NSInteger)_barStyleForEndPoint:(id)arg0 ;
-(id)init;
-(id)initWithPresentationDuration:(CGFloat)arg0 dismissalDuration:(CGFloat)arg1 ;
-(void)_getTransitionProgress:(*CGFloat)arg0 backgroundProgress:(*CGFloat)arg1 chromeProgress:(*CGFloat)arg2 ;
-(void)animateTransitionWithOperation:(NSInteger)arg0 startedInteractively:(BOOL)arg1 ;
-(void)pauseTransition;
-(void)pauseTransitionWithOptions:(NSUInteger)arg0 ;
-(void)resumeTransition:(BOOL)arg0 ;
-(void)updatePausedTransitionWithProgress:(CGFloat)arg0 interactionProgress:(CGFloat)arg1 ;


@end


#endif