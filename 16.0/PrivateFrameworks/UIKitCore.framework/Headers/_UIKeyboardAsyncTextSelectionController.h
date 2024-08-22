// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDASYNCTEXTSELECTIONCONTROLLER_H
#define _UIKEYBOARDASYNCTEXTSELECTIONCONTROLLER_H

@class UIKeyboardTextSelectionController;



@interface _UIKeyboardAsyncTextSelectionController : UIKeyboardTextSelectionController {
    BOOL _shouldDelayShowSelectionCommands;
}




-(BOOL)cursorPositionIsContainedByRange:(id)arg0 ;
-(BOOL)shouldAllowSelectionGestureWithTouchType:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 toProgressToState:(NSInteger)arg2 ;
-(struct CGRect )caretRectForLeftmostSelectedPosition;
-(struct CGRect )caretRectForRightmostSelectedPosition;
-(void)beginFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(NSInteger)arg0 initialExtentPoint:(struct CGPoint )arg1 executionContext:(id)arg2 ;
-(void)endFloatingCursor;
-(void)modifySelectionWithExtentPoint:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)selectPositionAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 relativeToSelection:(id)arg2 executionContext:(id)arg3 ;
-(void)selectPositionAtPoint:(struct CGPoint )arg0 completionHandler:(id)arg1 ;
-(void)selectPositionAtPoint:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)selectPositionAtPoint:(struct CGPoint )arg0 granularity:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)selectTextWithGranularity:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;
-(void)selectTextWithGranularity:(NSInteger)arg0 atPoint:(struct CGPoint )arg1 executionContext:(id)arg2 ;
-(void)setRangedSelectionShouldShowGrabbers:(BOOL)arg0 ;
-(void)showSelectionCommands;
-(void)showSelectionView;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)updateSelectionWithExtentAtBoundary:(NSInteger)arg0 inDirection:(NSInteger)arg1 executionContext:(id)arg2 ;
-(void)updateSelectionWithExtentPoint:(struct CGPoint )arg0 executionContext:(id)arg1 ;
-(void)updateSelectionWithExtentPoint:(struct CGPoint )arg0 withBoundary:(NSInteger)arg1 executionContext:(id)arg2 ;


@end


#endif