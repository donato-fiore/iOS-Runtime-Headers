// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMFEATUREFLAGS_H
#define CDMFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface CDMFeatureFlags : NSObject



+(BOOL)globalOverridesAreEnabled;
+(BOOL)isAgentToPersonMappingEnabled;
+(BOOL)isCATIEnabled;
+(BOOL)isCcqrAerEnabled;
+(BOOL)isContextUpdateEnabled;
+(BOOL)isLogNluEnabled;
+(BOOL)isMarrsMentionDetectorEnabled;
+(BOOL)isOvertonKGSpanMatcherEnabled;
+(BOOL)isPLUMEnabled;
+(BOOL)isRepetitionDetectionEnabled;
+(BOOL)isSiriMiniEnabled;
+(BOOL)isUaaPEnabled;
+(BOOL)isUaaPPreferred;


@end


#endif