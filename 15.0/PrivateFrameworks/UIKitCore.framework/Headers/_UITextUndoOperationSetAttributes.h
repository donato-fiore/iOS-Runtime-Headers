// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTUNDOOPERATIONSETATTRIBUTES_H
#define _UITEXTUNDOOPERATIONSETATTRIBUTES_H

@class UIUndoTextOperation, _NSAttributeRun;



@interface _UITextUndoOperationSetAttributes : UIUndoTextOperation {
    _NSAttributeRun *_attributes;
}




-(id)initWithAffectedRange:(struct _NSRange )arg0 inputController:(id)arg1 ;
-(void)undoRedo;


@end


#endif