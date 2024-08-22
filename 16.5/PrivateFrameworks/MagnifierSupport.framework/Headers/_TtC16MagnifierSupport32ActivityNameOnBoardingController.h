// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT32ACTIVITYNAMEONBOARDINGCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT32ACTIVITYNAMEONBOARDINGCONTROLLER_H

@class OBWelcomeController;
@protocol UITextFieldDelegate;



@interface _TtC16MagnifierSupport32ActivityNameOnBoardingController : OBWelcomeController <UITextFieldDelegate>

 {
    ? kContentViewHeight;
    ? kTextFieldHeight;
    ? kTextFieldWidthPadding;
    ? kTextFieldTopPadding;
    ? kTextFieldCornerRadius;
    ? activityNameTextField;
    ? activityNameTakenLabel;
    ? button;
    ? createActivityDelegate;
    ? delegate;
}




-(BOOL)_canShowWhileLocked;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)activityNameFromTextFieldWithTextField:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif