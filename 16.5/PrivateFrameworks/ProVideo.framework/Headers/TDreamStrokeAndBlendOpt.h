// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMSTROKEANDBLENDOPT_H
#define TDREAMSTROKEANDBLENDOPT_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamStrokeAndBlendOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize;
    int oneOverSizeUniform;
}




-(id)init;
-(void)setOneOverSize:(*float)arg0 ;
-(void)setUniforms;


@end


#endif