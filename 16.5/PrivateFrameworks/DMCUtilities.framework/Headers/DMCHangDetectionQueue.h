// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCHANGDETECTIONQUEUE_H
#define DMCHANGDETECTIONQUEUE_H

@class NSString, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DMCBacktraceLogger.h"

@interface DMCHangDetectionQueue : NSObject

@property (retain, nonatomic) DMCBacktraceLogger *backtraceLogger; // ivar: _backtraceLogger
@property (nonatomic) uint8_t blockNum; // ivar: _blockNum
@property (nonatomic) int lastExecutedJob; // ivar: _lastExecutedJob
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // ivar: _logQueue
@property (retain, nonatomic) DMCBacktraceLogger *logger; // ivar: _logger
@property (copy, nonatomic) NSString *owner; // ivar: _owner
@property (nonatomic) BOOL shouldDumpStackshot; // ivar: _shouldDumpStackshot
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (nonatomic) BOOL verboseLogEnabled; // ivar: _verboseLogEnabled
@property (retain, nonatomic) NSOperationQueue *workerQueue; // ivar: _workerQueue


-(id)init;
-(id)initWithQoS:(NSInteger)arg0 hangThreshold:(CGFloat)arg1 owner:(id)arg2 ;
-(void)queueBlock:(id)arg0 ;
-(void)waitUntilAllBlocksAreFinished;


@end


#endif