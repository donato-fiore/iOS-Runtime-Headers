// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGEDITABLETABLECELL_H
#define CNFREGEDITABLETABLECELL_H

@class PSEditableTableCell, UIImage;


#import "CNFRegShadowView.h"

@interface CNFRegEditableTableCell : PSEditableTableCell {
    SEL _emptyStateSelector;
    SEL _didBeginEditingSelector;
    SEL _didEndEditingSelector;
    id *_textChangeObserver;
    BOOL _textFieldIsEmpty;
}


@property (retain, nonatomic) UIImage *customCheckmarkImage; // ivar: _customCheckmarkImage
@property (retain, nonatomic) UIImage *customCheckmarkImageSelected; // ivar: _customCheckmarkImageSelected
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage
@property (retain, nonatomic) CNFRegShadowView *shadowView; // ivar: _shadowView
@property (nonatomic) BOOL skipDelegateCallback; // ivar: _skipDelegateCallback


-(BOOL)_textFieldIsCurrentlyEmpty;
-(void)_handleTextChanged;
-(void)_startListeningForTextChanges;
-(void)_stopListeningForTextChanges;
-(void)_updateTextFieldOffsetWithDict:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)notifyTextFieldDidBeginEditing;
-(void)notifyTextFieldDidEndEditing;
-(void)notifyTextFieldEmptyStateChanged:(BOOL)arg0 ;
-(void)setChecked:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setValueChangedTarget:(id)arg0 action:(SEL)arg1 specifier:(id)arg2 ;
-(void)textFieldChangedExternally;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif