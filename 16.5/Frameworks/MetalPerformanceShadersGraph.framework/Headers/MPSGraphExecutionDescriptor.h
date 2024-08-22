// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHEXECUTIONDESCRIPTOR_H
#define MPSGRAPHEXECUTIONDESCRIPTOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MPSGraphCompilationDescriptor.h"

@interface MPSGraphExecutionDescriptor : NSObject {
    NSMutableArray *_waitEvents;
    NSMutableArray *_signalEvents;
    NSMutableArray *_anePowerWaitEvents;
}


@property BOOL breakUpMetalEncoders; // ivar: _breakUpMetalEncoders
@property BOOL briefProfilingOpNames; // ivar: _briefProfilingOpNames
@property (copy) MPSGraphCompilationDescriptor *compilationDescriptor; // ivar: _compilationDescriptor
@property (copy) id *completionHandler; // ivar: _completionHandler
@property BOOL enableCommitAndContinue; // ivar: _enableCommitAndContinue
@property BOOL enableProfilingOpNames; // ivar: _enableProfilingOpNames
@property (copy) id *scheduledHandler; // ivar: _scheduledHandler
@property BOOL waitUntilCompleted; // ivar: _waitUntilCompleted


-(id)init;
-(void)signalEvent:(id)arg0 atExecutionEvent:(NSUInteger)arg1 value:(NSUInteger)arg2 ;
-(void)waitForANEPrePowerUpEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)waitForEvent:(id)arg0 value:(NSUInteger)arg1 ;


@end


#endif