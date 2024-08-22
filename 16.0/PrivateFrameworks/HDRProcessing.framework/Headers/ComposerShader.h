// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMPOSERSHADER_H
#define COMPOSERSHADER_H



#import "ForwardDmShader.h"

@interface ComposerShader : ForwardDmShader {
    BOOL _dolby84;
    BOOL _forLLDovi;
}




+(id)createShaderWithName:(id)arg0 dolby84:(BOOL)arg1 forLLDovi:(BOOL)arg2 ;
-(id)getComputePipeLineStateForDevice:(id)arg0 Library:(id)arg1 ;
-(id)initShaderWithName:(id)arg0 dolby84:(BOOL)arg1 forLLDovi:(BOOL)arg2 ;


@end


#endif