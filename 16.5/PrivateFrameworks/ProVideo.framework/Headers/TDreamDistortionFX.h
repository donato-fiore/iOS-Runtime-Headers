// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMDISTORTIONFX_H
#define TDREAMDISTORTIONFX_H



#import "TDreamProgramWrapper.h"

@interface TDreamDistortionFX : TDreamProgramWrapper {
    int centerUniform;
    int modeUniform;
    float adjustUniform;
}


@property (nonatomic) CGPoint center; // ivar: _center
@property (nonatomic) float fine; // ivar: _fine
@property (nonatomic) int mode; // ivar: _mode


-(id)init;
-(void)setUniforms;


@end


#endif