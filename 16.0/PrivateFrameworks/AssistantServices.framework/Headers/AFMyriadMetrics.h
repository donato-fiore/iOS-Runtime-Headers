// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMYRIADMETRICS_H
#define AFMYRIADMETRICS_H


#import <Foundation/Foundation.h>


@interface AFMyriadMetrics : NSObject



+(id)sharedInstance;
-(BOOL)isMyriadMetricsMessage:(id)arg0 ;
-(CGFloat)getSessionId:(struct MyriadMetricsDataV1 *)arg0 ;
-(id)_createEndAnalyticContexFromIntermediateContext:(id)arg0 forVersion:(unsigned int)arg1 sessionId:(CGFloat)arg2 ;
-(id)_getRequestType:(NSUInteger)arg0 ;
-(id)getCDASessionId:(struct MyriadMetricsDataV1 *)arg0 ;
-(int)_getCDASchemaCDATriggerType:(NSUInteger)arg0 ;
-(unsigned int)getVersion:(struct MyriadMetricsDataV1 *)arg0 ;
-(void)_decisionMadeContext:(struct MyriadMetricsDataV1 *)arg0 additionalContext:(id)arg1 instrumentation:(id)arg2 completion:(id)arg3 ;
-(void)_submitMyriadMetrics:(struct MyriadMetricsDataV1 *)arg0 additionalContext:(id)arg1 toStream:(id)arg2 instrumentation:(id)arg3 completion:(id)arg4 ;
-(void)submitAccessoryMyriadMetricsToAnalyticsStream:(id)arg0 payload:(id)arg1 additionalContext:(id)arg2 instrumentation:(id)arg3 completion:(id)arg4 ;
-(void)submitAccessoryMyriadMetricsToAnalyticsStream:(id)arg0 payload:(id)arg1 instrumentation:(id)arg2 completion:(id)arg3 ;
-(void)submitMyriadMetricsToAnalyticsStream:(id)arg0 context:(id)arg1 forEvent:(NSInteger)arg2 contextNoCopy:(BOOL)arg3 ;


@end


#endif