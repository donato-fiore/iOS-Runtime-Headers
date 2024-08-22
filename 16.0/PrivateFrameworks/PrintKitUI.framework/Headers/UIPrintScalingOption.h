// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTSCALINGOPTION_H
#define UIPRINTSCALINGOPTION_H

@class NSString, UIStepper, UITextField;
@protocol UITextFieldDelegate;


#import "UIPrintOption.h"

@interface UIPrintScalingOption : UIPrintOption <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStepper *scaleStepper; // ivar: _scaleStepper
@property (retain, nonatomic) UITextField *scaleTextField; // ivar: _scaleTextField
@property (readonly) Class superclass;


-(BOOL)keyboardShowing;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)textField:(id)arg0 editMenuForCharactersInRange:(struct _NSRange )arg1 suggestedActions:(id)arg2 ;
-(void)dealloc;
-(void)dismissKeyboard;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)paperScaleStepperChanged:(id)arg0 ;
-(void)saveScaleValueToPrintInfo:(NSInteger)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateFromPrintInfo;


@end


#endif