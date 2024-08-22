// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUICLOUDSTORAGEVIEWCONTROLLER_H
#define AFUICLOUDSTORAGEVIEWCONTROLLER_H

@class PSListController, AFSettingsConnection;



@interface AFUICloudStorageViewController : PSListController {
    AFSettingsConnection *_settings;
}




-(id)specifiers;
-(void)_disableAndDeleteCloudSync;
-(void)confirmDisable;
-(void)confirmDisableForMultiUserVoiceIdentification;
-(void)didReceiveMemoryWarning;
-(void)handleDisableAndDeleteButtonPress;
-(void)viewDidLoad;


@end


#endif