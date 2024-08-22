// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPFEATURESCANNER_H
#define IPFEATURESCANNER_H

@class NSMutableArray, NSArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface IPFeatureScanner : NSObject

@property (retain) NSMutableArray *bodyAllFeatures; // ivar: _bodyAllFeatures
@property (retain) NSMutableArray *bodyDataDetectorsFeatures; // ivar: _bodyDataDetectorsFeatures
@property (retain) NSMutableArray *bodyKeywordFeatures; // ivar: _bodyKeywordFeatures
@property (retain) NSArray *bodyMessageUnits; // ivar: _bodyMessageUnits
@property (retain) NSMutableArray *bodySentenceFeatures; // ivar: _bodySentenceFeatures
@property (retain) NSMutableArray *detectedEvents; // ivar: _detectedEvents
@property (retain) NSMutableSet *extractedNotesStrings; // ivar: _extractedNotesStrings
@property (retain) NSArray *filteredDetectedEvents; // ivar: _filteredDetectedEvents
@property NSInteger resultType; // ivar: _resultType
@property (retain) NSArray *stitchedEvents; // ivar: _stitchedEvents


+(BOOL)isNaturalLanguageEventDetectionEnabled;
+(id)dataDetectorsFeatureExtractor;
+(id)descriptionForScanResultType:(NSInteger)arg0 ;
+(id)keywordFeatureExtractor;
+(id)sentenceFeatureExtractor;
+(void)resetSharedCachesAndModels;
+(void)setEventStoreForTesting:(id)arg0 ;
-(BOOL)dataFeatures:(id)arg0 containDateOlderThan:(id)arg1 preciseTimeOnly:(BOOL)arg2 ;
-(BOOL)isDateAroundNoon:(id)arg0 ;
-(BOOL)isDateRoundedTo5Minutes:(id)arg0 ;
-(BOOL)isEventProposalOrConfirmationFromFeatures:(id)arg0 fromFeatureAtIndex:(NSUInteger)arg1 messageUnit:(id)arg2 eventIsTenseDependent:(BOOL)arg3 extractedFromSubject:(BOOL)arg4 extractedPolarity:(*NSUInteger)arg5 polarityInfluencedByIpsosPlistRef:(*BOOL)arg6 ;
-(BOOL)shouldReplaceSendDateWithCurrentDate;
-(CGFloat)confidenceForEvent:(id)arg0 baseConfidence:(CGFloat)arg1 ;
-(NSUInteger)_distanceBetweenFeature:(id)arg0 andFeature:(id)arg1 ;
-(NSUInteger)countOfFeaturesContainDateInTheFuture:(id)arg0 messageUnitSentDate:(id)arg1 ;
-(NSUInteger)eventStatusFromPolarity:(NSUInteger)arg0 ;
-(NSUInteger)featureSentencePolarityForFeatureAtIndex:(NSUInteger)arg0 inFeatures:(id)arg1 ;
-(id)_featureDataInFeatures:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_featureSentenceInFeatures:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_featureWithClass:(Class)arg0 inFeatures:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(id)_nearbyFeatureDatas:(id)arg0 fromFeatureAtIndex:(NSUInteger)arg1 messageUnit:(id)arg2 ;
-(id)_nearbyFeatureSentences:(id)arg0 fromFeatureAtIndex:(NSUInteger)arg1 messageUnit:(id)arg2 ;
-(id)_regroupEventsWithSpreadTimeAsAllDayEvents:(id)arg0 ;
-(id)_sortedFeaturesByDistance:(id)arg0 aroundRange:(struct _NSRange )arg1 ;
-(id)_sortedFeaturesByRange:(id)arg0 ;
-(id)_stitchedEventsFromEvents:(id)arg0 ;
-(id)analyzeFeatures:(id)arg0 messageUnit:(id)arg1 ;
-(id)analyzeFeatures:(id)arg0 messageUnit:(id)arg1 checkPolarity:(BOOL)arg2 polarity:(NSUInteger)arg3 ;
-(id)artisNamesFromDataFeatures:(id)arg0 ;
-(id)bestEventsFromEvents:(id)arg0 ;
-(id)cleanedStringForFeatureData:(id)arg0 ;
-(id)dataFeaturesInTheFutureFromDataFeatures:(id)arg0 messageUnitSentDate:(id)arg1 ;
-(id)decoratedTitle:(id)arg0 withSubtitles:(id)arg1 ;
-(id)decoratedTitleFromEventType:(id)arg0 title:(id)arg1 sender:(id)arg2 recipients:(id)arg3 isSent:(BOOL)arg4 ;
-(id)entertainmentPOINamesFromDataFeatures:(id)arg0 ;
-(id)featuresForTextString:(id)arg0 inMessageUnit:(id)arg1 extractors:(id)arg2 context:(id)arg3 ;
-(id)filteredEventsForDetectedEvents:(id)arg0 referenceDate:(id)arg1 ;
-(id)messageSenderName;
-(id)movieTitlesFromDataFeatures:(id)arg0 ;
-(id)normalizedAllDayDateFromDate:(id)arg0 ;
-(id)notesStringsFromDataFeatures:(id)arg0 ;
-(id)restaurantAndBarPOINamesFromDataFeatures:(id)arg0 ;
-(id)shortNameForPerson:(id)arg0 ;
-(id)sportTeamNamesFromDataFeatures:(id)arg0 ;
-(id)stitchedEventsFromEvents:(id)arg0 ;
-(id)stringsFromDataFeatures:(id)arg0 matchingTypes:(id)arg1 ;
-(id)subjectEventVocabularyIgnoreDateKeyword:(id)arg0 ;
-(id)subjectEventVocabularyRejectionKeyword:(id)arg0 ;
-(void)adjustTimeForEvent:(id)arg0 ;
-(void)adjustTimeForEvents:(id)arg0 ;
-(void)augmentDetectedDatesWithEndDates:(id)arg0 ;
-(void)confidenceForEvents:(id)arg0 ;
-(void)enrichEvents:(id)arg0 messageUnits:(id)arg1 dateInSubject:(id)arg2 dataFeatures:(id)arg3 ;
-(void)normalizedEvents:(id)arg0 ;
-(void)resetScanState;
-(void)scanEventsInMessageUnits:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif