// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMGAUSSBLUREXPRESSOPT9_H
#define TDREAMGAUSSBLUREXPRESSOPT9_H



#import "TDreamProgramWrapper.h"

@interface TDreamGaussBlurExpressOpt9 : TDreamProgramWrapper {
    float kernel;
    int kernelUniform;
    float offsets;
    int offsetsUniform;
}




-(id)init;
-(void)setKernel:(*CGFloat)arg0 ;
-(void)setOffsets:(*CGFloat)arg0 ;
-(void)setUniforms;


@end


#endif