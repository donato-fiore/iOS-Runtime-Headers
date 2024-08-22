// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMEDGESOPT_H
#define TDREAMEDGESOPT_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamEdgesOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize;
    int oneOverSizeUniform;
    int radioUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma


-(id)init;
-(void)setOneOverSize:(*float)arg0 ;
-(void)setUniforms;


@end


#endif