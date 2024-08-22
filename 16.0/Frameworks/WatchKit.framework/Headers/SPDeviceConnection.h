// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPDEVICECONNECTION_H
#define SPDEVICECONNECTION_H

@class NSString, NSHashTable, NSXPCConnection;
@protocol SPLocalApplicationProtocol, OS_dispatch_queue, SPDeviceConnectionDelegate;

#import <Foundation/Foundation.h>


@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SPDeviceConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSHashTable *observers; // ivar: _observers
@property (retain) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedDeviceConnection;
-(NSInteger)appInstallStateForAppConduitInstallState:(NSInteger)arg0 ;
// -(id)connectionProxy:(id)arg0 caller:(unk)arg1  ;
-(id)init;
-(id)localeForUserNotification;
-(void)_enumerateObserversSafely:(id)arg0 ;
-(void)activeComplicationsForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)activeComplicationsWithCompletion:(id)arg0 ;
-(void)activeComplicationsWithErrorCompletion:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelPendingInstallations;
-(void)createXPCConnectionIfNecessary;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg0 forPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchInstalledApplicationsForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)fetchInstalledApplicationsWithCompletion:(id)arg0 ;
-(void)fetchInstalledApplicationsWithErrorCompletion:(id)arg0 ;
-(void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg0 withErrorCompletion:(id)arg1 ;
-(void)fetchInstalledComplicationsForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)fetchInstalledComplicationsWithCompletion:(id)arg0 ;
-(void)fetchInstalledComplicationsWithErrorCompletion:(id)arg0 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg0 forPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)fetchProvisioningProfilesForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)fetchProvisioningProfilesWithCompletion:(id)arg0 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg0 completion:(id)arg1 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getAlwaysInstallForPairedDevice:(id)arg0 completion:(id)arg1 ;
-(void)getAlwaysInstallWithCompletion:(id)arg0 ;
-(void)hideUserNotification;
-(void)installAllApplications;
-(void)installApplication:(id)arg0 completion:(id)arg1 ;
-(void)installApplication:(id)arg0 completionWithError:(id)arg1 ;
-(void)installApplication:(id)arg0 onPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)installApplication:(id)arg0 withProvisioningProfiles:(id)arg1 completion:(id)arg2 ;
-(void)installApplication:(id)arg0 withProvisioningProfiles:(id)arg1 completionWithError:(id)arg2 ;
-(void)installApplication:(id)arg0 withProvisioningProfiles:(id)arg1 onPairedDevice:(id)arg2 completion:(id)arg3 ;
-(void)installApplication:(id)arg0 withProvisioningProfiles:(id)arg1 onPairedDevice:(id)arg2 completionWithError:(id)arg3 ;
-(void)installProvisioningProfileWithURL:(id)arg0 completion:(id)arg1 ;
-(void)installProvisioningProfileWithURL:(id)arg0 onPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)invalidateXPCConnection;
-(void)receiveData:(id)arg0 ;
-(void)removeApplication:(id)arg0 completion:(id)arg1 ;
-(void)removeApplication:(id)arg0 fromPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeProvisioningProfileWithID:(id)arg0 completion:(id)arg1 ;
-(void)removeProvisioningProfileWithID:(id)arg0 fromPairedDevice:(id)arg1 completion:(id)arg2 ;
-(void)setAlwaysInstall:(id)arg0 ;
-(void)setAlwaysInstall:(id)arg0 forDevice:(id)arg1 ;
-(void)setLogLevel:(id)arg0 ;
-(void)showUserNotification:(NSInteger)arg0 applicationName:(id)arg1 extensionBundleID:(id)arg2 ;
-(void)showUserNotification:(NSInteger)arg0 bundleID:(id)arg1 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg0 preferences:(id)arg1 completion:(id)arg2 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg0 preferences:(id)arg1 forPairedDevice:(id)arg2 completion:(id)arg3 ;
-(void)wakeExtensionForWatchApp:(id)arg0 ;


@end


#endif