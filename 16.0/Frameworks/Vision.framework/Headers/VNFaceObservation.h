// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNFACEOBSERVATION_H
#define VNFACEOBSERVATION_H

@class NSDictionary, NSData, NSNumber, NSArray;
@protocol VNEntityIdentificationModelObservation;


#import "VNDetectedObjectObservation.h"
#import "VNFaceLandmarks2D.h"
#import "VNFaceLandmarks3D.h"
#import "VNTorsoprint.h"
#import "VNFaceTorsoprint.h"
#import "VNFaceAttributes.h"
#import "VNFaceRegionMap.h"
#import "VNFaceScreenGaze.h"
#import "VNFaceSegments.h"
#import "VNFaceprint.h"
#import "VNFaceGaze.h"
#import "VNRequestSpecifier.h"
#import "VNFaceLegacyFaceCore.h"

@interface VNFaceObservation : VNDetectedObjectObservation <VNEntityIdentificationModelObservation>

 {
    VNFaceLandmarks2D *_cachedLandmarks;
    os_unfair_lock_s _cachedLandmarksLock;
    VNFaceLandmarks2D *_cachedLandmarks65;
    os_unfair_lock_s _cachedLandmarks65Lock;
    VNFaceLandmarks3D *_cachedLandmarks3d;
    os_unfair_lock_s _cachedLandmarks3dLock;
    VNTorsoprint *_torsoprint;
    VNFaceTorsoprint *_faceTorsoprint;
    float _landmarkScore;
    BOOL _isBlinking;
    float _blinkScore;
    NSDictionary *_expressionsAndScores;
    float _faceJunkinessIndex;
    float _faceOrientationIndex;
}


@property (nonatomic) _Geometry2D_rect2D_ alignedBoundingBox; // ivar: _alignedBoundingBox
@property (retain, nonatomic) NSData *alignedMeanShape; // ivar: _alignedMeanShape
@property (nonatomic) float alignedRotationAngle; // ivar: _alignedRotationAngle
@property (readonly) float blinkScore;
@property (readonly, nonatomic, getter=isBoundingBoxAligned) BOOL boundingBoxAligned; // ivar: _boundingBoxAligned
@property (readonly, copy, nonatomic) NSDictionary *expressionsAndConfidence;
@property (readonly, nonatomic) VNFaceAttributes *faceAttributes; // ivar: _faceAttributes
@property (readonly, nonatomic) NSNumber *faceCaptureQuality; // ivar: _faceCaptureQuality
@property (nonatomic) NSUInteger faceId; // ivar: _faceId
@property (nonatomic) float faceIdConfidence; // ivar: _faceIdConfidence
@property (readonly, nonatomic, getter=faceJunkinessIndex) float faceJunkinessIndex;
@property (readonly, nonatomic, getter=faceOrientationIndex) float faceOrientationIndex;
@property (readonly, nonatomic) VNFaceRegionMap *faceRegionMap; // ivar: _faceRegionMap
@property (readonly, nonatomic) VNFaceScreenGaze *faceScreenGaze; // ivar: _faceScreenGaze
@property (readonly, nonatomic) VNFaceSegments *faceSegments; // ivar: _faceSegments
@property (retain, nonatomic) VNFaceTorsoprint *faceTorsoprint;
@property (retain, nonatomic) VNFaceprint *faceprint; // ivar: _faceprint
@property (readonly, nonatomic) VNFaceGaze *gaze; // ivar: _gaze
@property (readonly, nonatomic) NSData *landmarkPoints; // ivar: _landmarkPoints
@property (readonly, nonatomic) NSData *landmarkPoints3d; // ivar: _landmarkPoints3d
@property (readonly, nonatomic) NSData *landmarkPoints65; // ivar: _landmarkPoints65
@property (retain, nonatomic) NSArray *landmarkPrecisionEstimatesPerPoint; // ivar: _landmarkPrecisionEstimatesPerPoint
@property (retain, nonatomic) VNFaceLandmarks2D *landmarks; // ivar: _landmarks
@property (readonly, nonatomic) VNRequestSpecifier *landmarks3DOriginatingRequestSpecifier; // ivar: _landmarks3DOriginatingRequestSpecifier
@property (readonly, nonatomic) VNFaceLandmarks3D *landmarks3d;
@property (readonly, nonatomic) VNFaceLandmarks2D *landmarks65;
@property (nonatomic) NSUInteger landmarksConstellation; // ivar: _landmarksConstellation
@property (readonly, nonatomic) VNRequestSpecifier *landmarksOriginatingRequestSpecifier; // ivar: _landmarksOriginatingRequestSpecifier
@property (readonly, nonatomic) VNFaceLegacyFaceCore *legacyFaceCore; // ivar: _legacyFaceCore
@property (readonly, nonatomic) float nameConfidence;
@property (retain, nonatomic) NSNumber *pitch; // ivar: _pitch
@property (readonly, nonatomic) ? pose;
@property (readonly, nonatomic) NSData *poseData; // ivar: _poseData
@property (readonly, nonatomic) VNRequestSpecifier *poseOriginatingRequestSpecifier; // ivar: _poseOriginatingRequestSpecifier
@property (readonly, nonatomic) ? poseQuaternion;
@property (retain, nonatomic) NSNumber *roll; // ivar: _roll
@property (retain, nonatomic) VNTorsoprint *torsoprint;
@property (readonly, nonatomic) CGRect unalignedBoundingBox; // ivar: _unalignedBoundingBox
@property (retain, nonatomic) NSNumber *yaw; // ivar: _yaw


