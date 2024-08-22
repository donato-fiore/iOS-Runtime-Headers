// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNMTLCOMPUTEPIPELINE_H
#define SCNMTLCOMPUTEPIPELINE_H

@protocol MTLFunction, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface SCNMTLComputePipeline : NSObject

@property (retain, nonatomic) NSObject<MTLFunction> *computeFunction; // ivar: _computeFunction
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *state; // ivar: _state


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif