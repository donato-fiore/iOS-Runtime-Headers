// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTUNDOOPERATIONTYPING_H
#define _UITEXTUNDOOPERATIONTYPING_H

@class UIUndoTextOperation, NSMutableAttributedString;



@interface _UITextUndoOperationTyping : UIUndoTextOperation {
    _NSRange _replacementRange;
    NSMutableAttributedString *_attributedString;
}




-(BOOL)coalesceAffectedRange:(struct _NSRange )arg0 replacementRange:(struct _NSRange )arg1 selectedRange:(struct _NSRange )arg2 textStorage:(id)arg3 ;
-(BOOL)supportsCoalescing;
-(id)initWithAffectedRange:(struct _NSRange )arg0 inputController:(id)arg1 replacementRange:(struct _NSRange )arg2 ;
-(void)undoRedo;


@end


#endif