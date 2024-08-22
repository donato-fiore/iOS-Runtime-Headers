// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFEATUREAVAILABILITY_H
#define WBSFEATUREAVAILABILITY_H


#import <Foundation/Foundation.h>


@interface WBSFeatureAvailability : NSObject



+(BOOL)_shouldShowChineseFeatures;
+(BOOL)_shouldShowRussianFeatures;
+(BOOL)isCustomizationSyncEnabled;
+(BOOL)isInternalInstall;
+(BOOL)isPerSiteSettingSyncEnabled;
+(BOOL)isSearchProviderEnabled:(NSUInteger)arg0 ;
+(BOOL)isStartPageSettingSyncEnabled;
+(BOOL)supportsURLCredentialStorageAccessControlGroups;
+(BOOL)wantsAggressiveKeychainCredentialCaching;


@end


#endif