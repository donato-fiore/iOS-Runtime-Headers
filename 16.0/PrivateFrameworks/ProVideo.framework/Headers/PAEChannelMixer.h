// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAECHANNELMIXER_H
#define PAECHANNELMIXER_H



#import "PAEFilterDefaultBase.h"

@interface PAEChannelMixer : PAEFilterDefaultBase



-(?)constrainMonoParamsatTime;
-(?)getRed:(?)arg0 green:(?)arg1 blue:(?)arg2 alpha:(?)arg3 fromParamatFxTime;
-(?)monochromeChanged;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;


@end


#endif