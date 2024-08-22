// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGCOMPUTEPIPELINESTATE_H
#define MTLDEBUGCOMPUTEPIPELINESTATE_H

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;
@protocol MTLFunction;


#import "MTLToolsComputePipelineState.h"

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState {
    NSUInteger _maxThreadPositionInGrid;
    NSUInteger _maxThreadsPerGrid;
    NSUInteger _maxThreadPositionInThreadgroup;
    NSUInteger _maxThreadIndexInThreadgroup;
    NSUInteger _maxThreadsPerThreadgroup;
    NSUInteger _maxThreadgroupPositionInGrid;
    NSUInteger _maxThreadgroupsPerGrid;
    NSUInteger _maxStageInGridSize;
    NSUInteger _maxStageInGridOrigin;
}


@property (readonly, nonatomic) MTLComputePipelineDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) NSObject<MTLFunction> *function; // ivar: _function
@property (readonly, nonatomic) MTLComputePipelineReflection *reflection; // ivar: _reflection


-(BOOL)isAncestorOf:(id)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)functionHandleToDebugFunctionHandle:(id)arg0 parentFunction:(id)arg1 ;
-(id)functionHandleWithFunction:(id)arg0 ;
-(id)getParameter:(id)arg0 ;
-(id)initWithComputePipelineState:(id)arg0 reflection:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg0 ;
-(id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg0 error:(*id)arg1 ;
-(id)newIntersectionFunctionTableWithDescriptor:(id)arg0 ;
-(id)newVisibleFunctionTableWithDescriptor:(id)arg0 ;
-(void)dealloc;
-(void)validateHandleForSetFunction:(id)arg0 ;


@end


#endif