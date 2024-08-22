// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUICOUNTDOWNRINGSRENDERPIPELINEFACTORY_H
#define ARUICOUNTDOWNRINGSRENDERPIPELINEFACTORY_H



#import "ARUIRingsRenderPipelineFactory.h"
#import "ARUIRingsEmptyState.h"
#import "ARUIRingsCountdownState.h"
#import "ARUIRingsAlphaReductionState.h"

@interface ARUICountdownRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsCountdownState *_countdownState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}




-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(id)initWithDeviceSPI:(id)arg0 librarySPI:(id)arg1 ;
-(id)pipelineForConfiguration:(id)arg0 ;


@end


#endif