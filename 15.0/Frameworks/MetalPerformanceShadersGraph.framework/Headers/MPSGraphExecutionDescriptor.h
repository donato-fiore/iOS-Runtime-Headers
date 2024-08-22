// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSGRAPHEXECUTIONDESCRIPTOR_H
#define MPSGRAPHEXECUTIONDESCRIPTOR_H


#import <Foundation/Foundation.h>


@interface MPSGraphExecutionDescriptor : NSObject

@property (copy) id *completionHandler; // ivar: _completionHandler
@property BOOL enableCommitAndContinue; // ivar: _enableCommitAndContinue
@property (copy) id *scheduledHandler; // ivar: _scheduledHandler
@property BOOL waitUntilCompleted; // ivar: _waitUntilCompleted


-(id)init;


@end


#endif