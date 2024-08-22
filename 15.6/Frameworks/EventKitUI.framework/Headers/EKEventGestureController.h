// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTGESTURECONTROLLER_H
#define EKEVENTGESTURECONTROLLER_H

@class UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, EKCalendarDate, NSTimer, _UIDragSnappingFeedbackGenerator, UIDropInteraction, UIDragInteraction, NSString, EKEvent;
@protocol UIDropInteractionDelegate, UIDragInteractionDelegate, EKICSPreviewControllerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate, EKEventGestureControllerDelegate, EKEventGestureControllerUntimedDelegate;

#import <Foundation/Foundation.h>

#import "EKUIRecurrenceAlertController.h"
#import "EKICSPreviewController.h"
#import "EKDayOccurrenceView.h"
#import "EKUIEmailCompositionManager.h"

@interface EKEventGestureController : NSObject <UIDropInteractionDelegate, UIDragInteractionDelegate, EKICSPreviewControllerDelegate, UIGestureRecognizerDelegate, UIAlertViewDelegate>

 {
    UILongPressGestureRecognizer *_draggingGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_targetView;
    int _currentDraggingState;
    int _pendingDraggingState;
    int _queuedDraggingState;
    BOOL _dragCompletionPending;
    BOOL _dropAnimationInProgress;
    BOOL _waitingForDragToInitialize;
    BOOL _needToSetSystemDragPreview;
    BOOL _dragInitiationLocked;
    int _currentDragType;
    CGFloat _firstTouchTime;
    CGPoint _previousTouchPoint;
    CGFloat _previousTouchTime;
    CGFloat _previousTouchVelocity;
    NSInteger _touchOffsetDays;
    CGFloat _dateAtFirstTouchPoint;
    BOOL _isNewEvent;
    BOOL _isInCancelRegion;
    BOOL _isMultiDayTimedEvent;
    EKCalendarDate *_currentDay;
    BOOL _horizontalDragLocked;
    BOOL _dragLockDisabled;
    BOOL _isDragging;
    NSTimer *_scrollTimer;
    CGFloat _timeSinceEnteredPageMargin;
    CGFloat _firstContactOfDraggingViewTop;
    BOOL _hasStartedScrolling;
    NSInteger _consecutivePageTurnCount;
    BOOL _forcedStart;
    BOOL _needsCommit;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    _UIDragSnappingFeedbackGenerator *_dragSnappingFeedback;
    EKICSPreviewController *_currentICSPreviewController;
    UIDropInteraction *_dropInteraction;
    UIDragInteraction *_dragInteraction;
    NSInteger _currentDropDataOwnerCache;
}


@property (nonatomic) BOOL commitBlocked; // ivar: _commitBlocked
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKEventGestureControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dragGestureInProgress;
@property (readonly, nonatomic) EKDayOccurrenceView *draggingView; // ivar: _draggingView
@property (retain, nonatomic) EKDayOccurrenceView *draggingViewSource; // ivar: _draggingViewSource
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly, nonatomic) CGPoint firstTouchPoint; // ivar: _firstTouchPoint
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint latestTouchPoint; // ivar: _latestTouchPoint
@property (retain, nonatomic) EKUIEmailCompositionManager *messageSendingManager; // ivar: _messageSendingManager
@property (retain, nonatomic) NSString *sessionIdentifierForDebug; // ivar: _sessionIdentifierForDebug
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGPoint touchOffset; // ivar: _touchOffset
@property (weak, nonatomic) NSObject<EKEventGestureControllerUntimedDelegate> *untimedDelegate; // ivar: _untimedDelegate
@property (nonatomic) BOOL usesHorizontalDragLocking; // ivar: _usesHorizontalDragLocking
@property (nonatomic) BOOL usesXDragOffsetInCancelRegion; // ivar: _usesXDragOffsetInCancelRegion


+(id)_captureImageOfOccurrenceView:(id)arg0 withFrameOfOpaqueContent:(struct CGRect )arg1 ;
-(BOOL)__timedDelegateBeginEditingSessionAtPoint:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)_beginEditingSessionAtPoint:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)_beginNewDragFromOffStateWithPoint:(struct CGPoint )arg0 ;
-(BOOL)_calendarCanAcceptManagedData:(id)arg0 ;
-(BOOL)_dragInteraction:(id)arg0 sessionSupportsSystemDrag:(id)arg1 ;
-(BOOL)_dropSessionRequiresExternalDataExtraction:(id)arg0 ;
-(BOOL)_flingOrCancelDraggingViewIfNeeded;
-(BOOL)_isPointInCancelRegion:(struct CGPoint )arg0 ;
-(BOOL)_isTouchFromDragSessionInResizeHandles:(id)arg0 ;
-(BOOL)_setDraggingState:(int)arg0 withPoint:(struct CGPoint )arg1 event:(id)arg2 ;
-(BOOL)_setDraggingState:(int)arg0 withPoint:(struct CGPoint )arg1 event:(id)arg2 context:(id)arg3 ;
-(BOOL)_shouldUseSystemAPIForDrag;
-(BOOL)_useNewDragAndDropAPI;
-(BOOL)canProposeNewTime:(id)arg0 ;
-(BOOL)dragInteraction:(id)arg0 prefersFullSizePreviewsForSession:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg0 sessionIsRestrictedToDraggingApplication:(id)arg1 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)_Debug_HoursSinceStartOfDay:(CGFloat)arg0 ;
-(CGFloat)_alignedYOriginForAllDayOccurrence:(id)arg0 atPoint:(struct CGPoint )arg1 floorAtAllDayRegionBottom:(BOOL)arg2 ;
-(CGFloat)_allDayBottomPadding;
-(CGFloat)_cancelRegionMargin;
-(CGFloat)_capOccurrenceViewYOrigin:(CGFloat)arg0 ;
-(CGFloat)_computeHeightForOccurrenceViewOfDuration:(CGFloat)arg0 allDay:(BOOL)arg1 ;
-(CGFloat)_computeWidthForOccurrenceView;
-(CGFloat)_minimumDuration;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForAddingToSession:(id)arg1 withTouchAtPoint:(struct CGPoint )arg2 ;
-(NSInteger)_dragInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSInteger)_dropInteraction:(id)arg0 dataOwnerForSession:(id)arg1 ;
-(NSUInteger)_dropOperationGivenDropSession:(id)arg0 ;
-(NSUInteger)numberOfDragSourcesForView:(id)arg0 ;
-(id)_acceptedExternalTypes;
-(id)_acceptedFileExternalTypes;
-(id)_acceptedNonFileExternalTypes;
-(id)_acceptedTypes;
-(id)_captureImageOfDraggingView;
-(id)_clippingPathForDraggingView;
-(id)_createNewEventIfNeededAtPoint:(struct CGPoint )arg0 ;
-(id)_createTemporaryView:(id)arg0 animated:(BOOL)arg1 ;
-(id)_debugStringForDraggingState:(int)arg0 ;
-(id)_eventToUseAtInteractionStart:(struct CGPoint )arg0 ;
-(id)_findFirstCalendar:(id)arg0 ;
-(id)_findLocalDragItemInSession:(id)arg0 ;
-(id)_getEventUsingDropSession:(id)arg0 ;
-(id)_viewForTracking;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)dropInteraction:(id)arg0 previewForDroppingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)initWithView:(id)arg0 ;
-(id)originalStartDateForEvent:(id)arg0 includingTravel:(BOOL)arg1 ;
-(int)_draggingState;
-(struct CGPoint )_computeOriginAtTouchPoint:(struct CGPoint )arg0 forDate:(CGFloat)arg1 isAllDay:(BOOL)arg2 allowXOffset:(BOOL)arg3 allowFloorAtRegionBottom:(BOOL)arg4 ;
-(struct CGPoint )_estimateFinalDropOriginForTimedDelegate;
-(struct CGRect )_calculateFrameForDraggingViewIncludingTravelTime:(BOOL)arg0 ;
-(void)_adjustNewEventDates:(id)arg0 withPoint:(struct CGPoint )arg1 ;
-(void)_animateInNewEvent;
-(void)_cancel;
-(void)_cleanUpAllStateWithTouchPoint:(struct CGPoint )arg0 commit:(BOOL)arg1 ;
-(void)_cleanUpForcedStart;
-(void)_commit;
-(void)_commitUntimed;
-(void)_createAndSetUpDraggingViewWithTouchPoint:(struct CGPoint )arg0 event:(id)arg1 ignoreOffsets:(BOOL)arg2 ;
-(void)_disableSystemPreviewForDrag:(id)arg0 ;
-(void)_dismissCurrentICSPreviewControllerAnimated:(BOOL)arg0 ;
-(void)_dragFailedToStart;
-(void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg0 ;
-(void)_enableSystemPreviewForDrag:(id)arg0 ;
-(void)_extractFileFromSession:(id)arg0 ;
-(void)_handleImportingICSData:(id)arg0 intoEventStore:(id)arg1 ;
-(void)_handleLongPressResponseForOldAPI:(id)arg0 ;
-(void)_handleShowingEventWithUniqueId:(id)arg0 date:(id)arg1 eventStore:(id)arg2 ;
-(void)_icsPreviewControllerCancelButtonPressed;
-(void)_installScrollTimer;
-(void)_longPress:(id)arg0 ;
-(void)_manageDraggingViewInteractivityForStateChangeFrom:(int)arg0 to:(int)arg1 ;
-(void)_manageFeedbackForStateChangeFrom:(int)arg0 to:(int)arg1 ;
-(void)_presentICSPreviewControllerIfNeeded;
-(void)_removeScrollTimer;
-(void)_resumePreviousDrag;
-(void)_returnDraggingViewToLastCommittedPositionFromTouchPoint:(struct CGPoint )arg0 ;
-(void)_scrollTimerFired:(id)arg0 ;
-(void)_setLocalDraggingViewHidden:(BOOL)arg0 ;
-(void)_setToLocalDraggingImageForDrag:(id)arg0 ;
-(void)_setToSystemDraggingImageForDrag:(id)arg0 ;
-(void)_setUpAfterForcedStartFromPoint:(struct CGPoint )arg0 ;
-(void)_setUpInitialTouchPointsWithPoint:(struct CGPoint )arg0 ;
-(void)_setupEvent:(id)arg0 withImportData:(id)arg1 ;
-(void)_suspendCurrentDrag;
-(void)_tapGesture:(id)arg0 ;
-(void)_update;
-(void)_updateFlingToCancelParameters;
-(void)_updateHorizontalDragLockForPoint:(struct CGPoint )arg0 ;
-(void)_writeDraggingChangesToOccurrenceWithTouchPoint:(struct CGPoint )arg0 ;
-(void)dealloc;
-(void)didCrossDragBoundary:(int)arg0 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;
-(void)dropInteraction:(id)arg0 concludeDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 item:(id)arg1 willAnimateDropWithAnimator:(id)arg2 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)endForcedStart;
-(void)forceStartWithOccurrence:(id)arg0 shouldUpdateViewSource:(BOOL)arg1 shouldUpdateOrigin:(BOOL)arg2 ;
-(void)icsPreviewController:(id)arg0 importDidImportEvents:(id)arg1 ;
-(void)icsPreviewControllerImportDidFail:(id)arg0 ;
-(void)icsPreviewControllerWantsDismissal:(id)arg0 ;
-(void)invalidate;
-(void)liftUpOccurrenceForEditingEvent:(id)arg0 ;
-(void)promptUserForProposeNewTime:(id)arg0 forEvent:(id)arg1 whenFinished:(id)arg2 ;
-(void)promptUserForRecurrenceActionOnOccurrence:(id)arg0 whenFinished:(id)arg1 ;
-(void)removeDraggedOccurrence;
-(void)updateDraggingOccurrence;
-(void)updateDraggingOccurrenceForced:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateDraggingOccurrenceFrame;
-(void)updateDraggingOccurrenceFrameFromSource;
-(void)updateDraggingOccurrenceOrigin;


@end


#endif