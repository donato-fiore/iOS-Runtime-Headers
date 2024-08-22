// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDPROFILEUTILITIES_H
#define SDPROFILEUTILITIES_H


#import <Foundation/Foundation.h>


@interface SDProfileUtilities : NSObject



+(BOOL)isProfileInstallationAllowed;
+(BOOL)removeSeedingProfile;
+(id)getAssetAudienceIDForInstalledProfile:(*id)arg0 ;
+(id)getInstalledSeedProfile;
+(void)forceRemoveSeedingProfile;
+(void)installProfileWithData:(id)arg0 error:(*id)arg1 ;
+(void)removeSeedProfileIfRestricted;


@end


#endif