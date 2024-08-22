// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSIOCOMMANDQUEUE_H
#define MTLTOOLSIOCOMMANDQUEUE_H

@class NSString;
@protocol MTLIOCommandQueueSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsIOCommandQueue : MTLToolsObject <MTLIOCommandQueueSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger globalTraceObjectID;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)barrier;
-(void)dealloc;
-(void)enqueueBarrier;


@end


#endif