// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDSPLUNKLOGGER_H
#define AMDSPLUNKLOGGER_H


#import <Foundation/Foundation.h>


@interface AMDSplunkLogger : NSObject



+(BOOL)checkSchemaValidity:(id)arg0 ;
+(id)logEvents:(id)arg0 toTopic:(id)arg1 withSchema:(id)arg2 ;
+(id)logPayload:(id)arg0 error:(*id)arg1 ;
+(void)flushEvents:(id)arg0 ;


@end


#endif