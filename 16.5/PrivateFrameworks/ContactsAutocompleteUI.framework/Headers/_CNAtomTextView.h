// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNATOMTEXTVIEW_H
#define _CNATOMTEXTVIEW_H

@class UITextView, NSArray;


#import "CNComposeRecipientTextView.h"

@interface _CNAtomTextView : UITextView {
    NSUInteger _textStorageEditingDepth;
}


@property (readonly) NSArray *atoms;
@property (weak) CNComposeRecipientTextView *hostRecipientView; // ivar: _hostRecipientView


+(id)os_log;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isEditingTextStorage;
-(BOOL)notifyDelegateWithBooleanSelector:(SEL)arg0 ;
-(BOOL)notifyDelegateWithSelector:(SEL)arg0 checkReturnValue:(BOOL)arg1 ;
-(BOOL)notifyDelegateWithVoidSelector:(SEL)arg0 ;
-(BOOL)resignFirstResponder;
-(NSInteger)baseWritingDirection;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)keyCommands;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)textStylingAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)undoManager;
-(struct CGRect )convertGlyphRect:(struct CGRect )arg0 ;
-(void)batchTextStorageUpdates:(id)arg0 ;
-(void)commaPressed;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)downArrowPressed;
-(void)enumerateAtomAttachments:(id)arg0 ;
-(void)enumerateAtoms:(id)arg0 ;
-(void)enumerateAtomsInCharacterRange:(struct _NSRange )arg0 withBlock:(id)arg1 ;
-(void)escKeyPressed;
-(void)leftArrowPressed;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)returnPressed;
-(void)rightArrowPressed;
-(void)tabPressed;
-(void)upArrowPressed;


@end


#endif