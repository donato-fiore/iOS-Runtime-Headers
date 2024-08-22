// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PERSPECTIVEDISTORTIONCORRECTIONSESSION_H
#define PERSPECTIVEDISTORTIONCORRECTIONSESSION_H



#import "FrameUndistortionSession.h"

@interface PerspectiveDistortionCorrectionSession : FrameUndistortionSession {
    ? _rotationMatrix;
    CGRect _outputPlaneRect;
    float _stereographicFisheyeF;
    float _stereographicFisheyeMaxStrength;
    float _fisheyeStrength;
    float _pitch;
    float _pitchRefinement;
    BOOL _pitchInGimbalLockRange;
    float _roll;
    BOOL _constrainRollUpdate;
    ? _toneMappingControls;
}




-(BOOL)_gravityVectorIsValid;
-(BOOL)_pointInFramingSpaceLandscapeLeftIsValid;
-(BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(struct CGRect )arg0 withDisplayRect;
-(BOOL)imageTransformIsValid;
-(float)_fisheyeStrengthForDisplayRect:(struct CGRect )arg0 ;
-(float)_getHeightDerivativeForWidth:(float)arg0 widthDerivative:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2 ;
-(float)_getHeightForWidth:(float)arg0 outputAspectRatioInDeviceOrientation:(float)arg1 ;
-(float)_getWidthForHeight:(float)arg0 outputAspectRatioInDeviceOrientation:(float)arg1 ;
-(id)_outputPlaneSizeForDisplayRect;
-(id)_projectPointInFramingSpaceLandscapeLefttoDisplayRectInFramingSpaceLandscapeLeft;
-(id)_searchEarliestValidPointOnIntervalWithStartandEnddisplayRect;
-(id)initWithOutputDimensions:(struct ? )arg0 mode:(int)arg1 portType:(id)arg2 ;
-(id)projectPointToFramingSpaceLandscapeLeft;
-(id)projectPointToInputImageCoordinates;
-(int)_outputPlaneCcwRotations;
-(struct ? )_rotationMatrixForDisplayRect:(struct CGRect )arg0 ;
-(struct ? )backProjectedFramingSpaceViewport;
-(struct ? )normalizedFramingSpaceLandscapeLeftToInputImageTransformMatrix;
-(struct ? )projectRectInFramingSpaceLandscapeLeftToInputImageCoordinates:(struct CGRect )arg0 ;
-(struct ? )projectRectInInputImageToFramingSpaceLandscapeLeftCoordinates:(struct CGRect )arg0 ;
-(struct CGRect )_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect )arg0 ;
-(struct CGRect )_framingSpaceBoundsLandscapeLeft;
-(struct CGRect )_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect )arg0 ;
-(struct CGRect )_outputPlaneRectForDisplayRect:(struct CGRect )arg0 ;
-(struct CGRect )_projectRectInFramingSpaceLandscapeLeft:(struct CGRect )arg0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect )arg1 ;
-(struct CGRect )_scalePlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect )arg0 ;
-(struct CGRect )_shiftOutputPlaneToFitInFramingSpaceLandscapeLeft:(struct CGRect )arg0 ;
-(struct CGRect )_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect )arg0 calibrationParameters:(struct ? )arg1 ;
-(struct CGSize )_scaleDisplayRectSizeToFit:(struct CGSize )arg0 ;
-(struct CGSize )_searchValidSizeForStartSize:(struct CGSize )arg0 invalidPoint;
-(unsigned int)cameraOrientationToExifOrientation:(int)arg0 ;
-(void)_constrainedRollUpdate:(float)arg0 ;
-(void)_setShaderParametersForRotationNormalizedDisplayRect:(struct CGRect )arg0 gidToNormalizedOutput:(struct ? )arg1 calibrationParameters:(id)arg2 commandEncoder;
-(void)_updatePitchAndRoll;


@end


#endif