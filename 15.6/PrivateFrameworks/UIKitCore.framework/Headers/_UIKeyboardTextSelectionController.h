// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDTEXTSELECTIONCONTROLLER_H
#define _UIKEYBOARDTEXTSELECTIONCONTROLLER_H

@class UIResponder<UITextInput>;
@protocol UISelectionInteractionAssistant;

#import <Foundation/Foundation.h>

#import "UITextPosition.h"
#import "UITextRange.h"
#import "UITextInteractionAssistant.h"
#import "UIView.h"

@interface _UIKeyboardTextSelectionController : NSObject {
    BOOL _hasInteractionAssistant;
    BOOL _hasSelectionInteractionAssistant;
    BOOL _hasTextInputView;
    UITextPosition *_cursorPosition;
}


@property (nonatomic) CGRect caretRectForCursorPosition; // ivar: _caretRectForCursorPosition
@property (readonly, nonatomic) CGRect caretRectForFirstSelectedPosition;
@property (readonly, nonatomic) CGRect caretRectForLastSelectedPosition;
@property (readonly, nonatomic) CGRect caretRectForLeftmostSelectedPosition;
@property (readonly, nonatomic) CGRect caretRectForRightmostSelectedPosition;
@property (retain, nonatomic) UITextPosition *cursorPosition;
@property (readonly, nonatomic) BOOL hasCaretSelection;
@property (readonly, nonatomic) BOOL hasRangedSelection;
@property (retain, nonatomic) UITextRange *initialSelection; // ivar: _initialSelection
@property (readonly, nonatomic) UIResponder<UITextInput> *inputDelegate; // ivar: _inputDelegate
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (retain, nonatomic) UITextRange *selectionBase; // ivar: _selectionBase
@property (nonatomic) NSInteger selectionGranularity; // ivar: _selectionGranularity
@property (readonly, nonatomic) NSObject<UISelectionInteractionAssistant> *selectionInteractionAssistant;
@property (readonly, nonatomic) UIView *textInputView;


-(BOOL)beginLoupeGestureAtPoint:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(BOOL)cursorPositionIsContainedByRange:(id)arg0 ;
-(id)initWithInputDelegate:(id)arg0 ;
-(struct CGPoint )boundedDeltaForTranslation:(struct CGPoint )arg0 cursorLocationBase:(struct CGPoint )arg1 ;
-(struct CGRect )selectedRectInLineWithPoint:(struct CGPoint )arg0 ;
-(void)beginFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)beginLoupeMagnifierAtPoint:(struct CGPoint )arg0 ;
-(void)beginRangedMagnifierAtPoint:(struct CGPoint )arg0 ;
-(void)beginSelection;
-(void)beginSelectionChange;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(NSInteger)arg0 initialExtentPoint:(struct CGPoint )arg1 executionContext:(id)arg2 ;
-(void)beginSelectionWithBasePositionAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 withInitialExtentPoint:(struct CGPoint )arg2 executionContext:(id)arg3 ;
-(void)dealloc;
-(void)endFloatingCursor;
-(void)endLoupeGestureAtPoint:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(void)endLoupeMagnifierAtPoint:(struct CGPoint )arg0 ;
-(void)endRangedMagnifierAtPoint:(struct CGPoint )arg0 ;
-(void)endSelection;
-(void)endSelectionChange;
-(void)modifySelectionWithExtentPoint:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)restartSelection;
-(void)scrollSelectionToVisible;
-(void)selectImmediatePositionAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 executionContext:(id)arg2 ;
-(void)selectPositionAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 executionContext:(id)arg2 ;
-(void)selectPositionAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 relativeToSelection:(id)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtPoint:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)selectPositionAtPoint:(struct CGPoint )arg0 granularity:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)selectPositionAtPoint:(struct CGPoint )arg0 granularity:(NSInteger)arg1 executionContext:(id)arg2 ;
-(void)selectTextWithGranularity:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;
-(void)selectTextWithGranularity:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 executionContext:(id)arg2 ;
-(void)selectionDidChange;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg0 ;
-(void)setSelectedTextRange:(id)arg0 ;
-(void)showSelectionCommands;
-(void)switchToRangedSelection;
-(void)textDidChange;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)updateGestureRecognizers;
-(void)updateImmediateSelectionWithExtentAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 executionContext:(id)arg2 ;
-(void)updateLoupeGestureAtPoint:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 velocity:(struct CGPoint )arg2 ;
-(void)updateLoupeMagnifierAtPoint:(struct CGPoint )arg0 ;
-(void)updateRangedMagnifierAtPoint:(struct CGPoint )arg0 ;
-(void)updateSelectionRects;
-(void)updateSelectionWithExtentAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 relativeToSelection:(id)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(struct CGPoint )arg0 andExtentPosition:(id)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPoint:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)updateSelectionWithExtentPoint:(struct CGPoint )arg0 withBoundary:(NSInteger)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPosition:(id)arg0 executionContext:(id)arg1 ;
-(void)willBeginFloatingCursor:(BOOL)arg0 ;
-(void)willBeginHighlighterGesture;
-(void)willHandoffLoupeMagnifier;


@end


#endif