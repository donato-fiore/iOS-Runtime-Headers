// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOMPOSITORPIPELINE_H
#define AVTCOMPOSITORPIPELINE_H

@class NSArray;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface AVTCompositorPipeline : NSObject {
    BOOL _isAffectedBySkin;
    BOOL _shouldCompositeAgainDueToGPUError;
    NSUInteger _affectingComponentsMask;
    NSArray *_bindings;
    id<MTLComputePipelineState> *_pipelineState;
}




-(id)initWithFunction:(id)arg0 ;
// -(void)compositeTexture:(id)arg0 forMemoji:(id)arg1 considerSkin:(BOOL)arg2 componentsToConsider:(NSUInteger)arg3 computeCommandHandler:(id)arg4 blitCommandHandler:(unk)arg5 completionHandler:(id)arg6 helper:(unk)arg7 helperTokens:(id)arg8  ;


@end


#endif