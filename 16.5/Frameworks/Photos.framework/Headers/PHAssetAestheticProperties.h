// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETAESTHETICPROPERTIES_H
#define PHASSETAESTHETICPROPERTIES_H



#import "PHAssetPropertySet.h"

@interface PHAssetAestheticProperties : PHAssetPropertySet

@property (readonly, nonatomic) float failureScore; // ivar: _failureScore
@property (readonly, nonatomic) float harmoniousColorScore; // ivar: _harmoniousColorScore
@property (readonly, nonatomic) float immersivenessScore; // ivar: _immersivenessScore
@property (readonly, nonatomic) float interestingSubjectScore; // ivar: _interestingSubjectScore
@property (readonly, nonatomic) float intrusiveObjectPresenceScore; // ivar: _intrusiveObjectPresenceScore
@property (readonly, nonatomic) float livelyColorScore; // ivar: _livelyColorScore
@property (readonly, nonatomic) float lowLight; // ivar: _lowLight
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
@property (readonly, nonatomic) float wellChosenSubjectScore; // ivar: _wellChosenSubjectScore
@property (readonly, nonatomic) float wellFramedSubjectScore; // ivar: _wellFramedSubjectScore
@property (readonly, nonatomic) float wellTimedShotScore; // ivar: _wellTimedShotScore


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;
-(void)initWithDefaultValues;


@end


#endif