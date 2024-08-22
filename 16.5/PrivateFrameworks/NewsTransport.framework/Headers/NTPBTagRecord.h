// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBTAGRECORD_H
#define NTPBTAGRECORD_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "NTPBRecordBase.h"
#import "NTPBFeedConfiguration.h"
#import "NTPBPublisherPaidDescriptionStrings.h"
#import "NTPBDate.h"

@interface NTPBTagRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *adTargetingKeywords; // ivar: _adTargetingKeywords
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (retain, nonatomic) NSString *archiveIssueListID; // ivar: _archiveIssueListID
@property (retain, nonatomic) NSData *articleRecirculationConfiguration; // ivar: _articleRecirculationConfiguration
@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (nonatomic) NSInteger behaviorFlags; // ivar: _behaviorFlags
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (retain, nonatomic) NSString *channelDefaultSectionID; // ivar: _channelDefaultSectionID
@property (retain, nonatomic) NSMutableArray *channelSectionFeedConfigurations; // ivar: _channelSectionFeedConfigurations
@property (retain, nonatomic) NSMutableArray *channelSectionIDs; // ivar: _channelSectionIDs
@property (nonatomic) NSInteger contentProvider; // ivar: _contentProvider
@property (retain, nonatomic) NSString *coverImageURL; // ivar: _coverImageURL
@property (retain, nonatomic) NSString *darkStyleNavigationChromeBackgroundImageCompactURL; // ivar: _darkStyleNavigationChromeBackgroundImageCompactURL
@property (retain, nonatomic) NSString *darkStyleNavigationChromeBackgroundImageLargeURL; // ivar: _darkStyleNavigationChromeBackgroundImageLargeURL
@property (retain, nonatomic) NSString *darkStyleNavigationChromeBackgroundImageURL; // ivar: _darkStyleNavigationChromeBackgroundImageURL
@property (retain, nonatomic) NTPBFeedConfiguration *feedConfiguration; // ivar: _feedConfiguration
@property (retain, nonatomic) NSString *feedNavImageURL; // ivar: _feedNavImageURL
@property (nonatomic) int groupingAvailability; // ivar: _groupingAvailability
@property (readonly, nonatomic) BOOL hasArchiveIssueListID;
@property (readonly, nonatomic) BOOL hasArticleRecirculationConfiguration;
@property (readonly, nonatomic) BOOL hasBase;
@property (nonatomic) BOOL hasBehaviorFlags;
@property (readonly, nonatomic) BOOL hasChannelDefaultSectionID;
@property (nonatomic) BOOL hasContentProvider;
@property (readonly, nonatomic) BOOL hasCoverImageURL;
@property (readonly, nonatomic) BOOL hasDarkStyleNavigationChromeBackgroundImageCompactURL;
@property (readonly, nonatomic) BOOL hasDarkStyleNavigationChromeBackgroundImageLargeURL;
@property (readonly, nonatomic) BOOL hasDarkStyleNavigationChromeBackgroundImageURL;
@property (readonly, nonatomic) BOOL hasFeedConfiguration;
@property (readonly, nonatomic) BOOL hasFeedNavImageURL;
@property (nonatomic) BOOL hasGroupingAvailability;
@property (nonatomic) BOOL hasHideAccessoryText;
@property (readonly, nonatomic) BOOL hasHighlightsArticleListID;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL hasIsExplicitContent;
@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL hasIsNotificationEnabled;
@property (nonatomic) BOOL hasIsPublic;
@property (nonatomic) BOOL hasIsSportsRecommendable;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasLogoURL;
@property (readonly, nonatomic) BOOL hasMagazineGenre;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasNameCompact;
@property (nonatomic) BOOL hasNameImageBaselineShift;
@property (readonly, nonatomic) BOOL hasNameImageCompactMetadata;
@property (readonly, nonatomic) BOOL hasNameImageCompactURL;
@property (readonly, nonatomic) BOOL hasNameImageForDarkBackgroundURL;
@property (readonly, nonatomic) BOOL hasNameImageLargeMaskURL;
@property (readonly, nonatomic) BOOL hasNameImageLargeURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskWidgetHQURL;
@property (readonly, nonatomic) BOOL hasNameImageMaskWidgetLQURL;
@property (readonly, nonatomic) BOOL hasNameImageMetadata;
@property (nonatomic) BOOL hasNameImageScaleFactor;
@property (readonly, nonatomic) BOOL hasNameImageURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundImageCompactURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundImageLargeURL;
@property (readonly, nonatomic) BOOL hasNavigationChromeBackgroundImageURL;
@property (readonly, nonatomic) BOOL hasPaidBundlePaywallConfigurationJson;
@property (readonly, nonatomic) BOOL hasParentID;
@property (readonly, nonatomic) BOOL hasPrimaryAudience;
@property (nonatomic) BOOL hasPropertyFlags;
@property (readonly, nonatomic) BOOL hasPublisherPaidAuthorizationURL;
@property (readonly, nonatomic) BOOL hasPublisherPaidDescriptionStrings;
@property (nonatomic) BOOL hasPublisherPaidLeakyPaywallOptOut;
@property (readonly, nonatomic) BOOL hasPublisherPaidVerificationURL;
@property (nonatomic) BOOL hasPublisherPaidWebOptIn;
@property (readonly, nonatomic) BOOL hasPublisherPaidWebaccessURL;
@property (readonly, nonatomic) BOOL hasPublisherSpecifiedArticleIdsModifiedDate;
@property (readonly, nonatomic) BOOL hasPublisherSpecifiedArticlesJson;
@property (readonly, nonatomic) BOOL hasReplacementID;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSportsData;
@property (readonly, nonatomic) BOOL hasSportsLogoImageCompactURL;
@property (readonly, nonatomic) BOOL hasSportsLogoImageLargeURL;
@property (readonly, nonatomic) BOOL hasSportsLogoImageURL;
@property (readonly, nonatomic) BOOL hasSportsRecommendationMappingsJson;
@property (readonly, nonatomic) BOOL hasSportsTheme;
@property (readonly, nonatomic) BOOL hasStocksFeedConfigurationJson;
@property (nonatomic) BOOL hasSubscriptionRate;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasSuperfeedConfigResourceID;
@property (readonly, nonatomic) BOOL hasSupergroupConfigJson;
@property (readonly, nonatomic) BOOL hasSupergroupKnobsJson;
@property (readonly, nonatomic) BOOL hasTemplateJson;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hideAccessoryText; // ivar: _hideAccessoryText
@property (retain, nonatomic) NSString *highlightsArticleListID; // ivar: _highlightsArticleListID
@property (retain, nonatomic) NSMutableArray *iAdCategories; // ivar: _iAdCategories
@property (retain, nonatomic) NSMutableArray *iAdKeywords; // ivar: _iAdKeywords
@property (nonatomic) BOOL isDeprecated; // ivar: _isDeprecated
@property (nonatomic) BOOL isExplicitContent; // ivar: _isExplicitContent
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (nonatomic) BOOL isNotificationEnabled; // ivar: _isNotificationEnabled
@property (nonatomic) BOOL isPublic; // ivar: _isPublic
@property (nonatomic) BOOL isSportsRecommendable; // ivar: _isSportsRecommendable
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSMutableArray *latestIssueIDs; // ivar: _latestIssueIDs
@property (retain, nonatomic) NSString *logoURL; // ivar: _logoURL
@property (retain, nonatomic) NSString *magazineGenre; // ivar: _magazineGenre
@property (nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameCompact; // ivar: _nameCompact
@property (nonatomic) NSUInteger nameImageBaselineShift; // ivar: _nameImageBaselineShift
@property (retain, nonatomic) NSData *nameImageCompactMetadata; // ivar: _nameImageCompactMetadata
@property (retain, nonatomic) NSString *nameImageCompactURL; // ivar: _nameImageCompactURL
@property (retain, nonatomic) NSString *nameImageForDarkBackgroundURL; // ivar: _nameImageForDarkBackgroundURL
@property (retain, nonatomic) NSString *nameImageLargeMaskURL; // ivar: _nameImageLargeMaskURL
@property (retain, nonatomic) NSString *nameImageLargeURL; // ivar: _nameImageLargeURL
@property (retain, nonatomic) NSString *nameImageMaskURL; // ivar: _nameImageMaskURL
@property (retain, nonatomic) NSString *nameImageMaskWidgetHQURL; // ivar: _nameImageMaskWidgetHQURL
@property (retain, nonatomic) NSString *nameImageMaskWidgetLQURL; // ivar: _nameImageMaskWidgetLQURL
@property (retain, nonatomic) NSData *nameImageMetadata; // ivar: _nameImageMetadata
@property (nonatomic) CGFloat nameImageScaleFactor; // ivar: _nameImageScaleFactor
@property (retain, nonatomic) NSString *nameImageURL; // ivar: _nameImageURL
@property (retain, nonatomic) NSString *navigationChromeBackgroundImageCompactURL; // ivar: _navigationChromeBackgroundImageCompactURL
@property (retain, nonatomic) NSString *navigationChromeBackgroundImageLargeURL; // ivar: _navigationChromeBackgroundImageLargeURL
@property (retain, nonatomic) NSString *navigationChromeBackgroundImageURL; // ivar: _navigationChromeBackgroundImageURL
@property (retain, nonatomic) NSString *paidBundlePaywallConfigurationJson; // ivar: _paidBundlePaywallConfigurationJson
@property (retain, nonatomic) NSString *parentID; // ivar: _parentID
@property (retain, nonatomic) NSString *primaryAudience; // ivar: _primaryAudience
@property (nonatomic) NSInteger propertyFlags; // ivar: _propertyFlags
@property (retain, nonatomic) NSString *publisherPaidAuthorizationURL; // ivar: _publisherPaidAuthorizationURL
@property (retain, nonatomic) NSMutableArray *publisherPaidBundlePurchaseIDs; // ivar: _publisherPaidBundlePurchaseIDs
@property (retain, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings; // ivar: _publisherPaidDescriptionStrings
@property (retain, nonatomic) NSMutableArray *publisherPaidFeldsparablePurchaseIDs; // ivar: _publisherPaidFeldsparablePurchaseIDs
@property (nonatomic) BOOL publisherPaidLeakyPaywallOptOut; // ivar: _publisherPaidLeakyPaywallOptOut
@property (retain, nonatomic) NSString *publisherPaidVerificationURL; // ivar: _publisherPaidVerificationURL
@property (nonatomic) BOOL publisherPaidWebOptIn; // ivar: _publisherPaidWebOptIn
@property (retain, nonatomic) NSString *publisherPaidWebaccessURL; // ivar: _publisherPaidWebaccessURL
@property (retain, nonatomic) NSMutableArray *publisherSpecifiedArticleIds; // ivar: _publisherSpecifiedArticleIds
@property (retain, nonatomic) NTPBDate *publisherSpecifiedArticleIdsModifiedDate; // ivar: _publisherSpecifiedArticleIdsModifiedDate
@property (retain, nonatomic) NSString *publisherSpecifiedArticlesJson; // ivar: _publisherSpecifiedArticlesJson
@property (retain, nonatomic) NSMutableArray *purchaseOfferableConfigurations; // ivar: _purchaseOfferableConfigurations
@property (retain, nonatomic) NSMutableArray *recentIssueIDs; // ivar: _recentIssueIDs
@property (retain, nonatomic) NSString *replacementID; // ivar: _replacementID
@property (nonatomic) NSInteger score; // ivar: _score
@property (retain, nonatomic) NSString *sportsData; // ivar: _sportsData
@property (retain, nonatomic) NSString *sportsLogoImageCompactURL; // ivar: _sportsLogoImageCompactURL
@property (retain, nonatomic) NSString *sportsLogoImageLargeURL; // ivar: _sportsLogoImageLargeURL
@property (retain, nonatomic) NSString *sportsLogoImageURL; // ivar: _sportsLogoImageURL
@property (retain, nonatomic) NSData *sportsRecommendationMappingsJson; // ivar: _sportsRecommendationMappingsJson
@property (retain, nonatomic) NSString *sportsTheme; // ivar: _sportsTheme
@property (retain, nonatomic) NSString *stocksFeedConfigurationJson; // ivar: _stocksFeedConfigurationJson
@property (nonatomic) CGFloat subscriptionRate; // ivar: _subscriptionRate
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *superfeedConfigResourceID; // ivar: _superfeedConfigResourceID
@property (retain, nonatomic) NSString *supergroupConfigJson; // ivar: _supergroupConfigJson
@property (retain, nonatomic) NSString *supergroupKnobsJson; // ivar: _supergroupKnobsJson
@property (retain, nonatomic) NSString *templateJson; // ivar: _templateJson
@property (nonatomic) int type; // ivar: _type


+(Class)purchaseOfferableConfigurationType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)adTargetingKeywordsAtIndex:(NSUInteger)arg0 ;
-(id)allowedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)blockedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)channelSectionFeedConfigurationsAtIndex:(NSUInteger)arg0 ;
-(id)channelSectionIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)iAdCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)iAdKeywordsAtIndex:(NSUInteger)arg0 ;
-(id)latestIssueIDsAtIndex:(NSUInteger)arg0 ;
-(id)publisherPaidBundlePurchaseIDsAtIndex:(NSUInteger)arg0 ;
-(id)publisherPaidFeldsparablePurchaseIDsAtIndex:(NSUInteger)arg0 ;
-(id)publisherSpecifiedArticleIdsAtIndex:(NSUInteger)arg0 ;
-(id)purchaseOfferableConfigurationAtIndex:(NSUInteger)arg0 ;
-(id)recentIssueIDsAtIndex:(NSUInteger)arg0 ;
-(void)addAdTargetingKeywords:(id)arg0 ;
-(void)addAllowedStorefrontIDs:(id)arg0 ;
-(void)addBlockedStorefrontIDs:(id)arg0 ;
-(void)addChannelSectionFeedConfigurations:(id)arg0 ;
-(void)addChannelSectionIDs:(id)arg0 ;
-(void)addIAdCategories:(id)arg0 ;
-(void)addIAdKeywords:(id)arg0 ;
-(void)addLatestIssueIDs:(id)arg0 ;
-(void)addPublisherPaidBundlePurchaseIDs:(id)arg0 ;
-(void)addPublisherPaidFeldsparablePurchaseIDs:(id)arg0 ;
-(void)addPublisherSpecifiedArticleIds:(id)arg0 ;
-(void)addPurchaseOfferableConfiguration:(id)arg0 ;
-(void)addRecentIssueIDs:(id)arg0 ;
-(void)clearAdTargetingKeywords;
-(void)clearAllowedStorefrontIDs;
-(void)clearBlockedStorefrontIDs;
-(void)clearChannelSectionFeedConfigurations;
-(void)clearChannelSectionIDs;
-(void)clearIAdCategories;
-(void)clearIAdKeywords;
-(void)clearLatestIssueIDs;
-(void)clearPublisherPaidBundlePurchaseIDs;
-(void)clearPublisherPaidFeldsparablePurchaseIDs;
-(void)clearPublisherSpecifiedArticleIds;
-(void)clearPurchaseOfferableConfigurations;
-(void)clearRecentIssueIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif