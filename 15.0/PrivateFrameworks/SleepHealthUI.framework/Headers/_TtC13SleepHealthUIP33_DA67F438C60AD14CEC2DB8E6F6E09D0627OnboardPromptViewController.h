// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC13SLEEPHEALTHUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0627ONBOARDPROMPTVIEWCONTROLLER_H
#define _TTC13SLEEPHEALTHUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0627ONBOARDPROMPTVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC13SleepHealthUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0627OnboardPromptViewController : OBWelcomeController {
    ? delegate;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)beginButtonAction;
-(void)removeButtonAction;


@end


#endif