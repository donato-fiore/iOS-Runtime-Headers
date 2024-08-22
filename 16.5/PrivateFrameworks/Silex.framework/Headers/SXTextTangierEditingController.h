// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTTANGIEREDITINGCONTROLLER_H
#define SXTEXTTANGIEREDITINGCONTROLLER_H

@class TSWPEditingController;



@interface SXTextTangierEditingController : TSWPEditingController

@property (nonatomic) BOOL startingInitialSelectionDrag; // ivar: _startingInitialSelectionDrag


-(BOOL)canAddOrShowComment;
-(BOOL)isParagraphModeWithSelection:(id)arg0 onStorage:(id)arg1 ;
-(BOOL)wantsCaret;
-(BOOL)wantsKeyboard;
-(id)editingReps;
-(id)editorKeyboardLanguage;
-(int)canPerformEditorAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)tappedOnKnob:(id)arg0 ;


@end


#endif