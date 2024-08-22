// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCOMPOSITORPIPELINE_H
#define AVTCOMPOSITORPIPELINE_H

@class NSArray;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface AVTCompositorPipeline : NSObject {
    BOOL _isAffectedBySkin;
    NSUInteger _affectingComponentsMask;
    NSArray *_bindings;
    id<MTLComputePipelineState> *_pipelineState;
}




-(id)initWithFunction:(id)arg0 ;
// -(void)compositeTexture:(id)arg0 forMemoji:(id)arg1 considerSkin:(BOOL)arg2 componentsToConsider:(NSUInteger)arg3 computeCommandHandler:(id)arg4 blitCommandHandler:(unk)arg5 helper:(id)arg6 helperTokens:(unk)arg7  ;


@end


#endif