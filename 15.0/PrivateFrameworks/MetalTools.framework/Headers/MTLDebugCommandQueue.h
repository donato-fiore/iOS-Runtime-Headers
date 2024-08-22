// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGCOMMANDQUEUE_H
#define MTLDEBUGCOMMANDQUEUE_H



#import "MTLToolsCommandQueue.h"

@interface MTLDebugCommandQueue : MTLToolsCommandQueue



-(id)commandBuffer;
-(id)commandBufferWithDescriptor:(id)arg0 ;
-(id)commandBufferWithUnretainedReferences;
-(void)insertDebugCaptureBoundary;


@end


#endif