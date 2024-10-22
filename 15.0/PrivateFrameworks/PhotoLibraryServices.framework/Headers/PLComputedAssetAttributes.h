// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCOMPUTEDASSETATTRIBUTES_H
#define PLCOMPUTEDASSETATTRIBUTES_H



#import "PLManagedObject.h"
#import "PLManagedAsset.h"

@interface PLComputedAssetAttributes : PLManagedObject

@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) float behavioralScore;
@property (nonatomic) float failureScore;
@property (nonatomic) float harmoniousColorScore;
@property (nonatomic) float immersivenessScore;
@property (nonatomic) float interactionScore;
@property (nonatomic) float interestingSubjectScore;
@property (nonatomic) float intrusiveObjectPresenceScore;
@property (nonatomic) float livelyColorScore;
@property (nonatomic) float lowLight;
@property (nonatomic) float noiseScore;
@property (nonatomic) float pleasantCameraTiltScore;
@property (nonatomic) float pleasantCompositionScore;
@property (nonatomic) float pleasantLightingScore;
@property (nonatomic) float pleasantPatternScore;
@property (nonatomic) float pleasantPerspectiveScore;
@property (nonatomic) float pleasantPostProcessingScore;
@property (nonatomic) float pleasantReflectionsScore;
@property (nonatomic) float pleasantSymmetryScore;
@property (nonatomic) float sharplyFocusedSubjectScore;
@property (nonatomic) float tastefullyBlurredScore;
@property (nonatomic) float wellChosenSubjectScore;
@property (nonatomic) float wellFramedSubjectScore;
@property (nonatomic) float wellTimedShotScore;


+(id)entityName;
+(id)fetchRequest;
-(void)setPropertiesFromImageAestheticsObservation:(id)arg0 ;


@end


#endif