// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDREAMBFBLURPASSTWO_H
#define TDREAMBFBLURPASSTWO_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamBFBlurPassTwo : TDreamProgramWrapperTwoInput {
    int sigmaColorUniform;
    int sigmaUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma
@property (nonatomic) CGFloat sigmaColor; // ivar: _sigmaColor


-(id)init;
-(void)setUniforms;


@end


#endif