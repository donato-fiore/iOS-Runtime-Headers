// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHEXECUTABLEEXECUTIONDESCRIPTOR_H
#define MPSGRAPHEXECUTABLEEXECUTIONDESCRIPTOR_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphExecutableExecutionDescriptor : NSObject <NSCopying>

 {
    NSMutableArray *_waitEvents;
    NSMutableArray *_signalEvents;
    NSMutableArray *_anePowerWaitEvents;
}


@property BOOL breakUpMetalEncoders; // ivar: _breakUpMetalEncoders
@property BOOL briefProfilingOpNames; // ivar: _briefProfilingOpNames
@property (copy) id *completionGraphHandler; // ivar: _completionGraphHandler
@property (copy) id *completionHandler; // ivar: _completionHandler
@property BOOL enableCommitAndContinue; // ivar: _enableCommitAndContinue
@property BOOL enableProfilingOpNames; // ivar: _enableProfilingOpNames
@property (copy) id *scheduledGraphHandler; // ivar: _scheduledGraphHandler
@property (copy) id *scheduledHandler; // ivar: _scheduledHandler
@property BOOL waitUntilCompleted; // ivar: _waitUntilCompleted


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithGraphExecutionDescriptor:(id)arg0 ;
-(void)signalEvent:(id)arg0 atExecutionEvent:(NSUInteger)arg1 value:(NSUInteger)arg2 ;
-(void)waitForANEPrePowerUpEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)waitForEvent:(id)arg0 value:(NSUInteger)arg1 ;


@end


#endif