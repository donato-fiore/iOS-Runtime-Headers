// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APSLOG_H
#define APSLOG_H


#import <Foundation/Foundation.h>


@interface APSLog : NSObject



+(BOOL)shouldPowerLogEvent:(id)arg0 ;
+(id)PUSHTRACE;
+(id)alert;
+(id)certificate;
+(id)connection;
+(id)connectionServer;
+(id)courier;
+(id)courierOversized;
+(id)daemon;
+(id)database;
+(id)main;
+(id)networking;
+(id)nonce;
+(id)preference;
+(id)pubSub;
+(id)pushHistory;
+(id)stream;
+(id)taskManager;
+(id)telemetry;
+(id)topicManager;
+(id)topicManagerOversized;
+(id)ttlCollection;
+(id)xpc;


@end


#endif