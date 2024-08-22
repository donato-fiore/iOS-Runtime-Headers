// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HOMOGRAPHYWARPSTAGE_H
#define HOMOGRAPHYWARPSTAGE_H


#import <Foundation/Foundation.h>

#import "FigMetalContext.h"

@interface HomographyWarpStage : NSObject {
    FigMetalContext *_metal;
}




+(int)prewarmShaders:(id)arg0 ;
-(id)initHomographyWarpStage:(id)arg0 ;
-(int)runWarpUsingTransform:(struct ? )arg0 inputLumaTex:(id)arg1 inputChromaTex:(id)arg2 outputLumaTex:(id)arg3 outputChromaTex:(id)arg4 ;


@end


#endif