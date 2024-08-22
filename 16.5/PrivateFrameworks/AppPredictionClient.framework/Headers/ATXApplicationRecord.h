// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPLICATIONRECORD_H
#define ATXAPPLICATIONRECORD_H


#import <Foundation/Foundation.h>


@interface ATXApplicationRecord : NSObject



+(BOOL)isAppClipForBundleId:(id)arg0 ;
+(BOOL)isAppClipGivenAppRecord:(id)arg0 ;
+(BOOL)isAppClipWebClipBundleId:(id)arg0 ;
+(BOOL)isArcadeAppForBundle:(id)arg0 ;
+(BOOL)isBackgroundAudioSupportedForBundle:(id)arg0 ;
+(BOOL)isBetaAppForBundle:(id)arg0 ;
+(BOOL)isDeviceManagementPolicyOkForBundleId:(id)arg0 ;
+(BOOL)isEnterpriseAppForBundle:(id)arg0 ;
+(BOOL)isHiddenFromSpringBoardWithBundleId:(id)arg0 ;
+(BOOL)isInstalledAndNotRestrictedForBundle:(id)arg0 ;
+(BOOL)isInstalledForBundle:(id)arg0 ;
+(BOOL)isInstalledOrIsPlaceholderForBundle:(id)arg0 ;
+(BOOL)isInstallingForBundle:(id)arg0 ;
+(BOOL)isInternalOrSystemAppForBundleId:(id)arg0 ;
+(BOOL)isLaunchProhibitedForBundle:(id)arg0 ;
+(BOOL)isOffloadedForBundle:(id)arg0 ;
+(BOOL)isRestoreInstallTypeForBundle:(id)arg0 ;
+(BOOL)isSwiftPlaygroundsBundle:(id)arg0 ;
+(BOOL)isSystemAppForBundleId:(id)arg0 ;
+(BOOL)isUPPValidatedForBundle:(id)arg0 ;
+(BOOL)isWebClipInstalledWithBundleId:(id)arg0 ;
+(NSUInteger)genreIdForBundle:(id)arg0 ;
+(id)appInfoForBundle:(id)arg0 ;
+(id)bundleIdForAdamIdIfInstalled:(NSUInteger)arg0 ;
+(id)companionBundleIdForBundleId:(id)arg0 ;
+(id)genreForBundle:(id)arg0 ;
+(id)localizedNameForBundle:(id)arg0 ;
+(id)localizedShortnameForBundle:(id)arg0 ;
+(id)parentAppBundleIdForClipBundleID:(id)arg0 ;
+(id)recordForAdamId:(NSUInteger)arg0 ;
+(id)recordForBundleId:(id)arg0 ;
+(id)registrationDateForBundle:(id)arg0 ;
+(id)schemaWithoutFallbackForBundle:(id)arg0 ;
+(void)getDeviceManagementPolicyForBundle:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif