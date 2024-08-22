// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGESETTESTLOCK_H
#define MCMXPCMESSAGESETTESTLOCK_H

@protocol MCMParametersSetTestLock;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageSetTestLock : MCMXPCMessageBase <MCMParametersSetTestLock>



@property (readonly, nonatomic) BOOL enable; // ivar: _enable
@property (readonly, nonatomic) NSUInteger requestedLocks; // ivar: _requestedLocks


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif