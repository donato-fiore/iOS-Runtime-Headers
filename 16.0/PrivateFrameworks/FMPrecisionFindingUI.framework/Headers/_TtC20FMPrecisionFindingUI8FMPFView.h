// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC20FMPRECISIONFINDINGUI8FMPFVIEW_H
#define _TTC20FMPRECISIONFINDINGUI8FMPFVIEW_H

@class UIView, NSString;
@protocol ARSessionDelegate, ARSCNViewDelegate;



@interface _TtC20FMPrecisionFindingUI8FMPFView : UIView <ARSessionDelegate, ARSCNViewDelegate>

 {
    ? style;
    ? config;
    ? experienceType;
    ? skSceneView;
    ? ringView;
    ? scnSceneView;
    ? backdropRGBAColorSprings;
    ? backdropRGBAColorSpringsIntensity;
    ? backdropSigmaSpring;
    ? backdropAlphaSpring;
    ? skScene;
    ? lastAskedRadiusFactor;
    ? lastAskedSprungRadiusFactor;
    ? useGreenBackdropBlurAndOpacity;
    ? videoHelpers;
    ? metalDevice;
    ? metalTextureCache;
    ? metalCommandQueue;
    ? metalBGRABackdropMixerPipelineState;
    ? metalBGRABackdropMixerParameters;
    ? metalProcessingQueue;
    ? metalBGRATextures;
    ? metalBGRANextTextureIndex;
    ? metalHasLoggedSetup;
    ? locationManager;
    ? ecoModeObservation;
    ? cameraGimbalNode;
    ? delegate;
    ? lastThermalState;
    ? sceneIsRunning;
    ? isConvergingBackdropShown;
}


@property (nonatomic, readonly) NSString *description;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)renderer:(id)arg0 didAddNode:(id)arg1 forAnchor:(id)arg2 ;
-(void)renderer:(id)arg0 didRemoveNode:(id)arg1 forAnchor:(id)arg2 ;
-(void)renderer:(id)arg0 didRenderScene:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)renderer:(id)arg0 didUpdateNode:(id)arg1 forAnchor:(id)arg2 ;
-(void)renderer:(id)arg0 updateAtTime:(CGFloat)arg1 ;
-(void)renderer:(id)arg0 willRenderScene:(id)arg1 atTime:(CGFloat)arg2 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)thermalStateDidChangeWithNotification:(id)arg0 ;


@end


#endif