// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSEDITABLETABLECELL_H
#define PSEDITABLETABLECELL_H

@class UIColor, NSString;
@protocol UITextViewDelegate, UITextFieldDelegate;


#import "PSTableCell.h"
#import "PSListController.h"

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate>

 {
    UIColor *_textColor;
    id *_delegate;
    BOOL _forceFirstResponder;
    BOOL _delaySpecifierRelease;
    SEL _targetSetter;
    id *_realTarget;
    BOOL _valueChanged;
}


@property (weak, nonatomic) PSListController *controllerDelegate; // ivar: _controllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL returnKeyTapped; // ivar: _returnKeyTapped
@property (readonly) Class superclass;


+(NSInteger)cellStyle;
-(BOOL)_cellIsEditing;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canReload;
-(BOOL)canResignFirstResponder;
-(BOOL)isEditing;
-(BOOL)isFirstResponder;
-(BOOL)isTextFieldEditing;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_defaultTextColor;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)textField;
-(id)value;
-(void)_saveForExit;
-(void)_setValueChanged;
-(void)cellRemovedFromView;
-(void)controlChanged:(id)arg0 ;
-(void)dealloc;
-(void)endEditingAndSave;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setCellEnabled:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPlaceholderText:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setValue:(id)arg0 ;
-(void)setValueChangedTarget:(id)arg0 action:(SEL)arg1 specifier:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif