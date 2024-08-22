// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISMAINTHREADINVOCATIONRECORDER_H
#define ISMAINTHREADINVOCATIONRECORDER_H



#import "ISInvocationRecorder.h"

@interface ISMainThreadInvocationRecorder : ISInvocationRecorder

@property (nonatomic) BOOL waitUntilDone; // ivar: _waitUntilDone


-(void)invokeInvocation:(id)arg0 ;


@end


#endif