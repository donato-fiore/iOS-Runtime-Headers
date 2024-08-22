// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMBFBLURPASSONE_H
#define TDREAMBFBLURPASSONE_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamBFBlurPassOne : TDreamProgramWrapperTwoInput {
    int sigmaColorUniform;
    int sigmaUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma
@property (nonatomic) CGFloat sigmaColor; // ivar: _sigmaColor


-(id)init;
-(void)setUniforms;


@end


#endif