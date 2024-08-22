// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSISTANTSIRIANALYTICS_H
#define ASSISTANTSIRIANALYTICS_H



#import "SiriAnalyticsClient.h"

@interface AssistantSiriAnalytics : SiriAnalyticsClient {
    BOOL _isInternalInstall;
}




+(id)derivedIdentifierForComponent:(int)arg0 fromSourceIdentifier:(id)arg1 ;
+(id)sharedAnalytics;
+(id)sharedStream;
+(void)derivedIdentifierForComponent:(int)arg0 fromSourceIdentifier:(id)arg1 completion:(id)arg2 ;
-(BOOL)clientMessageStream:(id)arg0 shouldEmitMessage:(id)arg1 timestamp:(NSUInteger)arg2 isolatedStreamUUID:(id)arg3 ;
-(id)init;


@end


#endif