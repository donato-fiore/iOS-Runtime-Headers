// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKPRIVACYMAINTAINER_H
#define _DKPRIVACYMAINTAINER_H


#import <Foundation/Foundation.h>


@interface _DKPrivacyMaintainer : NSObject



+(id)deletionPredicateForBundleID:(id)arg0 ;
+(void)maintainPrivacyWithKnowledgeStorage:(id)arg0 installedApps:(id)arg1 deleteMaxCount:(NSUInteger)arg2 objectMaxCount:(NSUInteger)arg3 objectMaxLifespan:(CGFloat)arg4 activity:(id)arg5 ;


@end


#endif