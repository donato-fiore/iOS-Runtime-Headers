// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTSIRIANALYTICS_H
#define ASSISTANTSIRIANALYTICS_H



#import "SiriAnalyticsClient.h"
#import "SiriAnalyticsRemoteService.h"

@interface AssistantSiriAnalytics : SiriAnalyticsClient {
    BOOL _isInternalInstall;
    SiriAnalyticsRemoteService *_remoteService;
}




+(id)derivedIdentifierForComponent:(int)arg0 fromSourceIdentifier:(id)arg1 ;
+(id)derivedIdentifierForComponentName:(int)arg0 fromSourceIdentifier:(id)arg1 ;
+(id)sharedAnalytics;
+(id)sharedStream;
+(void)derivedIdentifierForComponent:(int)arg0 fromSourceIdentifier:(id)arg1 completion:(id)arg2 ;
-(BOOL)clientMessageStream:(id)arg0 shouldEmitMessage:(id)arg1 timestamp:(NSUInteger)arg2 isolatedStreamUUID:(id)arg3 ;
-(id)init;
-(void)sensitiveCondition:(int)arg0 endedAt:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sensitiveCondition:(int)arg0 startedAt:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif