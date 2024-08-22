// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPROGRESSCALLCHECKER_H
#define PGPROGRESSCALLCHECKER_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGProgressCallChecker : NSObject {
    CGFloat _timestampOfLastCallToProgress;
    CGFloat _timestampOfLastRecordedCallToProgress;
    NSUInteger _numberOfCallsToProgressSinceLastRecordedCall;
    NSObject<OS_os_log> *_loggingConnection;
    CGFloat _lastProgress;
    BOOL _wasStopped;
}


@property (nonatomic) BOOL reportMemoryUsage; // ivar: _reportMemoryUsage
@property (copy, nonatomic) NSString *taskName; // ivar: _taskName


-(id)initWithTaskName:(id)arg0 ;
-(id)initWithTaskName:(id)arg0 loggingConnection:(id)arg1 ;
-(id)memoryUsage;
-(void)checkCallsWithProgress:(CGFloat)arg0 stop:(BOOL)arg1 ;


@end


#endif