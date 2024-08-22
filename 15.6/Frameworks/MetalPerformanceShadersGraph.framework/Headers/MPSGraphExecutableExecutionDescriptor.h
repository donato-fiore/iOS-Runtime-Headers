// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHEXECUTABLEEXECUTIONDESCRIPTOR_H
#define MPSGRAPHEXECUTABLEEXECUTIONDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSGraphExecutableExecutionDescriptor : NSObject

@property BOOL breakUpMetalEncoders; // ivar: _breakUpMetalEncoders
@property (copy) id *completionHandler; // ivar: _completionHandler
@property BOOL enableCommitAndContinue; // ivar: _enableCommitAndContinue
@property BOOL enableProfilingOpNames; // ivar: _enableProfilingOpNames
@property (copy) id *scheduledHandler; // ivar: _scheduledHandler
@property BOOL waitUntilCompleted; // ivar: _waitUntilCompleted


-(id)init;


@end


#endif