// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMSTROKEANDBLEND_H
#define TDREAMSTROKEANDBLEND_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamStrokeAndBlend : TDreamProgramWrapperTwoInput {
    int sigmaUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma


-(id)init;
-(void)setUniforms;


@end


#endif