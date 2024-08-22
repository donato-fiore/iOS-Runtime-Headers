// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNIMAGEAESTHETICSOBSERVATION_H
#define VNIMAGEAESTHETICSOBSERVATION_H



#import "VNObservation.h"

@interface VNImageAestheticsObservation : VNObservation

@property (readonly, nonatomic) float aestheticScore; // ivar: _aestheticScore
@property (readonly, nonatomic) float failureScore; // ivar: _failureScore
@property (readonly, nonatomic) float harmoniousColorScore; // ivar: _harmoniousColorScore
@property (readonly, nonatomic) float immersivenessScore; // ivar: _immersivenessScore
@property (readonly, nonatomic) float interestingSubjectScore; // ivar: _interestingSubjectScore
@property (readonly, nonatomic) float intrusiveObjectPresenceScore; // ivar: _intrusiveObjectPresenceScore
@property (readonly, nonatomic) float livelyColorScore; // ivar: _livelyColorScore
@property (readonly, nonatomic) float lowKeyLightingScore; // ivar: _lowKeyLightingScore
@property (readonly, nonatomic) float noiseScore; // ivar: _noiseScore
@property (readonly, nonatomic) float pleasantCameraTiltScore; // ivar: _pleasantCameraTiltScore
@property (readonly, nonatomic) float pleasantCompositionScore; // ivar: _pleasantCompositionScore
@property (readonly, nonatomic) float pleasantLightingScore; // ivar: _pleasantLightingScore
@property (readonly, nonatomic) float pleasantPatternScore; // ivar: _pleasantPatternScore
@property (readonly, nonatomic) float pleasantPerspectiveScore; // ivar: _pleasantPerspectiveScore
@property (readonly, nonatomic) float pleasantPostProcessingScore; // ivar: _pleasantPostProcessingScore
@property (readonly, nonatomic) float pleasantReflectionsScore; // ivar: _pleasantReflectionsScore
@property (readonly, nonatomic) float pleasantSymmetryScore; // ivar: _pleasantSymmetryScore
@property (readonly, nonatomic) float sharplyFocusedSubjectScore; // ivar: _sharplyFocusedSubjectScore
@property (readonly, nonatomic) float tastefullyBlurredScore; // ivar: _tastefullyBlurredScore
@property (readonly, nonatomic) float wellChosenBackgroundScore; // ivar: _wellChosenBackgroundScore
@property (readonly, nonatomic) float wellChosenSubjectScore;
@property (readonly, nonatomic) float wellFramedSubjectScore; // ivar: _wellFramedSubjectScore
@property (readonly, nonatomic) float wellTimedShotScore; // ivar: _wellTimedShotScore


+(BOOL)supportsSecureCoding;
+(id)allScorePropertyNames;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(id)_scoresDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 overallAestheticScore:(float)arg1 wellFramedSubjectScore:(float)arg2 wellChosenBackgroundScore:(float)arg3 tastefullyBlurredScore:(float)arg4 sharplyFocusedSubjectScore:(float)arg5 wellTimedShotScore:(float)arg6 pleasantLightingScore:(float)arg7 pleasantReflectionsScore:(float)arg8 harmoniousColorScore:(float)arg9 livelyColorScore:(float)arg10 pleasantSymmetryScore:(float)arg11 pleasantPatternScore:(float)arg12 immersivenessScore:(float)arg13 pleasantPerspectiveScore:(float)arg14 pleasantPostProcessingScore:(float)arg15 noiseScore:(float)arg16 failureScore:(float)arg17 pleasantCompositionScore:(float)arg18 interestingSubjectScore:(float)arg19 intrusiveObjectPresenceScore:(float)arg20 pleasantCameraTiltScore:(float)arg21 lowKeyLightingScore:(float)arg22 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif