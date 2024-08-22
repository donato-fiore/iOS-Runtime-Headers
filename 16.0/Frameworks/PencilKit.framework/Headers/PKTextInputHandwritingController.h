// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTINPUTHANDWRITINGCONTROLLER_H
#define PKTEXTINPUTHANDWRITINGCONTROLLER_H

@class NSUUID, NSMutableArray, NSString;
@protocol PKTextInputHandwritingShotDelegate, PKTextInputResultCommandDelegate, PKTextInputWritingSessionDelegate, PKTextInputCanvasControllerChangeObserver, PKTextInputDebugStateReporting, PKTextInputHandwritingControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputHandwritingShot.h"
#import "PKTextInputTargetState.h"
#import "PKTextInputResultCommand.h"
#import "PKDrawing.h"
#import "PKTextInputRecognitionManager.h"
#import "PKTextInputWritingSession.h"
#import "PKTextInputCanvasController.h"
#import "PKTextInputCursorController.h"
#import "PKTextInputDebugLogController.h"
#import "PKTextInputElementsController.h"
#import "PKTextInputFeedbackController.h"
#import "PKTextInputReserveSpaceController.h"

@interface PKTextInputHandwritingController : NSObject <PKTextInputHandwritingShotDelegate, PKTextInputResultCommandDelegate, PKTextInputWritingSessionDelegate, PKTextInputCanvasControllerChangeObserver, PKTextInputDebugStateReporting>



@property (retain, nonatomic, setter=_setActiveHandwritingShot:) PKTextInputHandwritingShot *_activeHandwritingShot; // ivar: __activeHandwritingShot
@property (retain, nonatomic, setter=_setActiveInputTargetState:) PKTextInputTargetState *_activeInputTargetState; // ivar: __activeInputTargetState
@property (retain, nonatomic, setter=_setActiveResultCommand:) PKTextInputResultCommand *_activeResultCommand; // ivar: __activeResultCommand
@property (nonatomic) CGFloat _floatingBackgroundLastUpdateTime; // ivar: __floatingBackgroundLastUpdateTime
@property (copy, nonatomic) NSUUID *_lastInProgressStrokeUUID; // ivar: __lastInProgressStrokeUUID
@property (nonatomic) CGFloat _lastInProgressStrokeUpdateTime; // ivar: __lastInProgressStrokeUpdateTime
@property (copy, nonatomic, setter=_setLastKnownDrawing:) PKDrawing *_lastKnownDrawing; // ivar: __lastKnownDrawing
@property (retain, nonatomic, setter=_setPossibleHandwritingShot:) PKTextInputHandwritingShot *_possibleHandwritingShot; // ivar: __possibleHandwritingShot
@property (retain, nonatomic) PKTextInputRecognitionManager *_recognitionManager; // ivar: __recognitionManager
@property (readonly, nonatomic) NSMutableArray *_resultCommandsQueue; // ivar: __resultCommandsQueue
@property (retain, nonatomic, setter=_setWritingSession:) PKTextInputWritingSession *_writingSession; // ivar: __writingSession
@property (readonly, nonatomic) PKTextInputCanvasController *canvasController; // ivar: _canvasController
@property (readonly, nonatomic) PKTextInputCursorController *cursorController; // ivar: _cursorController
@property (readonly, nonatomic) PKTextInputTargetState *debugActiveInputTargetState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PKTextInputDebugLogController *debugLogController; // ivar: _debugLogController
@property (readonly, nonatomic) PKTextInputRecognitionManager *debugRecognitionManager;
@property (weak, nonatomic) NSObject<PKTextInputHandwritingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKTextInputElementsController *elementsController; // ivar: _elementsController
@property (readonly, nonatomic) PKTextInputFeedbackController *feedbackController; // ivar: _feedbackController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKTextInputReserveSpaceController *reserveSpaceController; // ivar: _reserveSpaceController
@property (readonly, nonatomic) CGFloat strokeAlphaOverride; // ivar: _strokeAlphaOverride
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger writingState;


+(BOOL)_isCorrectionResultGesture:(id)arg0 ;
-(BOOL)_wantsFloatingBackground;
-(BOOL)handwritingShot:(id)arg0 hasCommittedResultsInSessionToElementRecognitionIdentifier:(id)arg1 ;
-(BOOL)handwritingShot:(id)arg0 shouldSuppressGesturesForStrokesBounds:(struct CGRect )arg1 coordinateSpace:(id)arg2 ;
-(BOOL)writingSession:(id)arg0 elementHasPendingOperations:(id)arg1 ;
-(CGFloat)_continuousRecognitionInterval;
-(NSInteger)_immediateCommitTypeForQueryItem:(id)arg0 handwritingShot:(id)arg1 ;
-(NSInteger)handwritingShot:(id)arg0 lastCharacterLevelPositionForElementRecognitionIdentifier:(id)arg1 ;
-(id)_pendingResultCommand;
-(id)_resultCommandToProcessQueryItem:(id)arg0 handwritingShot:(id)arg1 ;
-(id)handwritingShot:(id)arg0 preferredTargetElementForQueryItemStableIdentifier:(id)arg1 simultaneousItemStableIdentifiers:(id)arg2 proposedTargetElement:(id)arg3 ;
-(id)handwritingShotStrokeIdentifiersToExcludeFromRecognition:(id)arg0 ;
-(id)initWithCanvasController:(id)arg0 elementsController:(id)arg1 feedbackController:(id)arg2 reserveSpaceController:(id)arg3 debugLogController:(id)arg4 cursorController:(id)arg5 ;
-(id)resultCommandCanvasController:(id)arg0 ;
-(id)resultCommandCursorController:(id)arg0 ;
-(id)resultCommandFeedbackController:(id)arg0 ;
-(id)resultCommandSupportedElementDelegate:(id)arg0 ;
-(struct _NSRange )handwritingShot:(id)arg0 activePreviewRangeForElementRecognitionIdentifier:(id)arg1 queryItemStableIdentifier:(id)arg2 ;
-(struct _NSRange )handwritingShot:(id)arg0 inProgressGestureInitialSelectedRangeForElementRecognitionIdentifier:(id)arg1 ;
-(void)_cancelInProgressStrokeFromHandwritingShots;
-(void)_cancelPendingResultCommand;
-(void)_createPossibleHandwritingShotIfNeeded;
-(void)_evaluateAndProcessResultCommandsQueue;
-(void)_evaluateAndProcessResultCommandsQueueImmediateCommit:(BOOL)arg0 ;
-(void)_handleActiveHandwritingShotRecognitionFinished;
-(void)_handleResultCommandFinished:(id)arg0 ;
-(void)_notifyDelegateOfResultCommandState;
-(void)_processPossibleShotIfReady;
-(void)_scheduleCommitForResultCommandIfNeeded:(id)arg0 ;
-(void)_updateFloatingBackground;
-(void)_updateRecognitionManager;
-(void)_updateStrokeAlphaOverride;
-(void)_updateWritingSession;
-(void)canvasController:(id)arg0 drawingDidChange:(id)arg1 ;
-(void)canvasControllerDidBeginDrawing:(id)arg0 ;
-(void)canvasControllerDidCancelStroke:(id)arg0 strokeAcceptanceState:(NSInteger)arg1 ;
-(void)canvasControllerDidEndDrawing:(id)arg0 ;
-(void)canvasControllerEndedStroke:(id)arg0 ;
-(void)canvasControllerInProgressStrokeDidChange:(id)arg0 ;
-(void)cleanUpFromCancelledReplay;
-(void)commitNowIfPossible;
-(void)handwritingShot:(id)arg0 willFocusAndLoadDataForTargetElement:(id)arg1 ;
-(void)handwritingShotDidChangeState:(id)arg0 ;
-(void)handwritingShotDidOverrideStrongCursor:(id)arg0 ;
-(void)reportDebugStateDescription:(id)arg0 ;
-(void)reserveSpaceControllerWillFocusElement:(id)arg0 ;
-(void)resultCommandStateDidChange:(id)arg0 ;
-(void)writingSession:(id)arg0 didEndWritingInElement:(id)arg1 ;
-(void)writingSession:(id)arg0 didInsertTextInElement:(id)arg1 ;
-(void)writingSession:(id)arg0 willBeginWritingInElement:(id)arg1 ;


@end


#endif