// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOGGERFILE_H
#define WFLOGGERFILE_H

@class NSNumber;
@protocol OS_dispatch_source;


#import "WFLoggerBase.h"

@interface WFLoggerFile : WFLoggerBase {
    NSObject<OS_dispatch_source> *_loggingTimer;
    unsigned char _loggingTimerStarted;
    *__CFRunLoop _runLoopRef;
    *__CFString _runLoopMode;
    unsigned char _classC;
    NSNumber *_logLifespanInDays;
    NSUInteger _privacy;
    NSUInteger _level;
    *__CFString _logFilePath;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned char _isFileLoggingEnabled;
    *__sFILE _filePtr;
    *__CFDate _fileCreationDate;
    *__CFDateFormatter _dateFormatter;
    *__CFString _presetFilePath;
    *__CFString _directoryPath;
    *__CFString _fileNamePrefix;
    NSUInteger _maxFileSizeInBytes;
    NSUInteger _timerInterval;
    NSUInteger _fileAgeOutInterval;
}


@property (readonly, getter=getLogDirPath) *__CFString logDirPath;
@property (readonly, getter=getLogFileNamePrefix) *__CFString logFileNamePrefix;
@property (readonly, getter=getLogFilePath) *__CFString logFilePath;


-(NSUInteger)getLogLevelEnable;
-(NSUInteger)getLogLevelPersist;
-(NSUInteger)getLogPrivacy;
-(NSUInteger)getMaxFileSizeInMB;
-(id)getLogLifespanInDays;
-(id)initWithDirectoryPath:(id)arg0 dirPath:(struct __CFString *)arg1 fileNamePrefix:(struct __CFString *)arg2 runLoopRef:(struct __CFRunLoop *)arg3 runLoopMode:(struct __CFString *)arg4 classC:(unsigned char)arg5 dateFormatter:(struct __CFDateFormatter *)arg6 maxFileSizeInMB:(NSUInteger)arg7 logLifespanInDays:(NSUInteger)arg8 dispatchQueue:(id)arg9 ;
-(id)initWithFilePath:(id)arg0 filePath:(struct __CFString *)arg1 runLoopRef:(struct __CFRunLoop *)arg2 runLoopMode:(struct __CFString *)arg3 classC:(unsigned char)arg4 dateFormatter:(struct __CFDateFormatter *)arg5 maxFileSizeInMB:(NSUInteger)arg6 logLifespanInDays:(NSUInteger)arg7 dispatchQueue:(id)arg8 ;
-(id)mapLogLevelEnum:(NSUInteger)arg0 ;
-(struct __CFString *)changeLogFile:(unsigned char)arg0 ;
-(struct __CFString *)createDateString;
-(struct __CFString *)generateLogFileName;
-(unsigned char)checkLogFileUpdate:(struct __CFString *)arg0 ;
-(unsigned char)doesLogFileExist:(struct __CFString *)arg0 ;
-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 cfStrMsg:(struct __CFString *)arg2 ;
-(void)WFLog:(NSUInteger)arg0 privacy:(NSUInteger)arg1 message:(char *)arg2 valist:(char *)arg3 ;
-(void)cleanStaleLogs;
-(void)createLogFile:(struct __CFString *)arg0 fileClassC:(unsigned char)arg1 ;
-(void)dealloc;
-(void)init:(id)arg0 runLoopRef:(struct __CFRunLoop *)arg1 runLoopMode:(struct __CFString *)arg2 classC:(unsigned char)arg3 dateFormatter:(struct __CFDateFormatter *)arg4 maxFileSizeInMB:(NSUInteger)arg5 logLifespanInDays:(NSUInteger)arg6 ;
-(void)removeLogFile:(char *)arg0 maxAge:(CGFloat)arg1 ;
-(void)removeLogFilesFromDir:(char *)arg0 ;
-(void)rotateLogFile:(struct __CFString *)arg0 ;
-(void)schedule:(unsigned char)arg0 ;
-(void)setLogLevelEnable:(NSUInteger)arg0 ;
-(void)setLogLevelPersist:(NSUInteger)arg0 ;
-(void)setLogLifespanInDays:(id)arg0 ;
-(void)setLogPrivacy:(NSUInteger)arg0 ;
-(void)setMaxFileSizeInMB:(NSUInteger)arg0 ;
-(void)startWatchingLogFile;
-(void)stopWatchingLogFile;
-(void)writeToFile:(NSUInteger)arg0 cfStrMsg:(struct __CFString *)arg1 ;


@end


#endif