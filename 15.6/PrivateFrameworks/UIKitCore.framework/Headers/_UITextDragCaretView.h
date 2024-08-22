// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTDRAGCARETVIEW_H
#define _UITEXTDRAGCARETVIEW_H

@class UIView<UITextInput>, CAShapeLayer;


#import "UIView.h"

@interface _UITextDragCaretView : UIView {
    UIView<UITextInput> *_view;
    CAShapeLayer *_mask;
}


@property (nonatomic) BOOL rangesExcludeSelection; // ivar: _rangesExcludeSelection


-(BOOL)_isRemoveAnimatesBackToCaret;
-(id)_caretColor;
-(id)_maskForRects:(id)arg0 ;
-(id)_rangeColor;
-(id)_rectsForRange:(id)arg0 ;
-(id)initWithTextInputView:(id)arg0 ;
-(struct CGRect )_configureMask:(id)arg0 withPath:(id)arg1 ;
// -(void)_insertAtRangeOrPosition:(id)arg0 animations:(id)arg1 completion:(unk)arg2 animated:(id)arg3  ;
-(void)_performUpdate:(id)arg0 ;
// -(void)_updateToRangeOrPosition:(id)arg0 animations:(id)arg1 completion:(unk)arg2 animated:(id)arg3  ;
-(void)insertAtPosition:(id)arg0 ;
// -(void)insertAtPosition:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)insertAtRange:(id)arg0 ;
// -(void)insertAtRange:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
// -(void)insertAtRange:(id)arg0 animations:(id)arg1 completion:(unk)arg2 animated:(id)arg3  ;
-(void)remove;
// -(void)removeWithAnimations:(id)arg0 completion:(unk)arg1  ;
// -(void)removeWithAnimations:(id)arg0 completion:(unk)arg1 animated:(id)arg2  ;
-(void)updateToPosition:(id)arg0 ;
// -(void)updateToPosition:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
-(void)updateToRange:(id)arg0 ;
// -(void)updateToRange:(id)arg0 animations:(id)arg1 completion:(unk)arg2  ;
// -(void)updateToRange:(id)arg0 animations:(id)arg1 completion:(unk)arg2 animated:(id)arg3  ;


@end


#endif