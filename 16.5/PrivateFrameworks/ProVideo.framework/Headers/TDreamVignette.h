// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMVIGNETTE_H
#define TDREAMVIGNETTE_H



#import "TDreamProgramWrapper.h"

@interface TDreamVignette : TDreamProgramWrapper {
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
}


@property (nonatomic) CGPoint vignetteCenter; // ivar: _vignetteCenter
@property (nonatomic) TDColor3 vignetteColor; // ivar: _vignetteColor
@property (nonatomic) CGFloat vignetteEnd; // ivar: _vignetteEnd
@property (nonatomic) CGFloat vignetteStart; // ivar: _vignetteStart


-(id)init;
-(void)setUniforms;


@end


#endif