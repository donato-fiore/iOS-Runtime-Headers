// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAETILE_H
#define PAETILE_H



#import "PAEFilterDefaultBase.h"

@interface PAETile : PAEFilterDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGRef<HGNode> )transformAndTile:(struct HGRef<HGNode> )arg0 withXValue:(CGFloat)arg1 YValue:(CGFloat)arg2 skew:(CGFloat)arg3 scale:(CGFloat)arg4 stretch:(CGFloat)arg5 rotation:(CGFloat)arg6 resolution:(struct PCVector2<double> )arg7 inputImage:(id)arg8 ;
-(void)_compute_2x2_matrix:(*float)arg0 withScale:(float)arg1 angle:(float)arg2 skew:(float)arg3 stretch:(float)arg4 ;
-(void)getEdgeMode:(*unsigned int)arg0 withInfo:(struct ? )arg1 ;
-(void)retrieveXValue:(*CGFloat)arg0 YValue:(*CGFloat)arg1 skew:(*CGFloat)arg2 scale:(*CGFloat)arg3 stretch:(*CGFloat)arg4 rotation:(*CGFloat)arg5 forOutputImage:(id)arg6 withRenderInfo:(struct ? )arg7 ;


@end


#endif