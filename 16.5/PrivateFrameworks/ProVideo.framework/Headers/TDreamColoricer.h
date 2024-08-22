// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMCOLORICER_H
#define TDREAMCOLORICER_H



#import "TDreamProgramWrapper.h"

@interface TDreamColoricer : TDreamProgramWrapper {
    int firstColorUniform;
    int secondColorUniform;
}


@property (nonatomic) TDColor3 firstColor; // ivar: _firstColor
@property (nonatomic) TDColor3 secondColor; // ivar: _secondColor


-(id)init;
-(void)setUniforms;


@end


#endif