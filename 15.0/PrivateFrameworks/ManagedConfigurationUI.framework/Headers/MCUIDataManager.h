// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUIDATAMANAGER_H
#define MCUIDATAMANAGER_H

@class LSApplicationWorkspace, NSArray, NSString, MCProfileInfo;
@protocol LSApplicationWorkspaceObserverProtocol, MCUIDataManagerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol, MCUIDataManagerProtocol>



@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace; // ivar: _appWorkspace
@property (nonatomic) int appsChangedNotifyToken; // ivar: _appsChangedNotifyToken
@property (retain, nonatomic) NSArray *blockedApplications; // ivar: _blockedApplications
@property (retain, nonatomic) NSArray *configurationProfilesInfo; // ivar: _configurationProfilesInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *enterpriseAppSigners; // ivar: _enterpriseAppSigners
@property (retain, nonatomic) NSArray *freeDeveloperAppSigners; // ivar: _freeDeveloperAppSigners
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCProfileInfo *mdmProfileInfo; // ivar: _mdmProfileInfo
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (nonatomic) BOOL observing; // ivar: _observing
@property (nonatomic) int provisioningProfileInstalledToken; // ivar: _provisioningProfileInstalledToken
@property (nonatomic) int provisioningProfileRemovedToken; // ivar: _provisioningProfileRemovedToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // ivar: _reloadQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *uninstalledProfilesInfo; // ivar: _uninstalledProfilesInfo


+(BOOL)_isDeviceManagementHiddenConcrete;
+(id)sharedManager;
-(BOOL)isDeviceManagementHidden;
-(BOOL)isProfileSectionEmpty;
-(NSUInteger)appSignerCount;
-(NSUInteger)installedProfileCount;
-(NSUInteger)itemCount;
-(id)configurationProfiles;
-(id)init;
-(id)mdmProfile;
-(void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(BOOL)arg0 appSigners:(BOOL)arg1 blockedApplications:(BOOL)arg2 completion:(id)arg3 ;
-(void)allDeviceManagementOutMDMProfileInfo:(*id)arg0 outConfigurationProfilesInfo:(*id)arg1 outUninstalledProfilesInfo:(*id)arg2 outEnterpriseAppSigners:(*id)arg3 outFreeDevAppSigners:(*id)arg4 outBlockedApplications:(*id)arg5 ;
-(void)appMovedToBackground:(id)arg0 ;
-(void)appMovedToForeground:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)profilesChanged:(id)arg0 ;
-(void)reloadAllDataInBackgroundWithCompletion:(id)arg0 ;
-(void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(id)arg0 ;
-(void)reloadDataInBackgroundIncludingProfiles:(BOOL)arg0 appSigners:(BOOL)arg1 blockedApplications:(BOOL)arg2 completion:(id)arg3 ;
-(void)reloadProfilesInBackgroundWithCompletion:(id)arg0 ;


@end


#endif