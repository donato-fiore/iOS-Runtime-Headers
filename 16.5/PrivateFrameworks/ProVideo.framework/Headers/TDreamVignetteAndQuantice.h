// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMVIGNETTEANDQUANTICE_H
#define TDREAMVIGNETTEANDQUANTICE_H



#import "TDreamProgramWrapper.h"

@interface TDreamVignetteAndQuantice : TDreamProgramWrapper {
    int modeUniform;
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
    int numLevelsUniform;
    int recipNumLevelsUniform;
    float numLevels;
    float recipNumLevels;
}


@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) CGPoint vignetteCenter; // ivar: _vignetteCenter
@property (nonatomic) TDColor3 vignetteColor; // ivar: _vignetteColor
@property (nonatomic) CGFloat vignetteEnd; // ivar: _vignetteEnd
@property (nonatomic) CGFloat vignetteStart; // ivar: _vignetteStart


-(id)init;
-(void)setNumLevels:(unsigned int)arg0 ;
-(void)setUniforms;


@end


#endif