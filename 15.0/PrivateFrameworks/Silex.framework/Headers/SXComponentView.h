// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCOMPONENTVIEW_H
#define SXCOMPONENTVIEW_H

@class UIView, NSString;
@protocol UIGestureRecognizerDelegate, SXTextCanvasRenderSource, SXAXAssistiveTechStatusChangeListener, SXTransitionableComponentView, SXComponentInteractable, SXDOMObjectProviding, SXComponent, SXComponentHosting, SXComponentLayout, SXComponentStyle, SXComponentStyleRenderer, SXComponentStyleRendererFactory, SXPresentationDelegate, SXComponentState;


#import "SXColumnLayout.h"
#import "SXFillView.h"
#import "SXUnitConverter.h"
#import "SXViewport.h"

@interface SXComponentView : UIView <UIGestureRecognizerDelegate, SXTextCanvasRenderSource, SXAXAssistiveTechStatusChangeListener, SXTransitionableComponentView, SXComponentInteractable>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (nonatomic) CGRect absoluteFrame; // ivar: _absoluteFrame
@property (nonatomic) BOOL allowViewHierarchyRemoval; // ivar: _allowViewHierarchyRemoval
@property (nonatomic) BOOL animationsAndBehaviorsEnabled; // ivar: _animationsAndBehaviorsEnabled
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGRect backgroundViewFrame; // ivar: _backgroundViewFrame
@property (nonatomic) UIEdgeInsets borderInsets; // ivar: _borderInsets
@property (readonly, nonatomic) NSObject<SXComponent> *component; // ivar: _component
@property (weak, nonatomic) NSObject<SXComponentHosting> *componentHost; // ivar: _componentHost
@property (nonatomic) NSUInteger componentIndex; // ivar: _componentIndex
@property (readonly, nonatomic) NSObject<SXComponentLayout> *componentLayout; // ivar: _componentLayout
@property (nonatomic) UIEdgeInsets componentLayoutMargins; // ivar: _componentLayoutMargins
@property (retain, nonatomic) NSObject<SXComponentStyle> *componentStyle; // ivar: _componentStyle
@property (readonly, nonatomic) NSObject<SXComponentStyleRenderer> *componentStyleRenderer; // ivar: _componentStyleRenderer
@property (readonly, nonatomic) NSObject<SXComponentStyleRendererFactory> *componentStyleRendererFactory; // ivar: _componentStyleRendererFactory
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SXColumnLayout *documentColumnLayout; // ivar: _documentColumnLayout
@property (weak, nonatomic) SXFillView *fillView; // ivar: _fillView
@property (nonatomic) BOOL hasAnimation; // ivar: _hasAnimation
@property (nonatomic) BOOL hasBehaviors; // ivar: _hasBehaviors
@property (nonatomic) BOOL hasRenderedComponentStyle; // ivar: _hasRenderedComponentStyle
@property (readonly, nonatomic) BOOL hasRenderedContents; // ivar: _hasRenderedContents
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *highlightView; // ivar: _highlightView
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) CGRect interactionFrame;
@property (readonly, nonatomic) BOOL isDraggable; // ivar: _isDraggable
@property (readonly, nonatomic) BOOL isTransitionable;
@property (nonatomic) CGRect originalFrame; // ivar: _originalFrame
@property (nonatomic) ? presentationChanges; // ivar: _presentationChanges
@property (readonly, weak, nonatomic) NSObject<SXPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (nonatomic) CGRect presentationFrame; // ivar: _presentationFrame
@property (nonatomic) NSInteger presentationState; // ivar: _presentationState
@property (nonatomic) BOOL requiresThoroughFrameCalculations; // ivar: _requiresThoroughFrameCalculations
@property (retain, nonatomic) NSObject<SXComponentState> *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect transitionContainerFrame;
@property (readonly, nonatomic) UIView *transitionContainerView;
@property (readonly, nonatomic) CGRect transitionContentFrame;
@property (readonly, nonatomic) UIView *transitionContentView;
@property (readonly, nonatomic) BOOL transitionViewIsVisible;
@property (readonly, nonatomic) BOOL transitionViewShouldFadeInContent;
@property (readonly, nonatomic) CGRect transitionVisibleFrame;
@property (readonly, nonatomic) SXUnitConverter *unitConverter; // ivar: _unitConverter
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport
@property (nonatomic) NSInteger visibilityState; // ivar: _visibilityState


-(BOOL)allowHierarchyRemoval;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureShouldBegin:(id)arg0 ;
-(BOOL)userInteractable;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg0 ;
-(id)classification;
-(id)contentViewForBehavior:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg0 viewport:(id)arg1 presentationDelegate:(id)arg2 componentStyleRendererFactory:(id)arg3 ;
-(struct CGRect )originalFrameForContentView:(id)arg0 behavior:(id)arg1 ;
-(void)animationDidFinish:(id)arg0 ;
-(void)animationDidStart:(id)arg0 ;
-(void)assistiveTechnologyStatusDidChange;
-(void)configure;
-(void)dealloc;
-(void)didApplyBehavior:(id)arg0 ;
-(void)didMoveToWindow;
-(void)didReceiveMemoryWarning;
-(void)discardContents;
-(void)invalidateComponentStyle;
-(void)loadComponent:(id)arg0 ;
-(void)prepareComponentStyleRendererForStyle:(id)arg0 ;
-(void)prepareForTransitionType:(NSUInteger)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)provideInfosLayoutTo:(id)arg0 ;
-(void)receivedInfo:(id)arg0 fromLayoutingPhaseWithIdentifier:(id)arg1 ;
-(void)renderComponentStyle;
-(void)renderContents;
-(void)renderContentsIfNeeded;
-(void)restoreBehavior;
-(void)setupComponentStyleRendererForStyle:(id)arg0 ;
-(void)updateAllowHierarchyRemovalWithComponent:(id)arg0 componentStyle:(id)arg1 ;
-(void)visibilityStateDidChangeFromState:(NSInteger)arg0 ;
-(void)willPresentComponentWithChanges:(struct ? )arg0 ;


@end


#endif