+(BOOL)_exifOrientationFromFaceRollAngle:(float)arg0 exifOrientation:(*int)arg1 error:(*id)arg2 ;
+(BOOL)computeYawPitchRollFromPoseMatrix:(struct ? )arg0 outputYaw:(*float)arg1 outputPitch:(*float)arg2 outputRoll:(*float)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)faceObservationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 alignedBoundingBox:(struct CGRect )arg2 roll:(id)arg3 yaw:(id)arg4 ;
+(id)faceObservationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 alignedBoundingBox:(struct CGRect )arg2 roll:(id)arg3 yaw:(id)arg4 pitch:(id)arg5 ;
+(id)faceObservationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 andAlignedBoundingBox:(struct CGRect )arg2 ;
+(id)faceObservationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 faceprint:(id)arg2 ;
+(id)faceObservationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 roll:(id)arg2 yaw:(id)arg3 ;
+(id)faceObservationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 roll:(id)arg2 yaw:(id)arg3 pitch:(id)arg4 ;
+(id)faceObservationWithRequestRevision:(NSUInteger)arg0 unalignedBoundingBox:(struct CGRect )arg1 alignedBoundingBox:(struct CGRect )arg2 ;
+(id)observationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 ;
-(BOOL)getComputedRectifyingTransform:(struct CGAffineTransform *)arg0 ;
-(BOOL)getFaceEXIFOrientation:(*int)arg0 error:(*id)arg1 ;
-(BOOL)isBlinking;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRevision1DetectedRectanglesCompatible;
-(NSUInteger)hash;
-(float)landmarkScore;
-(id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:(id)arg0 error:(*id)arg1 ;
-(id)VNPersonsModelFaceprintWithRequestRevision:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)expressionsAndDetections;
-(id)expressionsAndScores;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 ;
-(id)vn_cloneObject;
-(void)_addPointsOfNamedRegion:(id)arg0 inLandmarks:(id)arg1 toPath:(struct CGPath *)arg2 applyingAffineTransform:(struct CGAffineTransform )arg3 ;
-(void)_initLocks;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setExpressionsAndScores:(id)arg0 ;
-(void)setIsBlinking:(BOOL)arg0 ;
-(void)setLandmark3DPointsData:(id)arg0 originatingRequestSpecifier:(id)arg1 ;
-(void)setLandmarkScore:(float)arg0 ;


@end


#endif