// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACUISETUPVIEWCONTROLLER_H
#define ACUISETUPVIEWCONTROLLER_H

@class PSSetupController;



@interface ACUISetupViewController : PSSetupController {
    BOOL _didAttemptDataclassSetup;
    BOOL _shouldForceMailSetup;
}




+(id)_specifierForDataclassEditControllerClass:(Class)arg0 withName:(id)arg1 account:(id)arg2 ;
+(void)showAlternateCreationControllerForAccountType:(id)arg0 username:(id)arg1 fromViewController:(id)arg2 specifier:(id)arg3 completion:(id)arg4 ;
+(void)showDataclassConfigurationControllerForAccount:(id)arg0 name:(id)arg1 fromViewController:(id)arg2 specifier:(id)arg3 completion:(id)arg4 ;
-(void)_dismissAndNotifyParent;
-(void)controller:(id)arg0 didFinishSettingUpAccount:(id)arg1 ;
-(void)finishedAccountSetup;


@end


#endif