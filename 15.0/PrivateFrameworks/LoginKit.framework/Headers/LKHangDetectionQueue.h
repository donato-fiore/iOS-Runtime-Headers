// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKHANGDETECTIONQUEUE_H
#define LKHANGDETECTIONQUEUE_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LKBacktraceLogger.h"

@interface LKHangDetectionQueue : NSObject

@property (retain, nonatomic) LKBacktraceLogger *backtraceLogger; // ivar: _backtraceLogger
@property (copy, nonatomic) NSArray *lastPrintedCallStack; // ivar: _lastPrintedCallStack
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // ivar: _logQueue
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // ivar: _workerQueue


-(id)init;
-(id)initWithQoS:(unsigned int)arg0 hangThreshold:(CGFloat)arg1 ;
-(void)queueBlock:(id)arg0 ;


@end


#endif