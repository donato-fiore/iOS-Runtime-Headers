// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSFEATUREAVAILABILITY_H
#define WBSFEATUREAVAILABILITY_H


#import <Foundation/Foundation.h>


@interface WBSFeatureAvailability : NSObject



+(BOOL)_shouldShowChineseFeatures;
+(BOOL)_shouldShowRussianFeatures;
+(BOOL)isCustomizationSyncEnabled;
+(BOOL)isLiveTextEnabled;
+(BOOL)isSearchProviderEnabled:(NSUInteger)arg0 ;
+(BOOL)isTabDatabaseEnabled;
+(BOOL)isTabGroupSyncEnabled;
+(BOOL)supportsURLCredentialStorageAccessControlGroups;
+(BOOL)wantsAggressiveKeychainCredentialCaching;


@end


#endif