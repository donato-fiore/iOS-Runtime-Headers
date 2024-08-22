// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKVIBRATIONPICKERTABLEVIEWCELL_H
#define TKVIBRATIONPICKERTABLEVIEWCELL_H

@class UITextField, NSString, UIColor, UIFont;
@protocol UITextFieldDelegate, TKVibrationPickerTableViewCellDelegate;


#import "TKPickerTableViewCell.h"

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate>

 {
    UITextField *_removableTextField;
}


@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TKVibrationPickerTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) UIColor *regularTextColor; // ivar: _regularTextColor
@property (retain, nonatomic) UIFont *regularTextFont;
@property (readonly) Class superclass;


-(BOOL)_isDisplayingRemovableTextField;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_layoutRemovableTextField;
-(void)_makeRemovableTextFieldEditable:(BOOL)arg0 ;
-(void)didTransitionToState:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)makeTextFieldResignFirstResponderIfNeeded;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)willTransitionToState:(NSUInteger)arg0 ;


@end


#endif