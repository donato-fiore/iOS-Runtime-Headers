// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAEFILTERDEFAULTBASE_H
#define PAEFILTERDEFAULTBASE_H

@protocol FxFilter;


#import "PAESharedDefaultBase.h"

@interface PAEFilterDefaultBase : PAESharedDefaultBase <FxFilter>





-(?)getInputBitmap:(?)arg0 withInfo:(?)arg1 atTimeappendHGGraph;
-(?)getInputBitmap:(?)arg0 withInfo:(?)arg1 atTimewithROI;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)getOutputWidth:(*NSUInteger)arg0 height:(*NSUInteger)arg1 withInput:(struct ? )arg2 withInfo:(struct ? )arg3 ;
-(BOOL)renderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(id)getParamAPIWithError:(*id)arg0 ;
-(id)getParamErrorFor:(id)arg0 ;
-(struct HGRef<HGNode> )makePrescaledBlurNode:(struct HGRef<HGNode> )arg0 radius:(float)arg1 withScale:(struct PCVector2<float> )arg2 minInputScale:(float)arg3 maxInputScale:(float)arg4 ;
-(struct HGRef<HGNode> )preScaleDown:(float)arg0 withOutputRadius:(*float)arg1 withOutputScaleFactor:(*float)arg2 withInput:(struct HGRef<HGNode> )arg3 minInputScale:(float)arg4 maxInputScale:(float)arg5 ;
-(struct HGRef<HGNode> )preScaleUp:(float)arg0 withInput:(struct HGRef<HGNode> )arg1 ;


@end


#endif