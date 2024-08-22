// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFEATUREAVAILABILITY_H
#define WBSFEATUREAVAILABILITY_H


#import <Foundation/Foundation.h>


@interface WBSFeatureAvailability : NSObject



+(BOOL)_shouldShowChineseFeatures;
+(BOOL)_shouldShowRussianFeatures;
+(BOOL)defaultSearchEngineMatchesExperiment;
+(BOOL)isCustomizationSyncEnabled;
+(BOOL)isInternalInstall;
+(BOOL)isMoreSearchProviderSuggestionsEnabled;
+(BOOL)isPerSiteSettingSyncEnabled;
+(BOOL)isReflectUserIntentInSearchEnabled;
+(BOOL)isResponsiveCompletionListEnabled;
+(BOOL)isSearchProviderEnabled:(NSUInteger)arg0 ;
+(BOOL)isStartPageSettingSyncEnabled;
+(BOOL)isStreamlinedCompletionListEnabled;
+(BOOL)supportsURLCredentialStorageAccessControlGroups;
+(BOOL)wantsAggressiveKeychainCredentialCaching;


@end


#endif