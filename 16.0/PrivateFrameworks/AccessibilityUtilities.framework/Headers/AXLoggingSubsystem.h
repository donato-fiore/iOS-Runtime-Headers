// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLOGGINGSUBSYSTEM_H
#define AXLOGGINGSUBSYSTEM_H


#import <Foundation/Foundation.h>


@interface AXLoggingSubsystem : NSObject {
    BOOL _ignoreLogging;
}


@property (nonatomic) BOOL ignoreLogging;


+(BOOL)shouldIncludeBacktraceInLogs;
+(BOOL)shouldIncludeFileLineAndFunctionInLogs;
+(BOOL)shouldProcessMessageForLogs;
+(BOOL)willLog;
+(BOOL)willLogDebug;
+(BOOL)willLogInfo;
+(CGFloat)threshold;
+(id)_errorWithMessage:(id)arg0 underlyingError:(id)arg1 ;
+(id)errorWithDescription:(id)arg0 ;
+(id)identifier;
+(id)sharedInstance;
+(id)subsystems;
+(id)wrapError:(id)arg0 description:(id)arg1 ;
+(int)defaultLogLevel;
+(void)initialize;
+(void)initializeSubsytem;


@end


#endif