// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTCURSORCONTROLLER_H
#define PKTEXTINPUTCURSORCONTROLLER_H

@class UIResponder<UITextInput>, NSString, UITextCursorAssertionController;
@protocol PKTextInputDebugStateReporting, UITextCursorAssertion, PKTextInputCursorControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKTextInputCursorController : NSObject <PKTextInputDebugStateReporting>

 {
    id<UITextCursorAssertion> *_nonBlinkingAssertion;
    id<UITextCursorAssertion> *_nonVisibleAssertion;
    id<UITextCursorAssertion> *_ghostAssertion;
    BOOL _cursorShouldFlash;
    id *_restoreAfterFlashCursorBlock;
    BOOL _lastKnownTextInputResponderWasKey;
}


@property (weak, nonatomic, setter=_setLastKnownTextInputResponder:) UIResponder<UITextInput> *_lastKnownTextInputResponder; // ivar: __lastKnownTextInputResponder
@property (nonatomic) CGFloat _lastSwitchToIdleWritingStateTime; // ivar: __lastSwitchToIdleWritingStateTime
@property (nonatomic, setter=_setTrackedLastKnownTextInputResponderWindowIsKey:) BOOL _trackedLastKnownTextInputResponderWindowIsKey; // ivar: __trackedLastKnownTextInputResponderWindowIsKey
@property (nonatomic, setter=_setCursorStyle:) NSInteger cursorStyle; // ivar: _cursorStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputCursorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextCursorAssertionController *implicitAssertionController; // ivar: _implicitAssertionController
@property (readonly, nonatomic) BOOL isCursorWeak;
@property (nonatomic) CGFloat lastElementTapToFocusTimestamp; // ivar: _lastElementTapToFocusTimestamp
@property (nonatomic, setter=_setMode:) NSInteger mode; // ivar: _mode
@property (readonly) Class superclass;


-(BOOL)canMakeCursorWeakForResponder:(id)arg0 ;
-(BOOL)lastKnownTextInputResponderWindowIsKey;
-(BOOL)scribbleEnabled;
-(id)_currentAssertionController;
-(id)_windowForResponder:(id)arg0 ;
-(id)init;
-(void)_delayedRevokeTemporaryStrongMode;
-(void)_handleDidPerformReturn:(id)arg0 ;
-(void)_handleUndoRedo:(id)arg0 ;
-(void)_textInputSourceDidChange:(id)arg0 ;
-(void)_updateAssertionsForCurrentState;
-(void)_updateCursorStyle;
-(void)_writingStateEvaluationTimerExpired;
-(void)customHighlightFeedbackVisibilityDidChange;
-(void)firstResponderDidChange:(id)arg0 ;
-(void)flashCursor;
-(void)invalidateGhostAssertion;
-(void)invalidateNonBlinkingAssertion;
-(void)invalidateNonVisibleAssertion;
-(void)keyWindowDidChange:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)makeCursorStrong;
-(void)makeCursorTemporarilyStrongWhileWriting;
-(void)makeCursorWeak;
-(void)removeAllAssertions;
-(void)reportDebugStateDescription:(id)arg0 ;
-(void)resetState;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)simulateFirstResponderChangeForTesting:(id)arg0 ;
-(void)textInputSourceDidChange:(id)arg0 ;
-(void)writingStateDidChange;


@end


#endif