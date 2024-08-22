// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLINDIRECTCOMPUTECOMMAND_H
#define _MTLINDIRECTCOMPUTECOMMAND_H

@class NSString;
@protocol MTLIndirectComputeCommandSPI;

#import <Foundation/Foundation.h>


@interface _MTLIndirectComputeCommand : NSObject <MTLIndirectComputeCommandSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)getKernelBufferAtIndex:(NSUInteger)arg0 ;
-(BOOL)hasBarrier;
-(NSUInteger)getCommandType;
-(NSUInteger)getOptimizedStatus;
-(NSUInteger)getPipelineStateUniqueIdentifier;
-(NSUInteger)getThreadgroupMemoryLengthAtIndex:(NSUInteger)arg0 ;
-(id)dispatchThreadgroupsArguments;
-(id)dispatchThreadsArguments;
-(id)getImageBlockSize;
-(struct ? )getStageInRegion;
-(void)clearBarrier;
-(void)concurrentDispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)concurrentDispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)reset;
-(void)setBarrier;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setImageblockWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)setKernelArgument:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setKernelBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setStageInRegion:(struct ? )arg0 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif