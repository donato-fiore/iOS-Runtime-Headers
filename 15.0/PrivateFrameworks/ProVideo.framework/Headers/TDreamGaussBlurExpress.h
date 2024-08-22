// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDREAMGAUSSBLUREXPRESS_H
#define TDREAMGAUSSBLUREXPRESS_H



#import "TDreamProgramWrapper.h"

@interface TDreamGaussBlurExpress : TDreamProgramWrapper {
    float sigmaUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma


-(id)init;
-(void)setUniforms;


@end


#endif