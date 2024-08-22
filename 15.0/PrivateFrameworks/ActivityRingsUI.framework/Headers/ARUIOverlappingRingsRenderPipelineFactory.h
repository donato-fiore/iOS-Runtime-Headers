// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUIOVERLAPPINGRINGSRENDERPIPELINEFACTORY_H
#define ARUIOVERLAPPINGRINGSRENDERPIPELINEFACTORY_H



#import "ARUIRingsRenderPipelineFactory.h"
#import "ARUIRingsEmptyState.h"
#import "ARUIRingsFillState.h"
#import "ARUIRingsEndCapShadowState.h"
#import "ARUIRingsAlphaReductionState.h"

@interface ARUIOverlappingRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsFillState *_fillState;
    ARUIRingsEndCapShadowState *_endCapShadowState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(id)initWithDeviceSPI:(id)arg0 librarySPI:(id)arg1 ;
-(id)pipelineForConfiguration:(id)arg0 ;


@end


#endif