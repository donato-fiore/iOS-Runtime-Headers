// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKOVERLAYVIEW_H
#define AKOVERLAYVIEW_H

@class UIView, NSString, UIScrollView, UIPointerInteraction;
@protocol PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIPointerInteractionDelegate;


#import "AKMainEventHandler.h"
#import "AKPageController.h"

@interface AKOverlayView : UIView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIPointerInteractionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property BOOL deferWasMovedToSuperviewUntilMoveToWindow; // ivar: _deferWasMovedToSuperviewUntilMoveToWindow
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isObserving; // ivar: _isObserving
@property (weak) AKMainEventHandler *mainEventHandler; // ivar: _mainEventHandler
@property (retain) UIScrollView *observedScrollView; // ivar: _observedScrollView
@property (weak) AKPageController *pageController; // ivar: _pageController
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction; // ivar: _pointerInteraction
@property BOOL scrollViewIsInLiveMagnify; // ivar: _scrollViewIsInLiveMagnify
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_isEditingTextBoxAnnotation;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)annotationController;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPageController:(id)arg0 ;
-(id)keyCommands;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(struct UIEdgeInsets )_scribbleInteraction:(id)arg0 hitToleranceInsetsForElement:(id)arg1 defaultInsets:(struct UIEdgeInsets )arg2 ;
-(void)_postScrollViewRectChangedNotification;
-(void)_postScrollViewScrollOrMagnifyEndNotification;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_scrollViewDidEndAnimation:(id)arg0 ;
-(void)_scrollViewDidEndDecelerating:(id)arg0 ;
-(void)_scrollViewDidEndDragging:(id)arg0 ;
-(void)_scrollViewDidScrollToTop:(id)arg0 ;
-(void)_setupObservation;
-(void)_teardownObservation;
-(void)_updateLayersUsingScrollView;
-(void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)arg0 ;
-(void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)arg0 dismissSelectionMenu:(BOOL)arg1 ;
-(void)_wasMovedToNewSuperview;
-(void)_willEndLiveMagnify:(id)arg0 ;
-(void)_willRemoveFromOldSuperview;
-(void)_willStartLiveMagnify:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)delete:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)duplicate:(id)arg0 ;
-(void)editTextAnnotation:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)paste:(id)arg0 ;
-(void)updateLayers;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif