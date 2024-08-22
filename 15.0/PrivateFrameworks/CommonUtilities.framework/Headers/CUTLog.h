// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUTLOG_H
#define CUTLOG_H


#import <Foundation/Foundation.h>


@interface CUTLog : NSObject



+(id)checkpointTraceProcess;
+(id)checkpointTraceSystem;
+(id)checkpointTraceThread;
+(id)fileCopier;
+(id)network;
+(id)power;
+(id)utilities;
+(id)weakLink;
+(id)xpc;


@end


#endif