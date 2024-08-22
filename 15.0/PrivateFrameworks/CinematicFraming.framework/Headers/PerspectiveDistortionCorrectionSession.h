// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PERSPECTIVEDISTORTIONCORRECTIONSESSION_H
#define PERSPECTIVEDISTORTIONCORRECTIONSESSION_H



#import "FrameUndistortionSession.h"

@interface PerspectiveDistortionCorrectionSession : FrameUndistortionSession {
    float _stereographicFisheyeF;
    float _stereographicFisheyeMaxStrength;
}




-(BOOL)_pointInFramingSpaceLandscapeLeftIsValid:(struct CGRect )arg0 withDisplayRect;
-(float)_fisheyeStrengthForDisplayRect:(struct CGRect )arg0 ;
-(float)_getHeightDerivativeForWidth:(float)arg0 widthDerivative:(float)arg1 outputAspectRatioInDeviceOrientation:(float)arg2 ;
-(float)_getHeightForWidth:(float)arg0 outputAspectRatioInDeviceOrientation:(float)arg1 ;
-(float)_getWidthForHeight:(float)arg0 outputAspectRatioInDeviceOrientation:(float)arg1 ;
-(id)_outputPlaneSizeForDisplayRect;
-(id)_projectPointInFramingSpaceLandscapeLefttoDisplayRectInFramingSpaceLandscapeLeft;
-(id)_searchEarliestValidPointOnIntervalWithStartandEnddisplayRect;
-(id)init;
-(struct ? )_rotationMatrixForDisplayRect:(struct CGRect )arg0 ;
-(struct CGRect )_adjustDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect )arg0 ;
-(struct CGRect )_framingSpaceBoundsLandscapeLeft;
-(struct CGRect )_moveDisplayRectToFitInFramingSpaceLandscapeLeft:(struct CGRect )arg0 ;
-(struct CGRect )_projectRectInFramingSpaceLandscapeLeft:(struct CGRect )arg0 toDisplayRectInFramingSpaceLandscapeLeft:(struct CGRect )arg1 ;
-(struct CGRect )_warpRectInInputImageCoordinatesToFramingSpaceInLandscapeLeft:(struct CGRect )arg0 calibrationParameters:(struct ? )arg1 ;
-(struct CGSize )_scaleDisplayRectSizeToFit:(struct CGSize )arg0 ;
-(struct CGSize )_searchValidSizeForStartSize:(struct CGSize )arg0 invalidPoint;
-(void)_setShaderParametersForRotationNormalizedDisplayRect:(struct CGRect )arg0 gidToNormalizedOutput:(struct ? )arg1 calibrationParameters:(id)arg2 commandEncoder;


@end


#endif