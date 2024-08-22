// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFULLSCREENCANVASCONTROLLER_H
#define SXFULLSCREENCANVASCONTROLLER_H

@class UIColor, UIView, NSString, UITapGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;
@protocol UIGestureRecognizerDelegate, UIScrollViewDelegate, SXFullscreenImageViewDelegate, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXFullscreenCaptionViewDelegate, SXFullscreenNavigationBarViewDelegate, SXDragManagerDataSource, SXFullscreenCanvasViewControllerDelegate, SXFullscreenCaptionViewFactory, SXFullscreenCanvasShowable;

#import <Foundation/Foundation.h>

#import "SXFullscreenCanvasViewController.h"
#import "SXFullscreenCaptionView.h"
#import "SXDragManager.h"
#import "SXItemizedScrollView.h"
#import "SXFullscreenNavigationBarView.h"

@interface SXFullscreenCanvasController : NSObject <UIGestureRecognizerDelegate, UIScrollViewDelegate, SXFullscreenImageViewDelegate, SXItemizedScrollViewDataSource, SXItemizedScrollViewDelegate, SXFullscreenCaptionViewDelegate, SXFullscreenNavigationBarViewDelegate, SXDragManagerDataSource, SXFullscreenCanvasViewControllerDelegate>



@property (readonly, nonatomic) NSUInteger activeViewIndex;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) SXFullscreenCanvasViewController *canvasViewController; // ivar: _canvasViewController
@property (retain, nonatomic) SXFullscreenCaptionView *captionView; // ivar: _captionView
@property (readonly, nonatomic) NSObject<SXFullscreenCaptionViewFactory> *captionViewFactory; // ivar: _captionViewFactory
@property (nonatomic) CGRect currentDestinationFrame; // ivar: _currentDestinationFrame
@property (nonatomic) CGRect currentOriginFrame; // ivar: _currentOriginFrame
@property (readonly, nonatomic) CGFloat currentRotation; // ivar: _currentRotation
@property (readonly, nonatomic) CGFloat currentScale; // ivar: _currentScale
@property (readonly, nonatomic) CGPoint currentTranslation; // ivar: _currentTranslation
@property (retain, nonatomic) UIView *currentView; // ivar: _currentView
@property (nonatomic) NSUInteger currentViewIndex; // ivar: _currentViewIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SXDragManager *dragManager; // ivar: _dragManager
@property (readonly, nonatomic) UIView *gestureView; // ivar: _gestureView
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFullscreen; // ivar: _isFullscreen
@property (readonly, nonatomic) BOOL isStoppingVerticalSwiping; // ivar: _isStoppingVerticalSwiping
@property (nonatomic) BOOL isSupressingColorSettings; // ivar: _isSupressingColorSettings
@property (readonly, nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (retain, nonatomic) SXItemizedScrollView *itemizedScrollView; // ivar: _itemizedScrollView
@property (nonatomic) BOOL lessTouchesAreInterupting; // ivar: _lessTouchesAreInterupting
@property (retain, nonatomic) SXFullscreenNavigationBarView *navigationBarView; // ivar: _navigationBarView
@property (readonly, nonatomic) UITapGestureRecognizer *openTapGestureRecognizer; // ivar: _openTapGestureRecognizer
@property (nonatomic) BOOL orientationChangeIsInterupting; // ivar: _orientationChangeIsInterupting
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (readonly, nonatomic) BOOL panIsActive; // ivar: _panIsActive
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // ivar: _pinchGestureRecognizer
@property (readonly, nonatomic) BOOL pinchIsActive; // ivar: _pinchIsActive
@property (nonatomic) int previousExpansionMode; // ivar: _previousExpansionMode
@property (readonly, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // ivar: _rotationGestureRecognizer
@property (readonly, nonatomic) BOOL rotationIsActive; // ivar: _rotationIsActive
@property (readonly, nonatomic) NSUInteger sharingPolicy; // ivar: _sharingPolicy
@property (readonly, weak, nonatomic) NSObject<SXFullscreenCanvasShowable> *showable; // ivar: _showable
@property (readonly, nonatomic) CGPoint startingAnchorPoint; // ivar: _startingAnchorPoint
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) NSUInteger totalActiveGestureRecognizers; // ivar: _totalActiveGestureRecognizers
@property (readonly, nonatomic) BOOL verticalSwipingIsActive; // ivar: _verticalSwipingIsActive


-(BOOL)captionView:(id)arg0 tapGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)comparePoint:(struct CGPoint )arg0 withPoint:(struct CGPoint )arg1 maxDelta:(CGFloat)arg2 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)otherInteractivityGestureShouldBegin:(id)arg0 ;
-(NSInteger)viewIndexForPoint:(struct CGPoint )arg0 ;
-(NSUInteger)numberOfViewsInItemizedScrollView:(id)arg0 ;
-(id)dragManager:(id)arg0 dragableAtLocation:(struct CGPoint )arg1 ;
-(id)initWithShowable:(id)arg0 captionViewFactory:(id)arg1 sharingPolicy:(NSUInteger)arg2 ;
-(id)itemizedScrollView:(id)arg0 viewAtIndex:(NSUInteger)arg1 ;
-(id)viewForDragManager:(id)arg0 ;
-(struct CGPoint )calculateAnchorPointFromBounds:(struct CGRect )arg0 andPoint:(struct CGPoint )arg1 ;
-(struct CGRect )itemizedScrollView:(id)arg0 frameForViewAtIndex:(NSUInteger)arg1 ;
-(struct CGSize )fitSizeForRect:(struct CGRect )arg0 ;
-(void)changeCaptionViewForViewWithIndex:(NSUInteger)arg0 expanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)didEndTransitionFromFullScreen:(BOOL)arg0 toFullScreen:(BOOL)arg1 ;
-(void)didFinishFullscreenActiveIndex:(NSUInteger)arg0 ;
-(void)dismiss;
-(void)fullScreenCanvasViewControllerWantsToDismiss:(id)arg0 ;
-(void)fullScreenImageViewDidStartZooming:(id)arg0 ;
-(void)fullScreenImageViewDidStopZooming:(id)arg0 ;
-(void)fullscreenCanvasViewController:(id)arg0 willTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)fullscreenNavigationBarViewDoneButtonPressed:(id)arg0 ;
-(void)goToFullScreenFromFullScreenAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)goToFullScreenFromOriginalAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)goToOriginalFromFullScreenAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)goToOriginalFromOriginalAnimated:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)goToOriginalFromVerticalSwipingWithVelocity:(struct CGPoint )arg0 completionBlock:(id)arg1 ;
-(void)handleGestureRecognizer:(id)arg0 ;
-(void)handleOpenTapGesture:(id)arg0 ;
-(void)handlePanGestureRecognizer:(id)arg0 ;
-(void)handlePinchGestureRecognizer:(id)arg0 ;
-(void)handleRotationGestureRecognizer:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)itemizedScrollView:(id)arg0 didChangeToActiveViewIndex:(NSUInteger)arg1 ;
-(void)itemizedScrollView:(id)arg0 didHideViewWithIndex:(NSUInteger)arg1 ;
-(void)itemizedScrollView:(id)arg0 willShowViewWithIndex:(NSUInteger)arg1 ;
-(void)presentFullscreenWithIndex:(NSUInteger)arg0 ;
-(void)removeScaleAndTranslationFromCurrentView;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setup;
-(void)setupGestureRecognizersInView:(id)arg0 ;
-(void)setupKeyCommandsForCanvasViewController:(id)arg0 ;
-(void)setupScrollViewIfNeededWithActiveIndex:(NSUInteger)arg0 ;
-(void)startSupressingColorSettings;
-(void)startTransitionToFullScreen:(BOOL)arg0 controllable:(BOOL)arg1 ;
-(void)startVerticalSwiping;
-(void)stopSupressingColorSettings;
-(void)stopTransformingCancelled:(BOOL)arg0 ;
-(void)stopVerticalSwipingDismissed:(BOOL)arg0 lastVelocity:(struct CGPoint )arg1 ;
-(void)transferCurrentViewToCanvas;
-(void)transferCurrentViewToOriginalView;
-(void)transferGestureViewToView:(id)arg0 ;
-(void)transformViewToSize:(struct CGSize )arg0 ;
-(void)updateTransform;
-(void)willStartTransformingWithGestureRecognizer:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif