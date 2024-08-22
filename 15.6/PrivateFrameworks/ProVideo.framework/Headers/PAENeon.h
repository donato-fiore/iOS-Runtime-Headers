// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAENEON_H
#define PAENEON_H



#import "PAEFilterDefaultBase.h"

@interface PAENeon : PAEFilterDefaultBase



-(?)dynamicPropertiesAtTimewithError;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInput:(struct ? )arg2 withInfo:(struct ? )arg3 ;
-(BOOL)parameterChanged:(unsigned int)arg0 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGRef<HGNode> )blurNodeWithRadius:(CGFloat)arg0 inputNode:(struct HGRef<HGNode> )arg1 ;
-(struct HGRef<HGNode> )brightnessNodeWithValue:(CGFloat)arg0 inputNode:(struct HGRef<HGNode> )arg1 ;


@end


#endif