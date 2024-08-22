// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGEOPERATIONDELETE_H
#define MCMXPCMESSAGEOPERATIONDELETE_H

@protocol MCMParametersOperationDelete;


#import "MCMXPCMessageWithConcreteContainersArrayBase.h"

@interface MCMXPCMessageOperationDelete : MCMXPCMessageWithConcreteContainersArrayBase <MCMParametersOperationDelete>



@property (readonly, nonatomic) BOOL traverseLinks; // ivar: _traverseLinks
@property (readonly, nonatomic) BOOL waitForDiskSpaceReclaim; // ivar: _waitForDiskSpaceReclaim


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif