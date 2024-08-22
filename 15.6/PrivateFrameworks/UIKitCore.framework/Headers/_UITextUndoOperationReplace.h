// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTUNDOOPERATIONREPLACE_H
#define _UITEXTUNDOOPERATIONREPLACE_H

@class UIUndoTextOperation, NSAttributedString;



@interface _UITextUndoOperationReplace : UIUndoTextOperation {
    _NSRange _replacementRange;
    NSAttributedString *_attributedString;
}




-(id)initWithAffectedRange:(struct _NSRange )arg0 inputController:(id)arg1 replacementRange:(struct _NSRange )arg2 ;
-(void)undoRedo;


@end


#endif