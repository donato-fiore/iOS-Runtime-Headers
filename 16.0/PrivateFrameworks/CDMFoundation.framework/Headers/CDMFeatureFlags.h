// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMFEATUREFLAGS_H
#define CDMFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface CDMFeatureFlags : NSObject



+(BOOL)globalOverridesAreEnabled;
+(BOOL)isAgentToPersonMappingEnabled;
+(BOOL)isAutoShortcutsEnabled;
+(BOOL)isCATIEnabled;
+(BOOL)isCATIMultiTurnEnabled;
+(BOOL)isCcqrAerCbrEnabled;
+(BOOL)isCcqrAerCbrRdDependencyEnabled;
+(BOOL)isContextUpdateEnabled;
+(BOOL)isContextualSpanMatcherEnabled;
+(BOOL)isFeatureStoreEnabled;
+(BOOL)isFeatureStoreEnabledForExternalBuilds;
+(BOOL)isLighthouseAPIEnabled;
+(BOOL)isLinkSpansEnabled;
+(BOOL)isLogNluEnabled;
+(BOOL)isMarrsMentionDetectorEnabled;
+(BOOL)isMarrsMentionResolverEnabled;
+(BOOL)isMentionResolverRewriterEnabled;
+(BOOL)isPLUMEnabled;
+(BOOL)isPSCEnabled;
+(BOOL)isRepetitionDetectionEnabled;
+(BOOL)isSiriMiniEnabled;
+(BOOL)isUaaPEnabled;
+(BOOL)isUaaPPreferred;


@end


#endif