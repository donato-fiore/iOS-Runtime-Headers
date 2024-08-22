// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSHAREDWITHYOUMANAGER_H
#define IMSHAREDWITHYOUMANAGER_H

@class LSApplicationWorkspace, NSNumber, NSString, NSSet, NSArray, NSMutableDictionary;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface IMSharedWithYouManager : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, nonatomic) LSApplicationWorkspace *_applicationWorkspace;
@property (copy, nonatomic) NSNumber *cachedSharedWithYouEnabledValue; // ivar: _cachedSharedWithYouEnabledValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *enabledBundleIDs; // ivar: _enabledBundleIDs
@property (readonly) NSUInteger hash;
@property (nonatomic) int settingHasChangedNotificationToken; // ivar: _settingHasChangedNotificationToken
@property (readonly, copy, nonatomic) NSArray *sharedWithYouApplicationBundleIDs;
@property (nonatomic, getter=isSharedWithYouEnabled) BOOL sharedWithYouEnabled;
@property (readonly, nonatomic) BOOL sharedWithYouKeyExists;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *swyPinsPerBundleID; // ivar: _swyPinsPerBundleID


+(BOOL)_isBundleIDAllowed:(id)arg0 ;
+(id)_hiddenBundleIDs;
+(id)appBundleIDsFromDefaults;
+(id)collaborationAppBundleIDs;
+(id)onboardingAppBundleIDs;
+(id)sharedManager;
+(id)tvAppBundleID;
-(BOOL)defaultCollaborationAppsEnabled;
-(BOOL)isSharedWithYouEnabledForApplicationWithBundleID:(id)arg0 ;
-(BOOL)showPinningStatusTextForBundleID:(id)arg0 ;
-(NSInteger)getPinCountForBundleID:(id)arg0 ;
-(id)_installedLSAppRecordFromBundleIDs:(id)arg0 ;
-(id)appNameFromSharingURL:(id)arg0 ;
-(id)appStoreIDFromSharingURL:(id)arg0 ;
-(id)appStoreURLFromSharingURL:(id)arg0 ;
-(id)defaultAppBundleIDs;
-(id)enabledApps;
-(id)init;
-(id)lsAppRecordForAppStoreShareURL:(id)arg0 ;
-(id)lsAppRecordForShareBearURL:(id)arg0 ;
-(id)lsAppRecordForURL:(id)arg0 ;
-(id)lsAppRecordForURL:(id)arg0 checkInstalledAppsOnly:(BOOL)arg1 ;
-(id)sharedWithYouApps;
-(id)swyPublicEntitlementAppBundleIDs;
-(id)urlMinusFragment:(id)arg0 onlyCKURL:(BOOL)arg1 ;
-(void)appNameAndBundleIDFoURL:(id)arg0 outAppName:(*id)arg1 outBundleID:(*id)arg2 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;
-(void)decrementPinCountForBundleID:(id)arg0 ;
-(void)deleteSharedWithYouPreferences;
-(void)incrementPinCountForBundleID:(id)arg0 ;
-(void)updateEnabledApps;


@end


#endif