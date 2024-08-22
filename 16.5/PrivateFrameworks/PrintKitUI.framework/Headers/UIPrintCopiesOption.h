// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTCOPIESOPTION_H
#define UIPRINTCOPIESOPTION_H

@class UIStepper, UITextField, NSString;
@protocol UITextFieldDelegate;


#import "UIPrintOption.h"

@interface UIPrintCopiesOption : UIPrintOption <UITextFieldDelegate>



@property (retain, nonatomic) UIStepper *copiesStepper; // ivar: _copiesStepper
@property (retain, nonatomic) UITextField *copiesTextField; // ivar: _copiesTextField
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)keyboardShowing;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)textField:(id)arg0 editMenuForCharactersInRange:(struct _NSRange )arg1 suggestedActions:(id)arg2 ;
-(void)copiesStepperChanged:(id)arg0 ;
-(void)dealloc;
-(void)dismissKeyboard;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateFromPrintInfo;


@end


#endif