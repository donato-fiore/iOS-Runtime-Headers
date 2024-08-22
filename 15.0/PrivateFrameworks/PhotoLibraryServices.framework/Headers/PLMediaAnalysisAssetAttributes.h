// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMEDIAANALYSISASSETATTRIBUTES_H
#define PLMEDIAANALYSISASSETATTRIBUTES_H

@class NSData, NSDate;


#import "PLManagedObject.h"
#import "PLManagedAsset.h"
#import "PLCharacterRecognitionAttributes.h"
#import "PLVisualSearchAttributes.h"

@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (nonatomic) float activityScore;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) short audioClassification;
@property (nonatomic) float autoplaySuggestionScore;
@property (nonatomic) int bestVideoRangeDurationTimeScale;
@property (nonatomic) NSInteger bestVideoRangeDurationValue;
@property (nonatomic) int bestVideoRangeStartTimeScale;
@property (nonatomic) NSInteger bestVideoRangeStartValue;
@property (nonatomic) float blurrinessScore;
@property (retain, nonatomic) PLCharacterRecognitionAttributes *characterRecognitionAttributes;
@property (retain, nonatomic) NSData *colorNormalizationData;
@property (nonatomic) float exposureScore;
@property (nonatomic) NSUInteger faceCount;
@property (retain, nonatomic) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic) NSUInteger mediaAnalysisVersion;
@property (nonatomic) NSInteger packedBestPlaybackRect;
@property (nonatomic) short probableRotationDirection;
@property (nonatomic) float probableRotationDirectionConfidence;
@property (nonatomic) unsigned short screenTimeDeviceImageSensitivity;
@property (nonatomic) unsigned short syndicationProcessingValue;
@property (nonatomic) NSUInteger syndicationProcessingVersion;
@property (nonatomic) float videoScore;
@property (retain, nonatomic) PLVisualSearchAttributes *visualSearchAttributes;


+(id)entityName;
+(id)fetchRequest;
-(struct ? )bestVideoTimeRange;
-(void)setBestVideoTimeRange:(struct ? )arg0 ;
-(void)setCharacterRecognitionData:(id)arg0 machineReadableCodeData:(id)arg1 algorithmVersion:(short)arg2 adjustmentVersion:(id)arg3 ;
-(void)setVisualSearchData:(id)arg0 algorithmVersion:(short)arg1 adjustmentVersion:(id)arg2 ;
-(void)willSave;


@end


#endif