// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMQUANTICEOPT_H
#define TDREAMQUANTICEOPT_H



#import "TDreamProgramWrapper.h"

@interface TDreamQuanticeOpt : TDreamProgramWrapper {
    float numLevels;
    float numLevelsRecip;
    int levelsUniform;
    int recipLevelsUniform;
}




-(id)init;
-(void)setNumLevels:(unsigned int)arg0 ;
-(void)setUniforms;


@end


#endif