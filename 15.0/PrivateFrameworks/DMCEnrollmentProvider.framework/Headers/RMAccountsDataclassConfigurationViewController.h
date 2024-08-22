// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMACCOUNTSDATACLASSCONFIGURATIONVIEWCONTROLLER_H
#define RMACCOUNTSDATACLASSCONFIGURATIONVIEWCONTROLLER_H

@class ACUIDataclassConfigurationViewController;



@interface RMAccountsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController



-(Class)accountInfoControllerClass;
-(id)messageForAccountDeletionWarning;
-(id)specifiers;
-(id)titleForDeleteButton;
-(void)_reloadSpecifiersAndDeleteAccountButton;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif