// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKPRIVACYMAINTAINER_H
#define _DKPRIVACYMAINTAINER_H


#import <Foundation/Foundation.h>


@interface _DKPrivacyMaintainer : NSObject



+(NSUInteger)deleteMalformedNotificationUsageEvents:(id)arg0 ;
+(id)deletionPredicateForBundleID:(id)arg0 ;
+(void)maintainPrivacyWithKnowledgeStorage:(id)arg0 installedApps:(id)arg1 installedAppExtensions:(id)arg2 deleteMaxCount:(NSUInteger)arg3 objectMaxCount:(NSUInteger)arg4 objectMaxLifespan:(CGFloat)arg5 activity:(id)arg6 ;


@end


#endif