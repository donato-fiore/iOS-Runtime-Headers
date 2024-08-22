// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAESHAREDDEFAULTBASE_H
#define PAESHAREDDEFAULTBASE_H

@protocol PROAPIAccessing;

#import <Foundation/Foundation.h>


@interface PAESharedDefaultBase : NSObject {
    id<PROAPIAccessing> *_apiManager;
    BOOL _upscalesFields;
    BOOL _hostIsFinalCutPro;
    BOOL _hostIsVertigo;
}




-(?)frameFromFxTimeforPlugIn;
-(?)fxTime:(?)arg0 fromFrameforPlugIn;
-(?)getHeliumImage:(?)arg0 layerOffsetX:(?)arg1 layerOffsetY:(?)arg2 requestInfo:(?)arg3 fromParmatTime;
-(?)getHeliumImage:(?)arg0 source:(?)arg1 withInfoatTime;
-(?)getPoint:(?)arg0 fromParm:(?)arg1 atTimewithImage;
-(?)getRenderMode;
-(?)secondsFromFxTime;
-(BOOL)addParameters;
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(struct ? )arg0 inputInfo:(struct ? )arg1 hardware:(*BOOL)arg2 software:(*BOOL)arg3 ;
-(BOOL)getCropRectFromImage:(id)arg0 toImage:(id)arg1 output:(*void)arg2 ;
-(BOOL)smear:(struct HGRef<HGNode> )arg0 fromImage:(id)arg1 toImage:(id)arg2 resultNode:(*void)arg3 ;
-(BOOL)variesOverTime;
-(CGFloat)frameRate;
-(CGFloat)relativeShutterForAngle:(CGFloat)arg0 ;
-(float)getBlendingGamma;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(struct HGRef<HGNode> )changeDOD:(struct HGRef<HGNode> )arg0 withRect:(*void)arg1 ;
-(struct HGRef<HGNode> )cropFromImage:(id)arg0 toImage:(id)arg1 ;
-(struct HGRef<HGNode> )smear:(struct HGRef<HGNode> )arg0 fromImage:(id)arg1 toImage:(id)arg2 ;
-(struct HGRef<HGNode> )transformFromImage:(id)arg0 toImage:(id)arg1 fit:(BOOL)arg2 ;
-(struct PCMatrix44Tmpl<double> )getInversePixelTransformForImage:(id)arg0 ;
-(struct PCMatrix44Tmpl<double> )getPixelTransformForImage:(id)arg0 ;
-(struct PCRect<float> )getCropRectFromImage:(id)arg0 toImage:(id)arg1 ;
-(struct PCRect<float> )getImageBoundary:(id)arg0 ;
-(struct PCVector2<double> )convertRelativeToImageCoordinates:(*void)arg0 withImage:(id)arg1 ;
-(struct PCVector2<double> )convertRelativeToPixelCoordinates:(*void)arg0 withImage:(id)arg1 ;
-(struct PCVector2<double> )getScaleForImage:(id)arg0 ;
-(void)crop:(*void)arg0 fromImage:(id)arg1 toImage:(id)arg2 ;
-(void)crop:(*void)arg0 withRect:(struct PCRect<float> )arg1 ;
-(void)dealloc;
-(void)overrideFrameSetupForRenderMode:(struct ? )arg0 hardware:(*BOOL)arg1 software:(*BOOL)arg2 ;
-(void)transform:(*void)arg0 fromImage:(id)arg1 toImage:(id)arg2 fit:(BOOL)arg3 ;


@end


#endif