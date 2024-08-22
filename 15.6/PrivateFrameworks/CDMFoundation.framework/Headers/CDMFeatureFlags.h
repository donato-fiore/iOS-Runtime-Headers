// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMFEATUREFLAGS_H
#define CDMFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface CDMFeatureFlags : NSObject



+(BOOL)globalOverridesAreEnabled;
+(BOOL)isAgentToPersonMappingEnabled;
+(BOOL)isCATIEnabled;
+(BOOL)isCATIMultiTurnEnabled;
+(BOOL)isCcqrAerCbrEnabled;
+(BOOL)isCcqrAerEnabled;
+(BOOL)isContextUpdateEnabled;
+(BOOL)isFeatureStoreEnabled;
+(BOOL)isFeatureStoreEnabledForExternalBuilds;
+(BOOL)isLighthouseAPIEnabled;
+(BOOL)isLogNluEnabled;
+(BOOL)isMarrsMentionDetectorEnabled;
+(BOOL)isMarrsMentionResolverEnabled;
+(BOOL)isOvertonKGSpanMatcherEnabled;
+(BOOL)isPLUMEnabled;
+(BOOL)isPSCEnabled;
+(BOOL)isRepetitionDetectionEnabled;
+(BOOL)isSiriMiniEnabled;
+(BOOL)isUaaPEnabled;
+(BOOL)isUaaPPreferred;


@end


#endif