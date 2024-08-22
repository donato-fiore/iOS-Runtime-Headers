// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEGLOW_H
#define PAEGLOW_H



#import "PAEFilterDefaultBase.h"

@interface PAEGlow : PAEFilterDefaultBase



-(?)dynamicPropertiesAtTimewithError;
-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInput:(struct ? )arg2 withInfo:(struct ? )arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGRef<HGNode> )get360BlurNode:(struct HGRef<HGNode> )arg0 withInputImage:(id)arg1 outputImage:(id)arg2 blurRadius:(CGFloat)arg3 blurScale:(struct PCVector2<double> )arg4 ;
-(struct HGRef<HGNode> )getBlurNode:(struct HGRef<HGNode> )arg0 withInputImage:(id)arg1 outputImage:(id)arg2 blurRadius:(CGFloat)arg3 blurScale:(struct PCVector2<double> )arg4 is360:(BOOL)arg5 ;
-(struct HGRef<HGNode> )getPlanarBlurNode:(struct HGRef<HGNode> )arg0 withInputImage:(id)arg1 outputImage:(id)arg2 blurRadius:(CGFloat)arg3 blurScale:(struct PCVector2<double> )arg4 ;
-(void)dealloc;


@end


#endif