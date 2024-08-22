// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMFEATUREFLAGS_H
#define CDMFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface CDMFeatureFlags : NSObject



+(BOOL)globalOverridesAreEnabled;
+(BOOL)isCATIEnabled;
+(BOOL)isCATIMultiTurnEnabled;
+(BOOL)isCDMClientXPCEnabled;
+(BOOL)isCcqrAerCbrEnabled;
+(BOOL)isCcqrAerCbrRdDependencyEnabled;
+(BOOL)isContextUpdateEnabled;
+(BOOL)isContextualSpanMatcherEnabled;
+(BOOL)isFeatureStoreEnabled;
+(BOOL)isFeatureStoreEnabledForExternalBuilds;
+(BOOL)isLVCEnabled;
+(BOOL)isLighthouseAPIEnabled;
+(BOOL)isLogNluEnabled;
+(BOOL)isMarrsMentionDetectorEnabled;
+(BOOL)isMarrsMentionResolverEnabled;
+(BOOL)isMentionResolverRewriterEnabled;
+(BOOL)isPSCEnabled;
+(BOOL)isRepetitionDetectionEnabled;
+(BOOL)isSSUCacheUpdateOnEveryRequestEnabled;
+(BOOL)isSSUEnabled;
+(BOOL)isShortcutsNLv4FollowupEnabled:(id)arg0 ;
+(BOOL)isSiriMiniEnabled;
+(BOOL)isTrieOverridesEnabled;
+(BOOL)isUaaPEnabled;
+(BOOL)isUaaPPreferred;


@end


#endif