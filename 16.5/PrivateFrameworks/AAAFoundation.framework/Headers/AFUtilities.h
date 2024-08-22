// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUTILITIES_H
#define AFUTILITIES_H


#import <Foundation/Foundation.h>


@interface AFUtilities : NSObject



+(BOOL)isInternalBuild;
+(BOOL)openAppleIDPrefWithLaunchParameters:(id)arg0 ;
+(BOOL)screenLockIsEnabled;
+(id)bundleIdentifier;
+(id)bundleVersion;
+(id)currentApplicationIdentifier;
+(id)currentApplicationVersion;
+(id)urlForBundleIdentifier:(id)arg0 ;
+(void)launchPhotosApplication;
+(void)launchSoftwareUpdate;
+(void)openAppleIDPref;
+(void)openApplicationWithBundleID:(id)arg0 ;
+(void)openEnergySaverPref;
+(void)openInternetAccountPref;
+(void)openNetworkPref;
+(void)openParentalControlPref;
+(void)openSecurityPref;
+(void)openSharingPref;
+(void)openUsersAndGroupsPref;


@end


#endif