// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXACTIONSESSIONLOG_H
#define ATXACTIONSESSIONLOG_H

@class ATXActionResponse;

#import <Foundation/Foundation.h>

#import "ATXPredictionContext.h"

@interface ATXActionSessionLog : NSObject {
    NSUInteger _engagementType;
    ATXActionResponse *_actionResponse;
    ATXPredictionContext *_context;
    BOOL _isShadowLog;
}




+(BOOL)isLockscreenSession:(unsigned char)arg0 ;
+(BOOL)isLowConfidenceSession:(id)arg0 ;
+(BOOL)isSessionNotUsefulForTraining:(int)arg0 actionResponse:(id)arg1 ;
+(BOOL)isSessionWithoutEngagement:(int)arg0 ;
+(CGFloat)_bucketize:(CGFloat)arg0 bucketSize:(CGFloat)arg1 ;
+(CGFloat)roundedElapsedTimeWithStartDate:(id)arg0 endDate:(id)arg1 accuracy:(CGFloat)arg2 ;
+(void)logActionData:(id)arg0 ;
+(void)logIntentPredictionSession:(id)arg0 ;
+(void)performSessionLoggingWithActionResponse:(id)arg0 engagementType:(NSUInteger)arg1 context:(id)arg2 isShadowLog:(BOOL)arg3 forTestingMode:(BOOL)arg4 ;
-(id)constructActionDataDictionaryWithEngagedIndicesOut:(*id)arg0 andAWDActionOut:(*id)arg1 andEngagementTypeFound:(*NSUInteger)arg2 forTestingMode:(BOOL)arg3 ;
-(id)constructSessionLogDictionaryWithAWDSessionOut:(*id)arg0 forTestingMode:(BOOL)arg1 ;
-(id)init;
-(id)initWithActionEngagementType:(NSUInteger)arg0 actionResponse:(id)arg1 context:(id)arg2 isShadowLog:(BOOL)arg3 ;
-(void)performSessionLogging:(BOOL)arg0 ;


@end


#endif