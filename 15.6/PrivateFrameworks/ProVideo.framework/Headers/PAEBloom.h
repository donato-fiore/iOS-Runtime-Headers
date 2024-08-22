// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAEBLOOM_H
#define PAEBLOOM_H



#import "PAEFilterDefaultBase.h"

@interface PAEBloom : PAEFilterDefaultBase



-(?)dynamicPropertiesAtTimewithError;
-(BOOL)addParameters;
-(BOOL)bloomHeliumRender:(id)arg0 withInput:(id)arg1 withRadius:(CGFloat)arg2 withBrightness:(CGFloat)arg3 withThreshold:(CGFloat)arg4 doDarkBloom:(BOOL)arg5 withXScale:(CGFloat)arg6 withYScale:(CGFloat)arg7 withDoCrop:(BOOL)arg8 withDoClip:(BOOL)arg9 is360:(BOOL)arg10 withInfo:(struct ? )arg11 ;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInput:(struct ? )arg2 withInfo:(struct ? )arg3 ;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;


@end


#endif