// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSUTILITIES_H
#define CPSUTILITIES_H


#import <Foundation/Foundation.h>


@interface CPSUtilities : NSObject



+(BOOL)_associatedDomainIsApprovedForURL:(id)arg0 applicationIdentifier:(id)arg1 serviceType:(id)arg2 ;
+(BOOL)appClipAssociatedDomainIsApprovedForURL:(id)arg0 applicationIdentifier:(id)arg1 ;
+(BOOL)deviceHasCapabilities:(id)arg0 ;
+(BOOL)deviceHasHomeButton;
+(BOOL)deviceIsLocked;
+(BOOL)deviceIsPad;
+(BOOL)isBundleIdentifierBeingInstalled:(id)arg0 ;
+(BOOL)isNetworkConstrained;
+(BOOL)shouldPlayHaptics;
+(BOOL)validDomainAssociationWithAnyServiceTypeForURL:(id)arg0 applicationIdentifier:(id)arg1 ;
+(id)localizedDeviceName;
+(id)lowercasedDeviceFamilyName;
+(id)openURL:(id)arg0 ;
+(id)openURL:(id)arg0 withOptions:(id)arg1 ;
+(id)oppositeDeviceFamilyName;
+(id)poweredByCaptionForAppName:(id)arg0 ;
+(id)versionIdentifierForAppWithBundleIdentifier:(id)arg0 isPlaceholder:(*BOOL)arg1 ;
+(int)_deviceClass;
+(void)openAppWithBundleIdentifier:(id)arg0 ;
+(void)openURL:(id)arg0 inAppWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
+(void)openURL:(id)arg0 inAppWithBundleIdentifier:(id)arg1 promptForUnlock:(BOOL)arg2 originIsControlCenter:(BOOL)arg3 completionHandler:(id)arg4 ;
+(void)uninstallAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif