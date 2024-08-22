// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIPERSPECTIVEAUTOCALCULATOR_H
#define PIPERSPECTIVEAUTOCALCULATOR_H

@class NUAutoCalculator, NSString, NSMutableDictionary, CIImage, NSNumber;
@protocol NUTimeBased, PIFaceObservingAutoCalculator;


#import "PIFaceObservationCache.h"

@interface PIPerspectiveAutoCalculator : NUAutoCalculator <NUTimeBased, PIFaceObservingAutoCalculator>



@property CGFloat angleSeedDegreesCCW; // ivar: _angleSeedDegreesCCW
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSMutableDictionary *debugDiagnostics; // ivar: _debugDiagnostics
@property BOOL debugFilesEnabled; // ivar: _debugFilesEnabled
@property (copy) NSString *debugFilesPrefix; // ivar: _debugFilesPrefix
@property (retain, nonatomic) CIImage *debugLineDetectionImage; // ivar: _debugLineDetectionImage
@property (readonly, copy) NSString *description;
@property BOOL disableOnFrontFacingCameraImages; // ivar: _disableOnFrontFacingCameraImages
@property BOOL disableOnPanos; // ivar: _disableOnPanos
@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache; // ivar: _faceObservationCache
@property (readonly) NSUInteger hash;
@property (copy) NSNumber *maxAutoAngle; // ivar: _maxAutoAngle
@property (copy) NSNumber *maxAutoPitch; // ivar: _maxAutoPitch
@property (copy) NSNumber *maxAutoYaw; // ivar: _maxAutoYaw
@property CGFloat maxFaceSize; // ivar: _maxFaceSize
@property CGFloat minimumAngleCorrection; // ivar: _minimumAngleCorrection
@property CGFloat minimumConfidence; // ivar: _minimumConfidence
@property CGFloat minimumPitchCorrection; // ivar: _minimumPitchCorrection
@property CGFloat minimumPitchCorrectionArea; // ivar: _minimumPitchCorrectionArea
@property CGFloat minimumYawCorrection; // ivar: _minimumYawCorrection
@property CGFloat minimumYawCorrectionArea; // ivar: _minimumYawCorrectionArea
@property BOOL shouldRunBuildingCheck; // ivar: _shouldRunBuildingCheck
@property (readonly) Class superclass;
@property (nonatomic) ? time;


+(void)requestVisionCleanUp;
+(void)undoOrientation:(NSInteger)arg0 forPitch:(*CGFloat)arg1 yaw:(*CGFloat)arg2 angle:(*CGFloat)arg3 ;
-(BOOL)canGenerateNewCropRect:(*id)arg0 ;
-(BOOL)hasFrontFacingCameraDimentions:(struct ? )arg0 ;
-(BOOL)isFrontFacingCameraImage:(id)arg0 pixelSize:(struct ? )arg1 ;
-(BOOL)passesBuildingCheck:(*id)arg0 ;
-(BOOL)passesConfidenceCheck:(id)arg0 error:(*id)arg1 ;
-(BOOL)passesFaceCheck:(*id)arg0 ;
-(BOOL)passesImagePropertiesCheck:(*id)arg0 ;
-(BOOL)passesMinimumCorrectionCheck:(id)arg0 error:(*id)arg1 ;
-(float)getSizeOfAllFaces:(id)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)overcaptureImageProperties:(*id)arg0 ;
-(id)perspectiveErrorFromCoreImage:(id)arg0 ;
-(id)primaryImageProperties:(*id)arg0 ;
-(id)wrapAsUnexpectedError:(id)arg0 ;
-(void)addMethodDiagnostics:(id)arg0 details:(id)arg1 ;
-(void)addMethodResultToDiagnostics:(id)arg0 error:(id)arg1 setYawPitchError:(BOOL)arg2 ;
-(void)submit:(id)arg0 ;
-(void)submitVerified:(id)arg0 ;
-(void)writeDebugDiagnosticsToDisk;


@end


#endif