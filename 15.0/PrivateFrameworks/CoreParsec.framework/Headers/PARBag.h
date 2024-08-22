// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARBAG_H
#define PARBAG_H

@class NSArray, NSData, NSString, NSNumber, NSURL, NSDictionary, NSUserDefaults;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PARBag : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger abTest2WeekZoneSize;
@property (readonly, nonatomic) BOOL allowSafariRankingDataCollection;
@property (readonly, nonatomic) NSArray *anonymousMetadataPreference;
@property (copy, nonatomic) NSData *bagData; // ivar: _bagData
@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, nonatomic) NSNumber *cohortsLookbackInDays;
@property (readonly, nonatomic) BOOL collectAnonymousMetadata;
@property (readonly, nonatomic) BOOL collectScores;
@property (readonly, nonatomic) NSURL *crowdsourcingURL;
@property (readonly, copy, nonatomic) NSString *customFlight;
@property (readonly, nonatomic) BOOL disableAsTypedSuggestion;
@property (readonly, nonatomic) NSArray *downloadResourcesList;
@property (readonly, nonatomic) NSNumber *duetExpertCustomFeedbackSamplingPercentage;
@property (readonly, nonatomic) NSNumber *eagerFeedbackSamplingPercentage;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *enabledDomains;
@property (readonly, nonatomic) BOOL exp;
@property (readonly, nonatomic) BOOL feedbackEnabled;
@property (readonly, nonatomic) NSNumber *feedbackMaxAgeInDays;
@property (readonly, nonatomic) NSURL *feedbackURL;
@property (readonly, copy, nonatomic) NSString *firstUseContinueText;
@property (readonly, copy, nonatomic) NSString *firstUseDescriptionText;
@property (readonly, copy, nonatomic) NSString *firstUseLearnMoreText;
@property (readonly, copy, nonatomic) NSString *firstUseLearnMoreURL;
@property (readonly, nonatomic) NSURL *flightURL;
@property (readonly, nonatomic) BOOL imageTimingFeedbackEnabled;
@property (readonly, nonatomic) NSUInteger maximumCachedQueriesToSend;
@property (readonly, nonatomic) NSUInteger maximumCachedResultsToSend;
@property (readonly, nonatomic) NSDictionary *maximumCustomFeedbackSizes;
@property (readonly, nonatomic) NSNumber *minSearchRenderTimeout;
@property (readonly, nonatomic) NSNumber *minSuggestionRenderTimeout;
@property (readonly, nonatomic) CGFloat minThresholdToSend;
@property (readonly, nonatomic) CGFloat minimumIntervalBetweenQueriesFromBag;
@property (readonly, nonatomic) NSUInteger minimumQueryLength;
@property (readonly, nonatomic) NSNumber *otherRenderTimeout;
@property (readonly, copy, nonatomic) NSString *parsecFeedbackFormat;
@property (readonly, nonatomic) NSInteger protocolVersion;
@property (readonly, copy, nonatomic) NSDictionary *rawBag;
@property (readonly, copy, nonatomic) NSArray *recentlyUsedAppIdentifierWhitelist;
@property (readonly, copy, nonatomic) NSString *releaseTag;
@property (readonly, copy, nonatomic) NSDictionary *resources;
@property (readonly, nonatomic) CGFloat safariAll;
@property (readonly, nonatomic) CGFloat safariDecay;
@property (readonly, nonatomic) CGFloat safariDwellTimeThresholdHigh;
@property (readonly, nonatomic) CGFloat safariDwellTimeThresholdMedium;
@property (readonly, nonatomic) CGFloat safariLast1day;
@property (readonly, nonatomic) CGFloat safariLast1hour;
@property (readonly, nonatomic) CGFloat safariLast1month;
@property (readonly, nonatomic) CGFloat safariLast1week;
@property (readonly, nonatomic) CGFloat safariMostRecent;
@property (readonly, nonatomic) BOOL sampleClientTiming;
@property (readonly, nonatomic) NSArray *sampleClientTimingEventWhitelist;
@property (readonly, nonatomic) BOOL sampleFeatures;
@property (readonly, nonatomic) NSNumber *searchRenderTimeout;
@property (readonly, nonatomic) NSURL *searchURL;
@property (readonly, copy, nonatomic) NSArray *skuUploadWhitelist;
@property (readonly, nonatomic) BOOL smartHistoryEnabled;
@property (readonly, nonatomic) BOOL smartHistoryFeatureFeedbackEnabled;
@property (readonly, nonatomic) NSUInteger smartHistoryMaxRows;
@property (readonly, nonatomic) NSUInteger smartHistoryMinimumQueryLength;
@property (readonly, nonatomic) NSUInteger smartHistorySampleThreshold;
@property (readonly, nonatomic) NSUInteger smartHistoryTimeout;
@property (readonly, nonatomic) NSDictionary *smartSearchV2Parameters;
@property (readonly, nonatomic) NSArray *subscriptionProviderBundleIdentifierWhitelist;
@property (readonly, nonatomic) NSArray *subscriptionProviderDomainWhitelist;
@property (readonly, nonatomic) CGFloat subscriptionTTL;
@property (readonly, nonatomic) NSArray *suggestionRankerModel;
@property (readonly, nonatomic) NSArray *supportedGeoLocationSources;
@property (readonly, nonatomic) CGFloat timeoutIntervalForRequest;
@property (readonly, nonatomic) NSURL *uncommittedSearchURL;
@property (readonly, nonatomic) BOOL use2LayerRanking;
@property (readonly, copy, nonatomic) NSString *userAgent; // ivar: _userAgent
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) NSURL *warmURL;


+(BOOL)supportsSecureCoding;
-(BOOL)bag_boolForKey:(id)arg0 ;
-(BOOL)isRefreshDisabled;
-(NSUInteger)maximumSizeForFeedbackType:(id)arg0 ;
-(id)_bag_objectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)_bag_objectOfClass:(Class)arg0 forKey:(id)arg1 override:(BOOL)arg2 ;
-(id)bagURL;
-(id)bag_URLForKey:(id)arg0 ;
-(id)bag_arrayForKey:(id)arg0 ;
-(id)bag_dictionaryForKey:(id)arg0 ;
-(id)bag_numberForKey:(id)arg0 ;
-(id)bag_stringForKey:(id)arg0 ;
-(id)description;
-(id)initWithBag:(id)arg0 userAgent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 userAgent:(id)arg1 ;
-(id)initWithData:(id)arg0 userAgent:(id)arg1 userDefaults:(id)arg2 ;
-(id)initWithURL:(id)arg0 userAgent:(id)arg1 ;
-(id)initWithURL:(id)arg0 userAgent:(id)arg1 userDefaults:(id)arg2 ;
-(id)initWithURL:(id)arg0 userDefaults:(id)arg1 ;
-(id)personalizationParameters;
-(id)urlForIdentifier:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKey:(id)arg0 override:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif