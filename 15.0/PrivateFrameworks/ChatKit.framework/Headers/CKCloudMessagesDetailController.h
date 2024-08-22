// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCLOUDMESSAGESDETAILCONTROLLER_H
#define CKCLOUDMESSAGESDETAILCONTROLLER_H

@class PSListController, STStoragePlugin, UIProgressHUD;



@interface CKCloudMessagesDetailController : PSListController {
    STStoragePlugin *_plugin;
}


@property (retain, nonatomic) UIProgressHUD *cloudKitProgressView; // ivar: _cloudKitProgressView


+(id)specifier;
-(id)cloudDocsSpecifiers;
-(id)dataSize:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_displayiCloudErrorMessage;
-(void)disableAndDelete:(id)arg0 ;
-(void)hideSpinner;
-(void)setEnabledDidReturned:(id)arg0 ;
-(void)showSpinnerMessage:(id)arg0 ;
-(void)tryToDisableAllDevicesDidReturn:(id)arg0 ;
-(void)undoDelete:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif