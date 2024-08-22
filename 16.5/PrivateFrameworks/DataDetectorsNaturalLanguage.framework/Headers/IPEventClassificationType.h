// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPEVENTCLASSIFICATIONTYPE_H
#define IPEVENTCLASSIFICATIONTYPE_H

@class NSMutableArray, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "IPEventClassificationType.h"

@interface IPEventClassificationType : NSObject

@property (nonatomic, getter=isAllDayAllowed) BOOL allDayAllowed; // ivar: _allDayAllowed
@property (retain, nonatomic) NSMutableArray *children; // ivar: _children
@property (nonatomic) NSUInteger classificationDepth; // ivar: _classificationDepth
@property (readonly, nonatomic, getter=isCultureRelated) BOOL cultureRelated; // ivar: _cultureRelated
@property (nonatomic) int defaultCumulativeMinutes; // ivar: _defaultCumulativeMinutes
@property (nonatomic) CGFloat defaultDuration; // ivar: _defaultDuration
@property (nonatomic) int defaultStartingTimeHour; // ivar: _defaultStartingTimeHour
@property (nonatomic) int defaultStartingTimeMinutes; // ivar: _defaultStartingTimeMinutes
@property (retain, nonatomic) NSString *defaultTitle; // ivar: _defaultTitle
@property (readonly, nonatomic, getter=isFairlyGeneric) BOOL fairlyGeneric; // ivar: _fairlyGeneric
@property (retain, nonatomic) NSMutableArray *genericPatternKeywords; // ivar: _genericPatternKeywords
@property (nonatomic, getter=isHighPriority) BOOL highPriority; // ivar: _highPriority
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isAppointment) BOOL isAppointment; // ivar: _isAppointment
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic, getter=isLowPriority) BOOL lowPriority; // ivar: _lowPriority
@property (readonly, nonatomic, getter=isMealRelated) BOOL mealRelated; // ivar: _mealRelated
@property (nonatomic) CGFloat minutesAfterDefaultStartingTime; // ivar: _minutesAfterDefaultStartingTime
@property (nonatomic) CGFloat minutesBeforeDefaultStartingTime; // ivar: _minutesBeforeDefaultStartingTime
@property (readonly, nonatomic, getter=isMovieRelated) BOOL movieRelated; // ivar: _movieRelated
@property (weak, nonatomic) IPEventClassificationType *parent; // ivar: _parent
@property (retain, nonatomic) NSMutableArray *patternKeywords; // ivar: _patternKeywords
@property (nonatomic) NSUInteger preferedMeridian; // ivar: _preferedMeridian
@property (readonly, nonatomic) BOOL prefersTitleSenderDecoration;
@property (readonly, nonatomic, getter=isSportRelated) BOOL sportRelated; // ivar: _sportRelated
@property (retain, nonatomic) NSMutableArray *subjectKeywords; // ivar: _subjectKeywords
@property (retain, nonatomic) NSMutableArray *titleKeywords; // ivar: _titleKeywords
@property (retain, nonatomic) NSString *titleSenderTemplate; // ivar: _titleSenderTemplate
@property (retain, nonatomic) NSMutableDictionary *upperPriorityEventTypesIdentifiers; // ivar: _upperPriorityEventTypesIdentifiers
@property (nonatomic) BOOL useForTimeAdjustement; // ivar: _useForTimeAdjustement


