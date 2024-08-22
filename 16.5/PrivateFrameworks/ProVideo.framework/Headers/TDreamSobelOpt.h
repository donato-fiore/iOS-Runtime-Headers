// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDREAMSOBELOPT_H
#define TDREAMSOBELOPT_H



#import "TDreamProgramWrapper.h"

@interface TDreamSobelOpt : TDreamProgramWrapper {
    float offset;
    int offsetUniform;
}




-(id)init;
-(void)setOffset:(*float)arg0 ;
-(void)setUniforms;


@end


#endif