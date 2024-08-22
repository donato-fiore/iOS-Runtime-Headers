// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMBFBLURPASSONEOPT_H
#define TDREAMBFBLURPASSONEOPT_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamBFBlurPassOneOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize;
    int oneOverSizeUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma
@property (nonatomic) CGFloat sigmaColor; // ivar: _sigmaColor


-(id)init;
-(void)setOneOverSize:(*float)arg0 ;
-(void)setUniforms;


@end


#endif