+(CGFloat)_averageDistanceBetweenFeatureKeyword:(id)arg0 featureDates:(id)arg1 subjectLength:(NSUInteger)arg2 inSubject:(BOOL)arg3 ;
+(CGFloat)_scoreForKeywordsInSubject:(BOOL)arg0 distanceToDates:(CGFloat)arg1 polarity:(NSUInteger)arg2 matchedRatio:(CGFloat)arg3 keywordType:(NSUInteger)arg4 ;
+(id)_dateComponentsFromTaxonomyHHMMString:(id)arg0 ;
+(id)_identifierForCluster:(NSUInteger)arg0 ;
+(id)_identifiersForClusters:(id)arg0 ;
+(id)_loadTaxonomyForLanguageID:(id)arg0 clusterIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)_parentFromIdentifier:(id)arg0 ;
+(id)allClusterIdentifiers;
+(id)cleanSubject:(id)arg0 ;
+(id)eventClassificationTypeFromMessageUnit:(id)arg0 detectedStartDate:(id)arg1 ;
+(id)eventClassificationTypeFromMessageUnit:(id)arg0 features:(id)arg1 ;
+(id)eventClassificationTypeFromMessageUnit:(id)arg0 features:(id)arg1 datafeatures:(id)arg2 ;
+(id)eventClassificationTypeFromMessageUnit:(id)arg0 keywordFeatures:(id)arg1 datafeatures:(id)arg2 ;
+(id)eventTypeForCultureAndLanguageID:(id)arg0 ;
+(id)eventTypeForEntertainmentAndLanguageID:(id)arg0 ;
+(id)eventTypeForGenericEventAndLanguageID:(id)arg0 ;
+(id)eventTypeForMealsAndLanguageID:(id)arg0 ;
+(id)eventTypeForMoviesAndLanguageID:(id)arg0 ;
+(id)eventTypeForSportAndLanguageID:(id)arg0 ;
+(id)fallbackEventTitleForMessageUnits:(id)arg0 subject:(id)arg1 checkForDateInSubject:(BOOL)arg2 ;
+(id)humanReadableClusterType:(NSUInteger)arg0 ;
+(id)morePreciseEventClassificationTypeBetweenType:(id)arg0 and:(id)arg1 ;
+(id)taxonomyForLanguageID:(id)arg0 clusterIdentifier:(id)arg1 ;
+(id)taxonomyForLanguageID:(id)arg0 clusterType:(NSUInteger)arg1 ;
-(BOOL)_isAParentOf:(id)arg0 ;
-(BOOL)allowGenericKeywordsForLanguage:(id)arg0 ;
-(BOOL)isDateWithinRange:(id)arg0 ;
-(BOOL)questionMarkInString:(id)arg0 ;
-(CGFloat)_hasPriorityOverEventType:(id)arg0 ;
-(id)_mealClassificationTypeUsingStartDate:(id)arg0 ;
-(id)adjustedEventClassificationTypeWithStartDate:(id)arg0 ;
-(id)adjustedEventTitleForMessageUnits:(id)arg0 ;
-(id)adjustedEventTitleForMessageUnits:(id)arg0 subject:(id)arg1 dateInSubject:(id)arg2 eventStartDate:(id)arg3 isGeneratedFromSubject:(*BOOL)arg4 ;
-(id)adjustedEventTitleForMessageUnits:(id)arg0 subject:(id)arg1 isDateInSubject:(BOOL)arg2 ;
-(id)dateWithoutTime:(id)arg0 ;
-(id)decoratedTitleFromTitle:(id)arg0 participantName:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 language:(id)arg1 patternKeywords:(id)arg2 titleKeywords:(id)arg3 subjectKeywords:(id)arg4 defaultTitle:(id)arg5 titleSenderTemplate:(id)arg6 defaultStartingTimeHour:(int)arg7 defaultStartingTimeMinutes:(int)arg8 defaultDuration:(CGFloat)arg9 preferedMeridian:(NSUInteger)arg10 parent:(id)arg11 children:(id)arg12 useForTimeAdjustement:(BOOL)arg13 minutesBeforeDefaultStartingTime:(CGFloat)arg14 minutesAfterDefaultStartingTime:(CGFloat)arg15 allDayAllowed:(BOOL)arg16 useGenericPatternsInClassification:(BOOL)arg17 movieRelated:(BOOL)arg18 mealRelated:(BOOL)arg19 cultureRelated:(BOOL)arg20 sportRelated:(BOOL)arg21 fairlyGeneric:(BOOL)arg22 appointmentRelated:(BOOL)arg23 ;
-(id)properCasedTitleForTitle:(id)arg0 locale:(id)arg1 ;
-(void)_addChild:(id)arg0 ;
-(void)_addParent:(id)arg0 ;
-(void)_addUpperPriorityEventTypeIdentifier:(id)arg0 weight:(id)arg1 ;
-(void)addEventPatterns:(id)arg0 ;


@end


#endif