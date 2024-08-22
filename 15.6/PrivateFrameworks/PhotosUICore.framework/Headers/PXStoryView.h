// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVIEW_H
#define PXSTORYVIEW_H

@class UIView, NSMutableSet, UILongPressGestureRecognizer, NSString, NSMutableArray, UITapGestureRecognizer, UIPanGestureRecognizer, NSArray;
@protocol UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, PXStoryQueueParticipant, PXChangeObserver, PXTapToRadarDiagnosticProvider, OS_dispatch_queue, PXStoryPacingTimeSource;


#import "PXStoryViewDismissalController.h"
#import "PXStoryModel.h"
#import "PXMediaProvider.h"
#import "PXApplicationDisabledIdleTimerToken.h"
#import "PXVerticalSwipeGestureRecognizerHelper.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXGView.h"
#import "PXStoryTransitionableTungstenViewManager.h"
#import "PXUpdater.h"
#import "PXStoryViewLayout.h"
#import "PXStoryViewModel.h"

@interface PXStoryView : UIView <UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, PXStoryQueueParticipant, PXChangeObserver, PXTapToRadarDiagnosticProvider>



@property (readonly, nonatomic) NSMutableSet *activeRemoteGestureRecognizers; // ivar: _activeRemoteGestureRecognizers
@property (readonly, nonatomic) UILongPressGestureRecognizer *anyIndirectTouchGestureRecognizer; // ivar: _anyIndirectTouchGestureRecognizer
@property (readonly, nonatomic) UILongPressGestureRecognizer *anyPressGestureRecognizer; // ivar: _anyPressGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryViewDismissalController *dismissalController; // ivar: _dismissalController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isTouching; // ivar: _isTouching
@property (readonly, nonatomic) NSMutableArray *lastDemotedDisplayAssets; // ivar: _lastDemotedDisplayAssets
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly, nonatomic) id *mainItemReference;
@property (retain, nonatomic) PXStoryModel *mainModel; // ivar: _mainModel
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // ivar: _menuGestureRecognizer
@property (readonly, nonatomic) UIPanGestureRecognizer *panDownGestureRecognizer; // ivar: _panDownGestureRecognizer
@property (readonly, nonatomic) UIPanGestureRecognizer *panUpGestureRecognizer; // ivar: _panUpGestureRecognizer
@property (retain, nonatomic) PXApplicationDisabledIdleTimerToken *preventedDisplaySleepToken; // ivar: _preventedDisplaySleepToken
@property (readonly, nonatomic) BOOL shouldAppyBackgroundColorToTungstenView; // ivar: _shouldAppyBackgroundColorToTungstenView
@property (nonatomic) BOOL shouldPreventDisplaySleep; // ivar: _shouldPreventDisplaySleep
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureHelper; // ivar: _swipeDownGestureHelper
@property (readonly, nonatomic) NSArray *swipeGestureRecognizers; // ivar: _swipeGestureRecognizers
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (readonly, nonatomic) NSObject<PXStoryPacingTimeSource> *timeSource; // ivar: _timeSource
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *touchingGestureRecognizer; // ivar: _touchingGestureRecognizer
@property (readonly, nonatomic) PXGView *tungstenView;
@property (readonly, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager; // ivar: _tungstenViewManager
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXStoryViewLayout *viewLayout; // ivar: _viewLayout
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


+(BOOL)dumpTapToRadarDiagnosticAttachmentsToURL:(id)arg0 ;
+(id)allDiagnosticDescriptions;
-(BOOL)_handlePrimaryInteractionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_isRTL;
-(BOOL)acceptsFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)verticalSwipeGestureRecognizerHelper:(id)arg0 shouldRecognizeSwipeDownGestureRecognizer:(id)arg1 ;
-(id)_storyHitTestResultAtPoint:(struct CGPoint )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(id)itemPlacementControllerForItemReference:(id)arg0 ;
-(void)_changeColorGrade;
-(void)_changeOverallDuration:(NSInteger)arg0 ;
-(void)_changeStyle;
-(void)_considerUpdatingFocusForChrome;
-(void)_considerUpdatingFocusForInfoPanel;
-(void)_considerUpdatingFocusForRelatedOverlay;
-(void)_handleAnyTouchOrPressGesture:(id)arg0 ;
-(void)_handleArrowButton:(id)arg0 ;
-(void)_handleEdgeTap:(NSUInteger)arg0 ;
-(void)_handleLongPress:(id)arg0 ;
-(void)_handleMenuGestureRecognizer:(id)arg0 ;
-(void)_handlePanDown:(id)arg0 ;
-(void)_handlePlayPauseGesture:(id)arg0 ;
-(void)_handleRelatedKeyboardNavigation:(NSUInteger)arg0 ;
-(void)_handleSelect:(id)arg0 ;
-(void)_handleSwipeGesture:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_handleTwoFingerTap:(id)arg0 ;
-(void)_hideRelatedOverlay;
-(void)_initializeGestureRecognizers;
-(void)_invalidateBackgroundColor;
-(void)_invalidateGestureRecognizers;
-(void)_invalidateMainModel;
-(void)_invalidateShouldPreventDisplaySleep;
-(void)_moveLeftAfterEdgeTap:(BOOL)arg0 ;
-(void)_moveRightAfterEdgeTap:(BOOL)arg0 ;
-(void)_setNeedsUpdate;
-(void)_skipToSegmentWithOffset:(NSInteger)arg0 afterEdgeTap:(BOOL)arg1 ;
-(void)_toggleChrome;
-(void)_togglePlayback;
-(void)_updateBackgroundColor;
-(void)_updateGestureRecognizers;
-(void)_updateMainModel;
-(void)_updateShouldPreventDisplaySleep;
-(void)cancelOperation:(id)arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)insertNewline:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)layoutSubviews;
-(void)moveLeft:(id)arg0 ;
-(void)moveRight:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)togglePlayback:(id)arg0 ;
-(void)touchingUIGestureRecognizerDidBeginTouching:(id)arg0 ;
-(void)touchingUIGestureRecognizerDidEndTouching:(id)arg0 ;


@end


#endif