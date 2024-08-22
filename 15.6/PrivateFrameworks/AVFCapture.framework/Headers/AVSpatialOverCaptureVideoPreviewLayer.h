// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSPATIALOVERCAPTUREVIDEOPREVIEWLAYER_H
#define AVSPATIALOVERCAPTUREVIDEOPREVIEWLAYER_H

@class CALayer, NSArray;


#import "AVCaptureVideoPreviewLayer.h"

@interface AVSpatialOverCaptureVideoPreviewLayer : AVCaptureVideoPreviewLayer {
    os_unfair_lock_s _primaryCaptureRectLock;
    CGPoint _primaryCaptureRectCenterPoint;
    CGFloat _primaryCaptureRectAspectRatio;
    NSInteger _primaryCaptureRectUniqueID;
    BOOL _havePendingPrimaryCaptureRectChange;
    BOOL _primaryAndOverCaptureCompositingEnabled;
    NSInteger _overCaptureStatus;
    BOOL _isPresentationLayer;
    BOOL _automaticallyDimsOverCaptureRegion;
    CALayer *_topDimmingOverlay;
    CALayer *_bottomDimmingOverlay;
    CGFloat _lastAspectCenterUpdateTime;
    BOOL _semanticStyleRenderingSupported;
    BOOL _semanticStyleRenderingEnabled;
    NSArray *_semanticStyles;
    NSArray *_semanticStylesRegions;
    NSUInteger _maxSemanticStyles;
}


@property (nonatomic) BOOL automaticallyDimsOverCaptureRegion;
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) CGRect overCaptureRect; // ivar: _overCaptureRect
@property (readonly, nonatomic) NSInteger overCaptureStatus;
@property (nonatomic, getter=isPrimaryAndOverCaptureCompositingEnabled) BOOL primaryAndOverCaptureCompositingEnabled;
@property (readonly, nonatomic) CGRect primaryCaptureRect; // ivar: _primaryCaptureRect
@property (readonly, nonatomic) CGFloat primaryCaptureRectAspectRatio;
@property (readonly, nonatomic) CGPoint primaryCaptureRectCenterPoint;


+(NSInteger)uniqueID;
-(BOOL)isSemanticStyleRenderingEnabled;
-(BOOL)isSemanticStyleRenderingSupported;
-(BOOL)performContentUpdates:(id)arg0 ;
-(NSInteger)maxSemanticStyles;
-(id)_initWithSession:(id)arg0 makeConnection:(BOOL)arg1 ;
-(id)addConnection:(id)arg0 error:(*id)arg1 ;
-(id)initWithLayer:(id)arg0 ;
-(id)semanticStyle;
-(id)semanticStyles;
-(id)semanticStylesRegions;
-(struct CGAffineTransform )captureDeviceTransformForSensorSize:(struct CGSize )arg0 previewSize:(struct CGSize )arg1 sensorToPreviewVTScalingMode:(id)arg2 ;
-(void)_handleSpatialNotification:(id)arg0 payload:(id)arg1 ;
-(void)_updateSemanticStyleRenderingSupported;
-(void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)dealloc;
-(void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0 ;
-(void)didUpdatePreviewImageQueueSlot:(unsigned int)arg0 imageQueue:(id)arg1 rotationDegrees:(CGFloat)arg2 size:(struct CGSize )arg3 ;
-(void)getPrimaryCaptureRectCenter:(struct CGPoint *)arg0 aspectRatio:(*CGFloat)arg1 uniqueID:(*NSInteger)arg2 ;
-(void)layoutSublayers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeConnection:(id)arg0 ;
-(void)setSemanticStyle:(id)arg0 animated:(BOOL)arg1 ;
-(void)setSemanticStyleRenderingEnabled:(BOOL)arg0 ;
-(void)setSemanticStyles:(id)arg0 semanticStylesRegions:(id)arg1 ;


@end


#endif