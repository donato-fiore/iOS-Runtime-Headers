// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUWELCOMESETTINGS_H
#define PUWELCOMESETTINGS_H

@class PXSettings, NSString;
@protocol SBSRemoteAlertHandleObserver;



@interface PUWelcomeSettings : PXSettings <SBSRemoteAlertHandleObserver>



@property (nonatomic) BOOL alwaysShowCloudPhotoWelcome; // ivar: _alwaysShowCloudPhotoWelcome
@property (nonatomic) BOOL alwaysShowWhatsNewWelcome; // ivar: _alwaysShowWhatsNewWelcome
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)setDefaultValues;


@end


#endif