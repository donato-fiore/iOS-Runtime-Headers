// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSYSTEMPOLICYMANAGER_H
#define PSSYSTEMPOLICYMANAGER_H


#import <Foundation/Foundation.h>


@interface PSSystemPolicyManager : NSObject



+(BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg0 ;
+(BOOL)_cellularDataSettingsNeededForBundleID:(id)arg0 ;
+(BOOL)_defaultAppSettingsNeededForBundleID:(id)arg0 ;
+(BOOL)_documentSettingsNeededForBundleID:(id)arg0 ;
+(BOOL)_familyControlsSettingNeededForBundleID:(id)arg0 ;
+(BOOL)_languageSettingNeededForBundleID:(id)arg0 ;
+(BOOL)_liveActivitiesSettingsNeededForBundleID:(id)arg0 ;
+(BOOL)_notificationSettingsNeededForBundleID:(id)arg0 ;
+(BOOL)_pasteboardSettingsNeededForBundleID:(id)arg0 ;
+(BOOL)_privacySettingsNeededForProxy:(id)arg0 ;
+(BOOL)_shouldIncludeProxy:(id)arg0 ;
+(BOOL)_systemSettingsNeededForProxy:(id)arg0 ;
+(BOOL)_tapToPaySettingsNeededForBundleID:(id)arg0 ;
+(BOOL)hasAnyAppClip;
+(id)_dataUsageWorkspaceInfo;
+(id)_thirdPartyApplicationProxies;
+(id)_thirdPartyApplicationProxyForBundleID:(id)arg0 ;
+(id)specifiersForThirdPartyApps:(id)arg0 ;
+(id)thirdPartyApplicationForBundleID:(id)arg0 ;
+(id)thirdPartyApplicationProxies;
+(id)thirdPartyApplicationProxyForBundleID:(id)arg0 ;
+(id)thirdPartyApplications;
+(id)thirdPartyApplicationsIncludingAppClips:(BOOL)arg0 ;
+(void)_populateBBSectionIDs;


@end


#endif