// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCUIAPPSIGNERUNINSTALLERUTILITIES_H
#define MCUIAPPSIGNERUNINSTALLERUTILITIES_H


#import <Foundation/Foundation.h>


@interface MCUIAppSignerUninstallerUtilities : NSObject



+(id)_provisioningProfileUUIDsForAppSigner:(id)arg0 ;
+(void)_asyncUninstallApplicationsForAppsigner:(id)arg0 withUninstaller:(id)arg1 dispatchGroup:(id)arg2 ;
+(void)_asyncUninstallProvisioningProfilesForAppSigner:(id)arg0 withUninstaller:(id)arg1 dispatchGroup:(id)arg2 ;
+(void)uninstallAppSigner:(id)arg0 withUninstaller:(id)arg1 dispatchGroup:(id)arg2 completion:(id)arg3 ;


@end


#endif