// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWFACESEGMENTSWITHLANDMARKSINFERENCECONFIGURATION_H
#define BWFACESEGMENTSWITHLANDMARKSINFERENCECONFIGURATION_H



#import "BWLandmarksInferenceConfiguration.h"

@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration

@property (nonatomic) BOOL detectFacesInFullSizeInput; // ivar: _detectFacesInFullSizeInput
@property (nonatomic) BOOL includesInvalidContent; // ivar: _includesInvalidContent
@property (nonatomic) BOOL skipFaceLandmarkDetection; // ivar: _skipFaceLandmarkDetection
@property (nonatomic) BOOL skipFoodAndDrinkDetection; // ivar: _skipFoodAndDrinkDetection
@property (nonatomic) BOOL skipSkinToneClassification; // ivar: _skipSkinToneClassification


+(id)configuration;
-(id)initWithInferenceType:(int)arg0 ;


@end


#endif