// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSAPPUSAGEUTILITIES_H
#define _PSAPPUSAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface _PSAppUsageUtilities : NSObject



+(id)mostUsedAppBundleIdsUsingPredicate:(id)arg0 knowledgeStore:(id)arg1 ;
+(id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg0 ;
+(id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg0 daysAgo:(NSInteger)arg1 knowledgeStore:(id)arg2 ;
+(id)shareExtensionsUsedAndInstalledDaysAgo:(NSInteger)arg0 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg1 knowledgeStore:(id)arg2 ;
+(id)sharingAppUsageDurations;
+(void)cacheSharingAppUsageDurations:(id)arg0 ;


@end


#endif