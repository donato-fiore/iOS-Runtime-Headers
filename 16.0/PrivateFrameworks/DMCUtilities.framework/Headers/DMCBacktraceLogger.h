// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCBACKTRACELOGGER_H
#define DMCBACKTRACELOGGER_H


#import <Foundation/Foundation.h>


@interface DMCBacktraceLogger : NSObject



+(BOOL)dumpStackshotToPath:(id)arg0 fileName:(id)arg1 ;
+(id)callerOfCurrentMethod;


@end


#endif