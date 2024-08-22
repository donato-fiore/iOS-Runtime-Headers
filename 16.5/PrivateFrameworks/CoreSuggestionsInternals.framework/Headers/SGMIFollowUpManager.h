// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIFOLLOWUPMANAGER_H
#define SGMIFOLLOWUPMANAGER_H


#import <Foundation/Foundation.h>


@interface SGMIFollowUpManager : NSObject



+(id)_analyzeFeatureVector:(id)arg0 withRegExpDictionary:(id)arg1 forOutgoingMail:(BOOL)arg2 withDetectedLanguage:(id)arg3 withRegExLanguage:(id)arg4 withCustomTimeRange:(BOOL)arg5 ;
+(id)_analyzeForFollowUpMailWithBody:(id)arg0 isSent:(BOOL)arg1 messageId:(id)arg2 date:(id)arg3 ;
+(id)analyzeBody:(id)arg0 forLanguage:(id)arg1 forDate:(id)arg2 withCustomTimeRange:(BOOL)arg3 ;
+(id)analyzeFeatureVector:(id)arg0 ;
+(id)analyzeForFollowUpMailWithBody:(id)arg0 isSent:(BOOL)arg1 messageId:(id)arg2 date:(id)arg3 ;
+(id)analyzeIncomingMailFeatureVector:(id)arg0 ;
+(id)analyzeOutgoingMailFeatureVector:(id)arg0 ;
+(id)identifyFollowUpWarningFromSubject:(id)arg0 body:(id)arg1 date:(id)arg2 ;
+(id)identifyFollowUpWarningFromSubject:(id)arg0 content:(id)arg1 ;
+(void)logFollowUpStatsAndSetting;
+(void)reportUserEngagement:(NSInteger)arg0 forWarning:(id)arg1 ;


@end


#endif