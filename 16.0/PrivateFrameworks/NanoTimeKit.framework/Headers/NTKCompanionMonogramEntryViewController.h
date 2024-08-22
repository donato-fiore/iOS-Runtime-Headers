// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONMONOGRAMENTRYVIEWCONTROLLER_H
#define NTKCOMPANIONMONOGRAMENTRYVIEWCONTROLLER_H

@class PSListController, NSString, UITextField;
@protocol UITextFieldDelegate;



@interface NTKCompanionMonogramEntryViewController : PSListController <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *monogramEntry; // ivar: _monogramEntry
@property (nonatomic) BOOL showsDoneButton; // ivar: _showsDoneButton
@property (readonly) Class superclass;


+(id)localizedDescription;
+(id)localizedTitle;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(id)customMonogram:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_doneTapped;
-(void)_resetEntryField;
-(void)returnPressedAtEnd;
-(void)setCustomMonogram:(id)arg0 specifier:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif