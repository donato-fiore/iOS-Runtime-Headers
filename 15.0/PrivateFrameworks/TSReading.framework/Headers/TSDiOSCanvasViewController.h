// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDIOSCANVASVIEWCONTROLLER_H
#define TSDIOSCANVASVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, CALayer, NSArray, UIView, NSString, UITapGestureRecognizer, UIPanGestureRecognizer, TSDMultiSelectGestureRecognizer, TSDNudgeGestureRecognizer, NSSet, TSDRepDragGestureRecognizer, TSDRepRotateGestureRecognizer, UIPinchGestureRecognizer;
@protocol TSDCanvasLayerHosting, TSDCanvasZoomTrackerDelegate, UIGestureRecognizerDelegate, TSDiOSCanvasViewControllerDelegate;


#import "TSDGuidedPanController.h"
#import "TSDCanvasZoomTracker.h"
#import "TSDAllTouchesDoneGestureRecognizer.h"
#import "TSDCanvasLayer.h"
#import "TSDCanvasView.h"
#import "TSDEditMenuTapGestureRecognizer.h"
#import "TSDInteractiveCanvasController.h"
#import "TSDKnobDragGestureRecognizer.h"
#import "TSDPreventScrollGestureRecognizer.h"
#import "TSDCanvasSubviewsController.h"

@interface TSDiOSCanvasViewController : UIViewController <TSDCanvasLayerHosting, TSDCanvasZoomTrackerDelegate, UIGestureRecognizerDelegate>

 {
    TSDGuidedPanController *mGuidedPanController;
    BOOL mHasBeenTornDown;
    BOOL mInspectorModeEnabled;
    NSMutableArray *mInspectorGestureRecognizersToReenable;
    id *mInspectorSingleTapBlock;
    BOOL mCurrentlyScrolling;
    BOOL mRotating;
    TSDCanvasZoomTracker *mCanvasZoomTracker;
    CGPoint mLastZoomHUDLocation;
}


@property (retain, nonatomic) TSDAllTouchesDoneGestureRecognizer *allTouchesDoneGestureRecognizer; // ivar: mAllTouchesDoneGestureRecognizer
@property (readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (readonly, nonatomic) ? centerPlusMovementContentPlacement;
@property (readonly, nonatomic) CALayer *clippingLayer;
@property (readonly, nonatomic) NSArray *commonGestureRecognizers;
@property (readonly, retain, nonatomic) CALayer *containerLayer;
@property (readonly, retain, nonatomic) UIView *containerView;
@property (readonly, retain, nonatomic) UIViewController *containerViewController;
@property (nonatomic) BOOL contextMenuMightBeDisplayed; // ivar: mContextMenuMightBeDisplayed
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TSDiOSCanvasViewControllerDelegate> *delegate; // ivar: mDelegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: mDoubleTapGestureRecognizer
@property (retain, nonatomic) TSDEditMenuTapGestureRecognizer *editMenuTapGestureRecognizer; // ivar: mEditMenuTapGestureRecognizer
@property (readonly, retain, nonatomic) UIPanGestureRecognizer *guidedPanGestureRecognizer; // ivar: mGuidedPanGestureRecognizer
@property (readonly) NSUInteger hash;
@property (nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // ivar: mICC
@property (readonly, nonatomic) BOOL isDraggingViaGuidedPan;
@property (readonly, nonatomic) BOOL isPopoverGestureInFlight; // ivar: mIsPopoverGestureInFlight
@property (readonly, nonatomic) BOOL isRotating; // ivar: _isRotating
@property (retain, nonatomic) TSDKnobDragGestureRecognizer *knobDragGestureRecognizer; // ivar: mKnobDragGestureRecognizer
@property (readonly, nonatomic) CALayer *layer;
@property (retain, nonatomic) TSDMultiSelectGestureRecognizer *multiSelectGestureRecognizer; // ivar: mMultiSelectGestureRecognizer
@property (retain, nonatomic) TSDNudgeGestureRecognizer *nudgeGestureRecognizer; // ivar: mNudgeGestureRecognizer
@property (readonly, nonatomic) NSSet *panGestureRecognizers;
@property (readonly, retain, nonatomic) TSDPreventScrollGestureRecognizer *preventScrollGestureRecognizer; // ivar: mPreventScrollGestureRecognizer
@property (retain, nonatomic) TSDRepDragGestureRecognizer *repDragGestureRecognizer; // ivar: mRepDragGestureRecognizer
@property (retain, nonatomic) TSDRepRotateGestureRecognizer *repRotateGestureRecognizer; // ivar: mRepRotateGestureRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // ivar: mSingleTapGestureRecognizer
@property (readonly, retain, nonatomic) TSDCanvasSubviewsController *subviewsController; // ivar: mSubviewsController
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) CALayer *topLevelTilingLayer;
@property (readonly, nonatomic) ? touchContentPlacement;
@property (retain, nonatomic) UIPinchGestureRecognizer *zoomGestureRecognizer; // ivar: mZoomGestureRecognizer


-(BOOL)allowTouchOutsideCanvasView:(id)arg0 forGesture:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handleDoubleTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)handleSingleTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)isInFocusedContainer;
-(BOOL)p_shouldUseWideGamut;
-(BOOL)repDragGestureRecognizer:(id)arg0 shouldBeginTapHoldTrackingAtScaledPoint:(struct CGPoint )arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldIgnoreTextGestures;
-(BOOL)shouldSelectAndShowEditMenuOnFirstTapForRep:(id)arg0 ;
-(Class)audioInspectorPaneClass;
-(Class)movieInspectorPaneClass;
-(id)asiOSCVC;
-(id)extraMenuItems;
-(id)hitKnobWithTouch:(id)arg0 returningRep:(*id)arg1 ;
-(id)hitRepWithTouch:(id)arg0 ;
-(id)itemsToAddToEditMenuForRep:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)newAudioPlaybackHUDWithFrame:(struct CGRect )arg0 audioRep:(id)arg1 delegate:(id)arg2 ;
-(id)newMoviePlaybackHUDWithFrame:(struct CGRect )arg0 playerController:(id)arg1 movieRep:(id)arg2 ;
-(id)p_willPresentError:(id)arg0 ;
-(id)topLevelReps;
-(id)viewController;
-(id)viewForGestureRecognizer:(id)arg0 ;
-(struct CGRect )targetRectForEditMenu:(id)arg0 ;
-(void)addInspectorPanZoomModeGRsToArray:(id)arg0 ;
-(void)beginInspectorPanZoomModeWithSingleTapBlock:(id)arg0 ;
-(void)beginModalOperationWithLocalizedMessage:(id)arg0 progress:(id)arg1 cancelHandler:(id)arg2 ;
-(void)canvasDidUpdateRepsFromLayouts;
-(void)canvasZoomTracker:(id)arg0 willBeginViewScaleFeedbackWithFastPinch:(BOOL)arg1 ;
-(void)canvasZoomTracker:(id)arg0 willUpdateViewScaleFeedbackWithScale:(CGFloat)arg1 ;
-(void)canvasZoomTrackerDidEndFinalZoomAnimation:(id)arg0 ;
-(void)canvasZoomTrackerDidEndViewScaleFeedback:(id)arg0 ;
-(void)canvasZoomTrackerDidFinish:(id)arg0 ;
-(void)canvasZoomTrackerWillBeginFinalZoomAnimation:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)endInspectorPanZoomMode;
-(void)endModalOperation;
-(void)forceStopScrolling;
-(void)forwardInvocation:(id)arg0 ;
-(void)handleDoubleTap:(id)arg0 ;
-(void)hideEditMenu;
-(void)hideMoviePlaybackHUD;
-(void)i_updateZoomGestureRecognizer;
-(void)loadView;
-(void)p_allTouchesDone:(id)arg0 ;
-(void)p_buildMenuItems:(id)arg0 forSelection:(id)arg1 ;
-(void)p_didPresentErrorWithRecovery:(BOOL)arg0 completionHandler:(*void)arg1 ;
-(void)p_editMenuDidHide:(id)arg0 ;
-(void)p_guidedPanWithGesture:(id)arg0 ;
-(void)p_handleSingleTapGesture:(id)arg0 ;
-(void)p_handleTapForEditMenu:(id)arg0 ;
-(void)p_updateWideGamut;
-(void)p_zoomWithGesture:(id)arg0 ;
-(void)presentError:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentErrors:(id)arg0 withLocalizedDescription:(id)arg1 completionHandler:(id)arg2 ;
-(void)presentMovieCompatibilityAlertForUnplayableMoviePasteboardDrawableProviders:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentMovieCompatibilityAlertForUnplayableMovieURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetGesturesForContextSwitch;
-(void)setUpGestureRecognizers;
-(void)showEditMenu:(id)arg0 ;
-(void)showEditMenuForSelection:(id)arg0 ;
-(void)showMoviePlaybackHUD:(id)arg0 withFrame:(struct CGRect )arg1 ;
-(void)stopScrolling;
-(void)teardown;
-(void)toggleEditMenuForCurrentSelection;
-(void)unlock:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif