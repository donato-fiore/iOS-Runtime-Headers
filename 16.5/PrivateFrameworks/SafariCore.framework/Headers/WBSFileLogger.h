// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFILELOGGER_H
#define WBSFILELOGGER_H

@class NSURL, NSOutputStream, NSDate, NSTimer, NSString;
@protocol WBSLogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSFileLogger : NSObject <WBSLogger>

 {
    NSURL *_directoryURL;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_logQueue;
    NSUInteger _maximumLogAgeInDays;
    NSDate *_logStartDate;
    NSTimer *_closeStreamTimer;
    NSString *_logName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)collectLogsInDirectory:(id)arg0 withName:(id)arg1 intoFile:(id)arg2 error:(*id)arg3 ;
-(id)initWithDirectoryURL:(id)arg0 logName:(id)arg1 maximumLogAge:(NSUInteger)arg2 ;
-(void)_closeStream;
-(void)_logMessage:(id)arg0 date:(id)arg1 ;
-(void)_removeOldLogs;
-(void)dealloc;
-(void)logFormat:(id)arg0 ;
-(void)logMessage:(id)arg0 ;
-(void)tearDown;


@end


#endif