// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COCONDITIONTASK_H
#define COCONDITIONTASK_H

@class NSArray, NSString, NSFileHandle, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface COConditionTask : NSObject

@property (retain, nonatomic) NSArray *arguments; // ivar: _arguments
@property (nonatomic) int endStatus; // ivar: _endStatus
@property (nonatomic) CGFloat executionTime; // ivar: _executionTime
@property (copy, nonatomic) NSString *launchPath; // ivar: _launchPath
@property (nonatomic) int processIdentifier; // ivar: _processIdentifier
@property BOOL running; // ivar: _running
@property (nonatomic) BOOL slowTimeout; // ivar: _slowTimeout
@property (retain, nonatomic) NSFileHandle *stderrFileHandle; // ivar: _stderrFileHandle
@property (retain, nonatomic) NSString *stderrFname; // ivar: _stderrFname
@property (retain, nonatomic) NSFileHandle *stdinFileHandle; // ivar: _stdinFileHandle
@property (retain, nonatomic) NSString *stdinFname; // ivar: _stdinFname
@property (retain, nonatomic) NSFileHandle *stdoutFileHandle; // ivar: _stdoutFileHandle
@property (retain, nonatomic) NSString *stdoutFname; // ivar: _stdoutFname
@property (retain, nonatomic) NSMutableArray *taskFileHandleArray; // ivar: _taskFileHandleArray
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // ivar: _taskQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *termination_sem; // ivar: _termination_sem


-(BOOL)launchTask:(*id)arg0 ;
-(BOOL)resume;
-(BOOL)start;
-(BOOL)suspend;
-(BOOL)waitForTaskWithTimeout:(unsigned int)arg0 ;
-(id)description;
-(id)initWithCommand:(id)arg0 arguments:(id)arg1 ;
-(id)stderrFromResults;
-(id)stdoutFromResults;
-(int)signalRunningTask:(int)arg0 ;
-(void)interrupt;
-(void)stop;
-(void)stopTask;
-(void)terminate;
-(void)waitForExitInformation:(int)arg0 ;


@end


#endif