// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCIMAGESUBJECTBASEVIEW_H
#define VKCIMAGESUBJECTBASEVIEW_H

@class NSValue, CALayer, UIImage, CIContext, UIBezierPath, CAPackage;
@protocol OS_dispatch_queue, VKCImageSubjectBaseViewDelegate;


#import "VKCImageBaseOverlayView.h"
#import "VKCImageAnalysisResult.h"
#import "VKCImageSubjectGlowLayer.h"
#import "VKCRemoveBackgroundResult.h"
#import "VKCRemoveBackgroundRequestHandler.h"

@interface VKCImageSubjectBaseView : VKCImageBaseOverlayView

@property (readonly, nonatomic) VKCImageAnalysisResult *analysisResult;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (weak, nonatomic) NSObject<VKCImageSubjectBaseViewDelegate> *baseSubjectDelegate; // ivar: _baseSubjectDelegate
@property (retain, nonatomic) NSValue *burstPoint; // ivar: _burstPoint
@property (retain, nonatomic) CALayer *colorLayer; // ivar: _colorLayer
@property (retain, nonatomic) UIImage *customImageForRemoveBackground; // ivar: _customImageForRemoveBackground
@property (retain, nonatomic) VKCImageSubjectGlowLayer *glowLayer; // ivar: _glowLayer
@property (nonatomic) BOOL glowLayerActive; // ivar: _glowLayerActive
@property (readonly, nonatomic) CGRect imageBounds;
@property (retain, nonatomic) CALayer *imageHighlightLayer; // ivar: _imageHighlightLayer
@property (retain, nonatomic) CALayer *imageHighlightLayerContainer; // ivar: _imageHighlightLayerContainer
@property (retain, nonatomic) CALayer *imageHighlightLayerContainerShadow; // ivar: _imageHighlightLayerContainerShadow
@property (nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (retain, nonatomic) VKCRemoveBackgroundResult *imageRemoveBackgroundResult; // ivar: _imageRemoveBackgroundResult
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL loadImageRequested; // ivar: _loadImageRequested
@property (nonatomic) NSUInteger loadMaskIndex; // ivar: _loadMaskIndex
@property (nonatomic) BOOL loadMaskRequested; // ivar: _loadMaskRequested
@property (retain) CIContext *maskLoadContext; // ivar: _maskLoadContext
@property (nonatomic) CGRect maskNormalizedCropRect; // ivar: _maskNormalizedCropRect
@property (retain, nonatomic) VKCRemoveBackgroundResult *maskRemoveBackgroundResult; // ivar: _maskRemoveBackgroundResult
@property (retain, nonatomic) UIBezierPath *normalizedSubjectPath; // ivar: _normalizedSubjectPath
@property (readonly, nonatomic) CALayer *pulseLayer;
@property (retain, nonatomic) CAPackage *pulsePackage; // ivar: _pulsePackage
@property (retain, nonatomic) VKCRemoveBackgroundRequestHandler *removeBackgroundRequestHandler; // ivar: _removeBackgroundRequestHandler
@property (readonly) BOOL subjectAnalysisInProgress;
@property (readonly, nonatomic) CGRect subjectFrame;
@property (nonatomic) BOOL subjectHighlightFeatureFlagEnabled; // ivar: _subjectHighlightFeatureFlagEnabled
@property (retain, nonatomic) UIImage *subjectImage; // ivar: _subjectImage
@property (nonatomic) *__CVBuffer subjectMaskBuffer; // ivar: _subjectMaskBuffer
@property (nonatomic) CGRect subjectNormalizedCropRect; // ivar: _subjectNormalizedCropRect
@property (readonly, nonatomic) UIBezierPath *subjectPathInBoundsCoordinates;
@property (nonatomic) NSUInteger subjectPathIndex; // ivar: _subjectPathIndex


-(BOOL)subjectExistsAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)loadPulsePackage;
-(struct CGPoint )convertViewPointToImagePixels:(struct CGPoint )arg0 isInImageBounds:(*BOOL)arg1 ;
-(void)beginImageSubjectAnalysisWithDelayIfNecessary;
-(void)configurePulseAnimationWithViewScale:(CGFloat)arg0 ;
-(void)dealloc;
-(void)loadImageSubjectIfNecessaryWithCompletion:(id)arg0 ;
-(void)loadSubjectMaskIfNecessary;
-(void)processPath;
-(void)sendSubjectAnalyticsEventWithEventType:(NSInteger)arg0 interactionType:(NSInteger)arg1 subjectFound:(BOOL)arg2 processingDuration:(CGFloat)arg3 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentsRect:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setRecognitionResult:(id)arg0 ;
-(void)showPulseAnimationWithViewScale:(CGFloat)arg0 ;
-(void)updateForImageBoundsChange;


@end


#endif