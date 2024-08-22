// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMEDGES_H
#define TDREAMEDGES_H



#import "TDreamProgramWrapperTwoInput.h"

@interface TDreamEdges : TDreamProgramWrapperTwoInput {
    int passUniform;
    int radioUniform;
    int thresholdUniform;
    int preThresholdUniform;
    int modeUniform;
}


@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) CGFloat preThreshold; // ivar: _preThreshold
@property (nonatomic) CGFloat sigma; // ivar: _sigma
@property (nonatomic) CGFloat threshold; // ivar: _threshold


-(id)init;
-(void)setUniforms;


@end


#endif