// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARPLANLABELLISTCONTROLLER_H
#define PSUICELLULARPLANLABELLISTCONTROLLER_H

@class PSListController, NSString, NSArray, UITextField;
@protocol UITextFieldDelegate;


#import "PSUICellularPlanUniversalReference.h"

@interface PSUICellularPlanLabelListController : PSListController <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // ivar: _planReference
@property (retain, nonatomic) NSArray *predefinedLabels; // ivar: _predefinedLabels
@property (readonly) Class superclass;
@property (weak, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) NSString *validatedCustomLabelText; // ivar: _validatedCustomLabelText


-(id)getLogger;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dismissKeyboard;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif