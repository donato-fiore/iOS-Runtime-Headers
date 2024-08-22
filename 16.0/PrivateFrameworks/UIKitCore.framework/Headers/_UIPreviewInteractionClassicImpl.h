// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPREVIEWINTERACTIONCLASSICIMPL_H
#define _UIPREVIEWINTERACTIONCLASSICIMPL_H

@class CADisplayLink, NSString;
@protocol _UIPreviewInteractionImpl, _UIPreviewInteractionTouchForceProviding, UIPreviewInteractionDelegate;

#import <Foundation/Foundation.h>

#import "_UIPreviewInteractionStateRecognizer.h"
#import "_UIDeepPressAnalyzer.h"
#import "_UIStatesFeedbackGenerator.h"
#import "_UIPreviewInteractionHighlighter.h"
#import "_UIPreviewInteractionViewControllerHelper.h"
#import "UIPreviewInteraction.h"
#import "UIView.h"

@interface _UIPreviewInteractionClassicImpl : NSObject <_UIPreviewInteractionImpl>

 {
    ? _previewInteractionFlags;
    id<_UIPreviewInteractionTouchForceProviding> *_systemTouchForceProvider;
    _UIPreviewInteractionStateRecognizer *_currentInteractionStateRecognizer;
    CGPoint _sceneReferenceLocationFromLatestUpdate;
    CADisplayLink *_continuousEvaluationDisplayLink;
    _UIDeepPressAnalyzer *_deepPressAnalyzer;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    BOOL _feedbackGeneratorTurnedOn;
    _UIPreviewInteractionHighlighter *_highlighter;
    _UIPreviewInteractionViewControllerHelper *_viewControllerHelper;
    id *_viewControllerPresentationObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPreviewInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction; // ivar: _previewInteraction
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<_UIPreviewInteractionTouchForceProviding> *touchForceProvider; // ivar: _touchForceProvider
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_shouldCancelTransitionToState:(NSInteger)arg0 ;
-(id)_gestureRecognizerForExclusionRelationship;
-(id)init;
-(id)initWithView:(id)arg0 previewInteraction:(id)arg1 ;
-(struct CGPoint )locationInCoordinateSpace:(id)arg0 ;
-(void)_actuateFeedbackForStateIfNeeded:(NSInteger)arg0 ;
-(void)_endContinuousEvaluation;
-(void)_endHighlightingIfNeeded;
-(void)_endInteractionIfNeeded;
-(void)_endInteractiveStateTransitions;
-(void)_endUsingFeedbackIfNeeded;
-(void)_endViewControllerPresentationObserving;
-(void)_prepareForInteractionIfNeeded;
-(void)_prepareForViewControllerPresentationObserving;
-(void)_prepareHighlighterIfNeeded;
-(void)_prepareUsingFeedback;
-(void)_prepareUsingFeedbackIfNeeded;
-(void)_resetAfterInteraction;
-(void)_startPreviewAtLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(void)_turnOffFeedbackGenerator;
-(void)_turnOnFeedbackGenerator;
-(void)_updateFeedbackTowardNextState:(NSInteger)arg0 progress:(CGFloat)arg1 ;
-(void)_updateForContinuousEvaluation:(id)arg0 ;
-(void)_updateForCurrentTouchForceProvider;
-(void)_updateHighlighter:(CGFloat)arg0 ;
-(void)_updateInteractionStateRecognizerForTouchForce:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 withCentroidAtLocation:(struct CGPoint )arg2 ;
-(void)cancelInteraction;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif