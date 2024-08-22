// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SLEEPHEALTHUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0634ENABLESCHEDULEPROMPTVIEWCONTROLLER_H
#define _TTC13SLEEPHEALTHUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0634ENABLESCHEDULEPROMPTVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC13SleepHealthUIP33_DA67F438C60AD14CEC2DB8E6F6E09D0634EnableSchedulePromptViewController : OBWelcomeController {
    ? delegate;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)enableButtonAction;


@end


#endif