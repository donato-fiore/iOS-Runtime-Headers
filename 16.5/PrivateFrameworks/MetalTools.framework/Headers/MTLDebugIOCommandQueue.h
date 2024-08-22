// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGIOCOMMANDQUEUE_H
#define MTLDEBUGIOCOMMANDQUEUE_H



#import "MTLToolsIOCommandQueue.h"

@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue



-(NSUInteger)globalTraceObjectID;
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(void)barrier;


@end


#endif