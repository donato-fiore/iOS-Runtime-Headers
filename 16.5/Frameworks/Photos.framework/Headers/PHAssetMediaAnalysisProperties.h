// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETMEDIAANALYSISPROPERTIES_H
#define PHASSETMEDIAANALYSISPROPERTIES_H

@class NSData, NSDate;


#import "PHAssetPropertySet.h"

@interface PHAssetMediaAnalysisProperties : PHAssetPropertySet

@property (readonly, nonatomic) float activityScore; // ivar: _activityScore
@property (readonly, nonatomic) short audioClassification; // ivar: _audioClassification
@property (readonly, nonatomic) float audioScore; // ivar: _audioScore
@property (readonly, nonatomic) float autoplaySuggestionScore; // ivar: _autoplaySuggestionScore
@property (readonly, nonatomic) ? bestKeyFrameTime; // ivar: _bestKeyFrameTime
@property (readonly, nonatomic) CGRect bestPlaybackRect; // ivar: _bestPlaybackRect
@property (readonly, nonatomic) ? bestVideoTimeRange; // ivar: _bestVideoTimeRange
@property (readonly, nonatomic) float blurrinessScore; // ivar: _blurrinessScore
@property (readonly, nonatomic) NSData *colorNormalizationData; // ivar: _colorNormalizationData
@property (readonly, nonatomic) float exposureScore; // ivar: _exposureScore
@property (readonly, nonatomic) NSUInteger faceCount; // ivar: _faceCount
@property (readonly, nonatomic) NSDate *mediaAnalysisTimeStamp; // ivar: _mediaAnalysisTimeStamp
@property (readonly, nonatomic) NSUInteger mediaAnalysisVersion; // ivar: _mediaAnalysisVersion
@property (readonly, nonatomic) short probableRotationDirection; // ivar: _probableRotationDirection
@property (readonly, nonatomic) float probableRotationDirectionConfidence; // ivar: _probableRotationDirectionConfidence
@property (readonly, nonatomic) short screenTimeDeviceImageSensitivity; // ivar: _screenTimeDeviceImageSensitivity
@property (readonly, nonatomic) unsigned short syndicationProcessingValue; // ivar: _syndicationProcessingValue
@property (readonly, nonatomic) NSUInteger syndicationProcessingVersion; // ivar: _syndicationProcessingVersion
@property (readonly, nonatomic) float videoScore; // ivar: _videoScore
@property (readonly, nonatomic) float wallpaperScore; // ivar: _wallpaperScore


+(float)defaultAudioScore;
+(id)additionalPropertiesToFetchOnPrimaryObject;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;
-(void)initWithDefaultValues;


@end


#endif