// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWLANDMARKSINFERENCECONFIGURATION_H
#define BWLANDMARKSINFERENCECONFIGURATION_H

@class NSNumber;


#import "BWVisionInferenceConfiguration.h"

@interface BWLandmarksInferenceConfiguration : BWVisionInferenceConfiguration

@property (nonatomic) BOOL alwaysExecuteForRedEyeReduction; // ivar: _alwaysExecuteForRedEyeReduction
@property (retain, nonatomic) NSNumber *cascadeStepCount; // ivar: _cascadeStepCount
@property (nonatomic) BOOL clampToLargestMaximumNumberOfFaces; // ivar: _clampToLargestMaximumNumberOfFaces
@property (nonatomic) BOOL considerISPRectsIfVisionFails; // ivar: _considerISPRectsIfVisionFails
@property (nonatomic) NSUInteger constellationPointCount; // ivar: _constellationPointCount
@property (nonatomic) BOOL detectLandmarksInFullSizeInput; // ivar: _detectLandmarksInFullSizeInput
@property (nonatomic) BOOL detectsBlinking; // ivar: _detectsBlinking
@property (nonatomic) ? landmarksInferenceVersion; // ivar: _landmarksInferenceVersion
@property (nonatomic) NSUInteger maximumNumberOfFaces; // ivar: _maximumNumberOfFaces
@property (nonatomic) BOOL refinesLeftEyeLandmarks; // ivar: _refinesLeftEyeLandmarks
@property (nonatomic) BOOL refinesMouthLandmarks; // ivar: _refinesMouthLandmarks
@property (nonatomic) BOOL refinesRightEyeLandmarks; // ivar: _refinesRightEyeLandmarks


+(BOOL)isPortraitPrewarmingRequired;
+(NSUInteger)portraitMaximumNumberOfFaces;
+(id)configuration;
+(void)initialize;
-(id)initWithInferenceType:(int)arg0 ;
-(void)dealloc;


@end


#endif