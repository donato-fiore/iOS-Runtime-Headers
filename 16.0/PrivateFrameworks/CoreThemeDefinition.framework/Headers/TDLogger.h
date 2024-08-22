// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDLOGGER_H
#define TDLOGGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TDLogger : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    int _verbosity;
    int _logMaxVerbosity;
}


@property (nonatomic) int verbosity;


+(id)defaultLogger;
+(id)logger;
-(BOOL)isVerbosityLogErrorsOnly;
-(BOOL)isVerbosityLogEverything;
-(BOOL)isVerbosityLogWarningsAndErrors;
-(id)init;
-(void)dealloc;
-(void)logError:(id)arg0 ;
-(void)logErrorWithFormat:(id)arg0 ;
-(void)logExtra:(id)arg0 ;
-(void)logExtraWithFormat:(id)arg0 ;
-(void)logInfo:(id)arg0 ;
-(void)logInfoWithFormat:(id)arg0 ;
-(void)logMessage:(id)arg0 whenVerbosity:(int)arg1 ;
-(void)logWarning:(id)arg0 ;
-(void)logWarningWithFormat:(id)arg0 ;
-(void)waitForLoggingToComplete;


@end


#endif