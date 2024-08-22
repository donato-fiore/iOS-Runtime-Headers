// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREVIDEOPREVIEWLAYER_H
#define AVCAPTUREVIDEOPREVIEWLAYER_H

@class CALayer, NSString;


#import "AVCaptureVideoPreviewLayerInternal.h"
#import "AVCaptureConnection.h"
#import "AVCaptureSession.h"

@interface AVCaptureVideoPreviewLayer : CALayer {
    AVCaptureVideoPreviewLayerInternal *_internal;
}


@property (nonatomic) BOOL automaticallyAdjustsMirroring;
@property (readonly, nonatomic) AVCaptureConnection *connection;
@property (nonatomic, getter=isMirrored) BOOL mirrored;
@property (readonly, nonatomic, getter=isMirroringSupported) BOOL mirroringSupported;
@property (nonatomic) NSInteger orientation;
@property (readonly, nonatomic, getter=isOrientationSupported) BOOL orientationSupported;
@property (readonly, nonatomic, getter=isPreviewing) BOOL previewing;
@property (retain, nonatomic) AVCaptureSession *session;
@property (copy) NSString *videoGravity;


+(id)layerWithSession:(id)arg0 ;
+(id)layerWithSessionWithNoConnection:(id)arg0 ;
+(void)initialize;
-(BOOL)_filtersAreOptimized:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_setVideoPreviewFilters:(id)arg0 checkForExceptionalInput:(BOOL)arg1 exceptionReason:(*id)arg2 ;
-(BOOL)canAddConnection:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(BOOL)isDepthDataDeliverySupported;
-(BOOL)isFilterRenderingEnabled;
-(BOOL)isPaused;
-(BOOL)isSemanticStyleRenderingEnabled;
-(BOOL)isSemanticStyleRenderingSupported;
-(BOOL)isUnoptimizedFilterRenderingEnabled;
-(CGFloat)previewRotationDegrees;
-(id)_initWithSession:(id)arg0 makeConnection:(BOOL)arg1 ;
-(id)_input;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithLayer:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(id)initWithSessionWithNoConnection:(id)arg0 ;
-(id)semanticStyle;
-(id)sinkID;
-(id)transformedMetadataObjectForMetadataObject:(id)arg0 ;
-(id)videoPreviewFilters;
-(id)weakReference;
-(int)changeSeed;
-(struct CGAffineTransform )captureDeviceTransformForSensorSize:(struct CGSize )arg0 previewSize:(struct CGSize )arg1 sensorToPreviewVTScalingMode:(id)arg2 ;
-(struct CGPoint )captureDevicePointOfInterestForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointForCaptureDevicePointOfInterest:(struct CGPoint )arg0 ;
-(struct CGRect )metadataOutputRectOfInterestForRect:(struct CGRect )arg0 ;
-(struct CGRect )rectForMetadataOutputRectOfInterest:(struct CGRect )arg0 ;
-(unsigned int)imageQueueSlot;
-(void)_handleNotification:(id)arg0 payload:(id)arg1 ;
-(void)_setPortraitLightingEffectStrengthFromDeviceInput;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_setSimulatedApertureFromDeviceInput;
-(void)_updateCaptureDeviceTransform;
-(void)_updateDepthDataDeliverySupported;
-(void)_updatePreviewTransforms;
-(void)_updateSemanticStyleRenderingSupported;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)bumpChangeSeed;
-(void)centerSublayer:(NSInteger)arg0 ;
-(void)dealloc;
-(void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)didUpdatePreviewFormatDescription:(struct opaqueCMFormatDescription *)arg0 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned int)arg0 imageQueue:(id)arg1 rotationDegrees:(CGFloat)arg2 size:(struct CGSize )arg3 ;
-(void)handleChangedActiveFormat:(id)arg0 forDevice:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(id)arg0 ;
-(void)removeConnection:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCaptureDeviceTransformNeedsUpdate;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg0 ;
-(void)setFilterRenderingEnabled:(BOOL)arg0 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)setSemanticStyle:(id)arg0 animated:(BOOL)arg1 ;
-(void)setSemanticStyleRenderingEnabled:(BOOL)arg0 ;
-(void)setSinkID:(id)arg0 ;
-(void)setUnoptimizedFilterRenderingEnabled:(BOOL)arg0 ;
-(void)setVideoPreviewFilters:(id)arg0 ;


@end


#endif