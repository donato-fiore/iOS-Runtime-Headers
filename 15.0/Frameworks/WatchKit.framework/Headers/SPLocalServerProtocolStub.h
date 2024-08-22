// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPLOCALSERVERPROTOCOLSTUB_H
#define SPLOCALSERVERPROTOCOLSTUB_H

@class NSString;
@protocol SPLocalServerProtocol;

#import <Foundation/Foundation.h>


@interface SPLocalServerProtocolStub : NSObject <SPLocalServerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)activeComplicationsWithCompletion:(id)arg0 ;
-(void)cancelPendingInstallations;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInstalledApplicationsWithCompletion:(id)arg0 ;
-(void)fetchInstalledComplicationsWithCompletion:(id)arg0 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchProvisioningProfilesWithCompletion:(id)arg0 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getAlwaysInstallWithCompletion:(id)arg0 ;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)hideUserNotification;
-(void)installAllApplicationsForProcessWithIdentifier:(id)arg0 ;
-(void)installApplicationWithIdentifier:(id)arg0 installer:(id)arg1 installerIsTestFlight:(BOOL)arg2 completion:(id)arg3 ;
-(void)installApplicationWithIdentifier:(id)arg0 installer:(id)arg1 withProvisioningProfiles:(id)arg2 profileNames:(id)arg3 completion:(id)arg4 ;
-(void)installProvisioningProfileWithName:(id)arg0 profileData:(id)arg1 completion:(id)arg2 ;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)removeApplicationWithIdentifier:(id)arg0 installer:(id)arg1 completion:(id)arg2 ;
-(void)removeProvisioningProfileWithID:(id)arg0 completion:(id)arg1 ;
-(void)setAlwaysInstall:(id)arg0 ;
-(void)setAlwaysInstall:(id)arg0 forNRDeviceWithPairingID:(id)arg1 ;
-(void)setLogLevel:(id)arg0 ;
-(void)showUserNotification:(NSInteger)arg0 applicationName:(id)arg1 ;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg0 preferences:(id)arg1 completion:(id)arg2 ;
-(void)wakeExtensionForWatchApp:(id)arg0 ;
-(void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif