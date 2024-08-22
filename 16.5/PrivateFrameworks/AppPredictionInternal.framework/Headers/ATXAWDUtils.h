// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAWDUTILS_H
#define ATXAWDUTILS_H


#import <Foundation/Foundation.h>


@interface ATXAWDUtils : NSObject



+(CGFloat)scoreMultiplierWithInputType:(NSUInteger)arg0 ;
+(id)appDataAtIndex:(NSUInteger)arg0 forSessionLogDict:(id)arg1 ;
+(id)populateAwdAppPredictionSessionForSessionLogDict:(id)arg0 ;
+(id)subscoresWithDictionary:(id)arg0 ;
+(int)AWDLOITypeForString:(id)arg0 ;
+(int)awdActionEngagementWithEngagement:(NSUInteger)arg0 ;
+(int)awdActionTypeWithActionType:(NSUInteger)arg0 ;
+(int)awdAppLaunchReasonWithString:(id)arg0 ;
+(int)awdConsumerSubTypeWithConsumerSubType:(unsigned char)arg0 ;
+(int)awdLOITypeWithRTLOI:(NSInteger)arg0 ;
+(int)awdMotionTypeWithMotionType:(NSInteger)arg0 ;
+(int)awdPredictionOutcomeWithATXPredictionOutcome:(NSUInteger)arg0 ;
+(int)awdScoreWithScore:(CGFloat)arg0 type:(NSUInteger)arg1 ;
+(void)logAppPredictionDictionaryViaAWD:(id)arg0 ;


@end


#endif