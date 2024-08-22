// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUISETTINGSEDITABLETEXTCELL_H
#define AXUISETTINGSEDITABLETEXTCELL_H

@class PSTableCell, NSString, UITextField;
@protocol UITextFieldDelegate;



@interface AXUISettingsEditableTextCell : PSTableCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *nameTextField; // ivar: _nameTextField
@property (nonatomic) BOOL shouldAllowSelection; // ivar: _shouldAllowSelection
@property (nonatomic) BOOL shouldDisableTextFieldWhenNotEditing; // ivar: _shouldDisableTextFieldWhenNotEditing
@property (readonly) Class superclass;


-(BOOL)_accessibilityIgnoreInternalLabels;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)textFieldValue:(id)arg0 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)initializeView;
-(void)layoutSubviews;
-(void)markNameTextFieldAccessible;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelectionStyle:(NSInteger)arg0 ;
-(void)setTextFieldValue:(id)arg0 specifier:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateText;


@end


#endif