// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRKEYBOARDMETRICS_H
#define SRKEYBOARDMETRICS_H

@class NSString, NSMeasurement, NSArray, NSDateInterval, NSDictionary, NSMutableDictionary;
@protocol NSSecureCoding, SRSampleExporting, SRSampling;

#import <Foundation/Foundation.h>


@interface SRKeyboardMetrics : NSObject <NSSecureCoding, SRSampleExporting, SRSampling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (readonly) NSMeasurement *height;
@property (readonly, copy) NSArray *inputModes;
@property (retain) NSDateInterval *interval; // ivar: _interval
@property (readonly, copy) NSString *keyboardIdentifier;
@property (copy) NSDictionary *keyboardMetaInformation; // ivar: _keyboardMetaInformation
@property (retain) NSMutableDictionary *mutablePositionalMetrics; // ivar: _mutablePositionalMetrics
@property (retain) NSMutableDictionary *mutableProbabilityMetrics; // ivar: _mutableProbabilityMetrics
@property (retain) NSMutableDictionary *mutableScalarMetrics; // ivar: _mutableScalarMetrics
@property (readonly) Class superclass;
@property (readonly, copy) NSString *version;
@property (readonly) NSMeasurement *width;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)pathTypingSpeed;
-(CGFloat)totalPathTime;
-(CGFloat)totalTypingDuration;
-(CGFloat)typingSpeed;
-(NSInteger)emojiCountForSentimentCategory:(NSInteger)arg0 ;
-(NSInteger)totalAbsolutistWords;
-(NSInteger)totalAlteredWords;
-(NSInteger)totalAngerEmojis;
-(NSInteger)totalAngerWords;
-(NSInteger)totalAnxietyEmojis;
-(NSInteger)totalAnxietyWords;
-(NSInteger)totalAutoCorrections;
-(NSInteger)totalConfusedEmojis;
-(NSInteger)totalDeathWords;
-(NSInteger)totalDeletes;
-(NSInteger)totalDownWords;
-(NSInteger)totalDrags;
-(NSInteger)totalEmojis;
-(NSInteger)totalHealthFeelingEmojis;
-(NSInteger)totalHealthFeelingWords;
-(NSInteger)totalHitTestCorrections;
-(NSInteger)totalInsertKeyCorrections;
-(NSInteger)totalLowEnergyEmojis;
-(NSInteger)totalNearKeyCorrections;
-(NSInteger)totalPathPauses;
-(NSInteger)totalPaths;
-(NSInteger)totalPauses;
-(NSInteger)totalPositiveEmojis;
-(NSInteger)totalRetroCorrections;
-(NSInteger)totalSadEmojis;
-(NSInteger)totalSkipTouchCorrections;
-(NSInteger)totalSpaceCorrections;
-(NSInteger)totalSubstitutionCorrections;
-(NSInteger)totalTaps;
-(NSInteger)totalTranspositionCorrections;
-(NSInteger)totalTypingEpisodes;
-(NSInteger)totalWords;
-(NSInteger)wordCountForSentimentCategory:(NSInteger)arg0 ;
-(id)anyTapToCharKey;
-(id)anyTapToPlaneChangeKey;
-(id)binarySampleRepresentation;
-(id)charKeyToAnyTapKey;
-(id)charKeyToDelete;
-(id)charKeyToPlaneChangeKey;
-(id)charKeyToPrediction;
-(id)charKeyToSpaceKey;
-(id)deleteDownErrorDistance;
-(id)deleteToCharKey;
-(id)deleteToDelete;
-(id)deleteToDeletes;
-(id)deleteToPath;
-(id)deleteToPlaneChangeKey;
-(id)deleteToShiftKey;
-(id)deleteToSpaceKey;
-(id)deleteTouchDownUp;
-(id)deleteUpErrorDistance;
-(id)downErrorDistance;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterval:(id)arg0 metaInformation:(id)arg1 ;
-(id)longWordDownErrorDistance;
-(id)longWordTouchDownDown;
-(id)longWordTouchDownUp;
-(id)longWordUpErrorDistance;
-(id)pathErrorDistanceRatio;
-(id)pathToDelete;
-(id)pathToPath;
-(id)pathToSpace;
-(id)planeChangeKeyToCharKey;
-(id)planeChangeToAnyTap;
-(id)positionalMetrics;
-(id)probabilityMetrics;
-(id)scalarMetrics;
-(id)shortWordCharKeyDownErrorDistance;
-(id)shortWordCharKeyToCharKey;
-(id)shortWordCharKeyTouchDownUp;
-(id)shortWordCharKeyUpErrorDistance;
-(id)spaceDownErrorDistance;
-(id)spaceToCharKey;
-(id)spaceToDeleteKey;
-(id)spaceToPath;
-(id)spaceToPlaneChangeKey;
-(id)spaceToPredictionKey;
-(id)spaceToShiftKey;
-(id)spaceToSpaceKey;
-(id)spaceTouchDownUp;
-(id)spaceUpErrorDistance;
-(id)sr_dictionaryRepresentation;
-(id)totalPathLength;
-(id)touchDownDown;
-(id)touchDownUp;
-(id)upErrorDistance;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif