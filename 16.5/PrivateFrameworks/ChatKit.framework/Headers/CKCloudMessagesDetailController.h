// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCLOUDMESSAGESDETAILCONTROLLER_H
#define CKCLOUDMESSAGESDETAILCONTROLLER_H

@class PSListController, UIProgressHUD, STStoragePlugin;
@protocol IMDaemonMultiplexedConnectionManaging;



@interface CKCloudMessagesDetailController : PSListController

@property (retain, nonatomic) UIProgressHUD *cloudKitProgressView; // ivar: _cloudKitProgressView
@property (retain, nonatomic) NSObject<IMDaemonMultiplexedConnectionManaging> *daemonConnection; // ivar: _daemonConnection
@property (retain, nonatomic) STStoragePlugin *plugin; // ivar: _plugin


+(id)specifier;
-(id)cloudDocsSpecifiers;
-(id)dataSize:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_displayiCloudErrorMessage;
-(void)connectToDaemon;
-(void)dealloc;
-(void)disableAndDelete:(id)arg0 ;
-(void)disconnectFromDaemon;
-(void)hideSpinner;
-(void)setEnabledDidReturned:(id)arg0 ;
-(void)showSpinnerMessage:(id)arg0 ;
-(void)tryToDisableAllDevicesDidReturn:(id)arg0 ;
-(void)undoDelete:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif