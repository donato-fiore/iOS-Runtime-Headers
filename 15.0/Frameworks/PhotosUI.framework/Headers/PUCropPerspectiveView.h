// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCROPPERSPECTIVEVIEW_H
#define PUCROPPERSPECTIVEVIEW_H

@class PLImageGeometry, PXImageModulationManager, PXImageLayerModulator, CALayer, CAShapeLayer, NUCropModel, NSString;
@protocol NUMediaViewDelegate, UIGestureRecognizerDelegate, PUCropGestureHandlerDelegate;


#import "PUCropTransformedImageView.h"
#import "PHLivePhotoView.h"
#import "PUCropGestureHandler.h"

@interface PUCropPerspectiveView : PUCropTransformedImageView <NUMediaViewDelegate, UIGestureRecognizerDelegate, PUCropGestureHandlerDelegate>

 {
    PLImageGeometry *_imageGeometry;
    PHLivePhotoView *_livePhotoView;
    PXImageModulationManager *_imageModulationManager;
    PXImageLayerModulator *_imageLayerModulator;
    ? _cachedVideoSeekTime;
    PUCropGestureHandler *_gestureHandler;
    BOOL _muted;
    BOOL _needsLayerTransformUpdate;
    BOOL _layerTransformUpdateAnimated;
    BOOL _needsUpdateLayerTransforms;
    BOOL _needsUpdateLayerTransformsAnimated;
    BOOL _isDebugging;
    CALayer *_imageLayer;
    CALayer *_mediaSuperlayer;
    CALayer *_mediaLayer;
    CALayer *_debugLayer;
    CAShapeLayer *_debugViewRectLayer;
    CAShapeLayer *_debugCropRectLayer;
    CAShapeLayer *_debugQuadLayer;
    NUCropModel *_cropModel;
    CGFloat _lastPitchRadians;
    CGFloat _lastYawRadians;
    CGFloat _lastRollRadians;
    CGFloat _lastImageZoomScale;
    CGVector _lastPanRubberBandOffset;
    CGPoint _lastModelCropCenter;
    CGPoint _lastViewCropCenter;
    CGFloat _lastUICroppingRectToImageScale;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) *CGImage gainMapImage; // ivar: _gainMapImage
@property (nonatomic) float gainMapValue; // ivar: _gainMapValue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect imageCropRect; // ivar: _imageCropRect
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isMuted;
-(CGFloat)_viewScaleWithModelCropRect:(struct CGRect )arg0 ;
-(CGFloat)_zoomScaleForCurrentCropRectAndModelRect;
-(CGFloat)_zoomScaleForModelCropRect:(struct CGRect )arg0 ;
// -(id)_animateValueFromValue:(CGFloat)arg0 toValue:(CGFloat)arg1 interpolation:(id)arg2 completion:(unk)arg3  ;
-(id)cropModel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CATransform3D )_imageOrientationTransform;
-(struct CATransform3D )_imageOrientationTransformWithoutTranslation;
-(struct CGAffineTransform )_modelSpaceToViewSpaceTransformWithModelCropRect:(struct CGRect )arg0 currentViewCropRect:(struct CGRect )arg1 ;
-(struct CGAffineTransform )imageOrientedViewCropTransform;
-(struct CGPoint )imagePointForViewPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_croppingRect;
-(struct CGRect )_fullCropRect;
-(struct CGRect )_modelCropRectUnorientedInUICoords;
-(struct CGRect )imageCropRectForViewRect:(struct CGRect )arg0 ;
-(struct CGRect )imageOrientedViewCropRect:(struct CGRect )arg0 ;
-(struct CGRect )validateViewCropRectAgainstModelCropRect:(struct CGRect )arg0 ;
-(struct CGRect )viewCropRectForImageRect:(struct CGRect )arg0 ;
-(struct CGRect )viewOrientedViewCropRect:(struct CGRect )arg0 ;
-(struct CGSize )_sizeRotatedIfNeeded:(struct CGSize )arg0 ;
-(struct CGSize )masterImageSize;
-(void)_invalidateImageLayerModulator;
-(void)_invalidateImageModulationManager;
-(void)_resetCropRect;
-(void)_setCropModel:(id)arg0 ;
-(void)_setupMediaWithComposition:(id)arg0 ;
-(void)_updateImageModulation;
-(void)dealloc;
-(void)didBeginTrackingWithCropGestureHandler:(id)arg0 ;
-(void)didEndTrackingWithCropGestureHandler:(id)arg0 ;
-(void)didTrackWithCropGestureHandler:(id)arg0 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)handlePinchGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)mediaViewDidFinishRendering:(id)arg0 ;
-(void)setAutoloopComposition:(id)arg0 ;
-(void)setCanvasFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageModulationOptions:(struct ? )arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)setLivePhoto:(id)arg0 ;
-(void)setModelCropRect:(struct CGRect )arg0 viewCropRect:(struct CGRect )arg1 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setNeedsLayerTransformsUpdateAnimated:(BOOL)arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setPitchAngle:(CGFloat)arg0 ;
-(void)setStraightenAngle:(CGFloat)arg0 ;
-(void)setVideoComposition:(id)arg0 withSeekTime:(struct ? )arg1 ;
-(void)setYawAngle:(CGFloat)arg0 ;
-(void)tearDownMediaViewAndLayers;
-(void)updateLayerTransformsAnimated:(BOOL)arg0 ;
-(void)updateLayerTransformsAnimated:(BOOL)arg0 viewCropRect:(struct CGRect )arg1 modelCropRect:(struct CGRect )arg2 ;
-(void)willBeginTrackingWithCropGestureHandler:(id)arg0 ;


@end


#endif