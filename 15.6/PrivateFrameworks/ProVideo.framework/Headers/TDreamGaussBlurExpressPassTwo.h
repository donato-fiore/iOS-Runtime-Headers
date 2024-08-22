// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMGAUSSBLUREXPRESSPASSTWO_H
#define TDREAMGAUSSBLUREXPRESSPASSTWO_H



#import "TDreamProgramWrapper.h"

@interface TDreamGaussBlurExpressPassTwo : TDreamProgramWrapper {
    float sigmaUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma


-(id)init;
-(void)setUniforms;


@end


#endif