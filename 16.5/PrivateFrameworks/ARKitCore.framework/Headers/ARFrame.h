// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARFRAME_H
#define ARFRAME_H

@class NSArray, NSDate, AVDepthData, NSDictionary, CLLocation, ARDepthData, VLLocalizationDebugInfo;
@protocol NSSecureCoding, NSCopying, MTLTexture;

#import <Foundation/Foundation.h>

#import "ARCamera.h"
#import "ARPointCloud.h"
#import "ARVideoFormat.h"
#import "ARBody2D.h"
#import "ARFaceData.h"
#import "ARGeoTrackingStatus.h"
#import "ARLightEstimate.h"
#import "ARRawSceneUnderstandingData.h"
#import "ARFrameTimingData.h"
#import "ARVLStateData.h"
#import "ARWorldTrackingErrorData.h"
#import "ARLineCloud.h"
#import "ARWorldTrackingState.h"

@interface ARFrame : NSObject <NSSecureCoding, NSCopying>

 {
    NSArray *_cachedHorizontalPlaneAnchors;
    NSArray *_cachedVerticalPlaneAnchors;
    NSUInteger _transformFlags;
}


@property (copy, nonatomic) NSArray *anchors; // ivar: _anchors
@property (retain, nonatomic) NSArray *cachedPointClouds; // ivar: _cachedPointClouds
@property (readonly, copy, nonatomic) ARCamera *camera; // ivar: _camera
@property (readonly, nonatomic) float cameraGrainIntensity; // ivar: _cameraGrainIntensity
@property (readonly, nonatomic) NSObject<MTLTexture> *cameraGrainTexture; // ivar: _cameraGrainTexture
@property (retain, nonatomic) NSDate *captureDate; // ivar: _captureDate
@property (retain, nonatomic) AVDepthData *capturedDepthData; // ivar: _capturedDepthData
@property (nonatomic) CGFloat capturedDepthDataTimestamp; // ivar: _capturedDepthDataTimestamp
@property (nonatomic) *__CVBuffer capturedImage; // ivar: _capturedImage
@property (retain, nonatomic) ARPointCloud *capturedPointCloudData; // ivar: _capturedPointCloudData
@property (readonly, nonatomic) CGFloat currentCaptureTimestamp; // ivar: _currentCaptureTimestamp
@property (retain, nonatomic) ARVideoFormat *currentlyActiveVideoFormat; // ivar: _currentlyActiveVideoFormat
@property (nonatomic) *__CVBuffer depthConfidenceData; // ivar: _depthConfidenceData
@property (nonatomic) *CGImage depthMap; // ivar: _depthMap
@property (nonatomic) *__CVBuffer depthNormalData; // ivar: _depthNormalData
@property (copy, nonatomic) NSArray *detectedBodies; // ivar: _detectedBodies
@property (readonly, nonatomic) ARBody2D *detectedBody;
@property (copy, nonatomic) NSArray *detectedPersonMetadata; // ivar: _detectedPersonMetadata
@property (nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) *__CVBuffer downSampledMattingPixelBuffer; // ivar: _downSampledMattingPixelBuffer
@property (nonatomic) *__CVBuffer estimatedDepthData; // ivar: _estimatedDepthData
@property (nonatomic) CGFloat estimatedLuminance; // ivar: _estimatedLuminance
@property (readonly, nonatomic) NSDictionary *exifData; // ivar: _exifData
@property (retain, nonatomic) ARFaceData *faceData; // ivar: _faceData
@property (retain, nonatomic) ARPointCloud *featurePoints; // ivar: _featurePoints
@property (retain, nonatomic) ARGeoTrackingStatus *geoTrackingStatus; // ivar: _geoTrackingStatus
@property (nonatomic) CGFloat heading; // ivar: _heading
@property (readonly, nonatomic, getter=isHighResolution) BOOL highResolution; // ivar: _highResolution
@property (nonatomic) float imageNoiseIntensity; // ivar: _imageNoiseIntensity
@property (retain, nonatomic) NSObject<MTLTexture> *imageNoiseTexture; // ivar: _imageNoiseTexture
@property (retain, nonatomic) ARLightEstimate *lightEstimate; // ivar: _lightEstimate
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) *__CVBuffer mattingScaleImagePixelBuffer; // ivar: _mattingScaleImagePixelBuffer
@property (copy, nonatomic) NSArray *privateAnchors; // ivar: _privateAnchors
@property (readonly, nonatomic) ARPointCloud *rawFeaturePoints;
@property (nonatomic) CGFloat rawHeading; // ivar: _rawHeading
@property (retain, nonatomic) CLLocation *rawLocation; // ivar: _rawLocation
@property (nonatomic) CGFloat rawLocationTimestamp; // ivar: _rawLocationTimestamp
@property (retain, nonatomic) ARRawSceneUnderstandingData *rawSceneUnderstandingData; // ivar: _rawSceneUnderstandingData
@property (retain, nonatomic) ARPointCloud *referenceFeaturePoints; // ivar: _referenceFeaturePoints
@property (nonatomic) ? referenceOriginDelta; // ivar: _referenceOriginDelta
@property (nonatomic) ? referenceOriginTransform; // ivar: _referenceOriginTransform
@property (nonatomic) NSInteger renderFramesPerSecond; // ivar: _renderFramesPerSecond
@property (copy, nonatomic) NSArray *resultDatas; // ivar: _resultDatas
@property (retain, nonatomic) ARDepthData *sceneDepth; // ivar: _sceneDepth
@property (nonatomic) *__CVBuffer segmentationBuffer; // ivar: _segmentationBuffer
@property (nonatomic) *__CVBuffer semanticSegmentationBuffer; // ivar: _semanticSegmentationBuffer
@property (nonatomic) ? sessionOriginTransform; // ivar: _sessionOriginTransform
@property (nonatomic) BOOL shouldRestrictFrameRate; // ivar: _shouldRestrictFrameRate
@property (retain, nonatomic) ARDepthData *smoothedSceneDepth; // ivar: _smoothedSceneDepth
@property (readonly, nonatomic) NSDictionary *tiffData; // ivar: _tiffData
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) ARFrameTimingData *timingData; // ivar: _timingData
@property (nonatomic) CGFloat undulation; // ivar: _undulation
@property (retain, nonatomic) VLLocalizationDebugInfo *vlDebugInfo; // ivar: _vlDebugInfo
@property (retain, nonatomic) ARVLStateData *vlState; // ivar: _vlState
@property (nonatomic) NSInteger worldAlignment; // ivar: _worldAlignment
@property (nonatomic) ? worldAlignmentTransform; // ivar: _worldAlignmentTransform
@property (nonatomic) NSInteger worldMappingStatus; // ivar: _worldMappingStatus
@property (retain, nonatomic) ARWorldTrackingErrorData *worldTrackingErrorData; // ivar: _worldTrackingErrorData
@property (retain, nonatomic) ARLineCloud *worldTrackingLineCloud; // ivar: _worldTrackingLineCloud
@property (retain, nonatomic) ARWorldTrackingState *worldTrackingState; // ivar: _worldTrackingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)referenceOriginChanged;
-(BOOL)useHittestRaycasting;
-(NSUInteger)hash;
-(id)_hitTestEstimatedPlanesFromOrigin:(NSInteger)arg0 withDirectionplaneAlignment;
-(id)_hitTestFromOrigin:(NSInteger)arg0 withDirection:(id)arg1 planeAlignment:(struct ? )arg2 forPlanesreferenceOriginTransform;
-(id)_hitTestFromOrigin:(NSUInteger)arg0 withDirectiontypes;
-(id)_horizontalPlaneEstimateFromFeaturePointfromOriginwithDirection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 types:(NSUInteger)arg1 ;
-(id)initWithCamera:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(id)raycastQueryFromPoint:(struct CGPoint )arg0 allowingTarget:(NSInteger)arg1 alignment:(NSInteger)arg2 ;
-(id)transformPointToNDCSpace;
-(struct ? )gravityAlignedReferenceOriginTransform;
-(struct CGAffineTransform )displayTransformForOrientation:(NSInteger)arg0 viewportSize:(struct CGSize )arg1 ;
-(void)_updatePredicted:(BOOL)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPredictedTimestamp:(CGFloat)arg0 ;
-(void)setReferenceOriginChanged:(BOOL)arg0 ;


@end


#endif