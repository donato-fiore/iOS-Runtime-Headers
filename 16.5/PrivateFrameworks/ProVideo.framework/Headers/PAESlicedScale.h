// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAESLICEDSCALE_H
#define PAESLICEDSCALE_H



#import "PAEFilterDefaultBase.h"

@interface PAESlicedScale : PAEFilterDefaultBase



-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)getOutputBounds:(struct CGRect *)arg0 withInputBounds:(struct CGRect )arg1 withInputInfo:(struct ? )arg2 withRenderInfo:(struct ? )arg3 ;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)additionalObjectDownScale:(*void)arg0 objectScale:(struct PCVector2<double> )arg1 innerScale:(struct PCVector2<double> )arg2 xLeft:(CGFloat)arg3 xRight:(CGFloat)arg4 yTop:(CGFloat)arg5 yBottom:(CGFloat)arg6 ;
-(void)calculateBounds:(struct CGRect *)arg0 fromOrigin:(struct PCVector2<double> )arg1 mode:(int)arg2 inputSize:(struct PCVector2<double> )arg3 ignoreOffsets:(BOOL)arg4 xLeft:(CGFloat)arg5 xRight:(CGFloat)arg6 yBottom:(CGFloat)arg7 yTop:(CGFloat)arg8 objectScale:(struct PCVector2<double> )arg9 offset:(struct PCVector2<double> )arg10 ;
-(void)innerScaleFromObjectScale:(struct PCVector2<double> )arg0 innerScale:(*void)arg1 xLeft:(CGFloat)arg2 xRight:(CGFloat)arg3 yTop:(CGFloat)arg4 yBottom:(CGFloat)arg5 inputSize:(struct PCVector2<double> )arg6 newObjectSize:(*void)arg7 mode:(int)arg8 ;
-(void)wholeTileExpandLeftScale:(*CGFloat)arg0 expandRightScale:(*CGFloat)arg1 expandBottomScale:(*CGFloat)arg2 expandTopScale:(*CGFloat)arg3 objectScale:(*void)arg4 xLeft:(CGFloat)arg5 xRight:(CGFloat)arg6 yBottom:(CGFloat)arg7 yTop:(CGFloat)arg8 ;


@end


#endif