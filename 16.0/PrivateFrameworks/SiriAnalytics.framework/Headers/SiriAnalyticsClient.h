// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSCLIENT_H
#define SIRIANALYTICSCLIENT_H


#import <Foundation/Foundation.h>

#import "SiriAnalyticsClientMessageStream.h"

@interface SiriAnalyticsClient : NSObject

@property (readonly, nonatomic) SiriAnalyticsClientMessageStream *defaultMessageStream; // ivar: _defaultMessageStream


-(BOOL)clientMessageStream:(id)arg0 shouldEmitMessage:(id)arg1 timestamp:(NSUInteger)arg2 isolatedStreamUUID:(id)arg3 ;


@end


#endif