// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSPORTSEVENT_H
#define FCSPORTSEVENT_H

@class NSString, NSArray, NSData, NSDate, NTPBPublisherPaidDescriptionStrings, NSDictionary;
@protocol FCTagProviding, FCSportsEventProviding, FCSportsTheming, FCTopicProviding, FCChannelProviding, FCSectionProviding, FCSportsProviding, FCTagStocksFields, FCFeedTheming;

#import <Foundation/Foundation.h>

#import "FCInterestToken.h"
#import "FCAssetHandle.h"
#import "FCColor.h"
#import "FCPaywallConfiguration.h"
#import "FCSportsRecommendationMappings.h"
#import "FCSectionSupergroupKnobs.h"

@interface FCSportsEvent : NSObject <FCTagProviding, FCSportsEventProviding, FCSportsTheming, FCTopicProviding>

 {
    BOOL _sportsEventPagesEnabled;
    FCInterestToken *_interestToken;
}


@property (readonly, copy, nonatomic) NSString *UMCCanonicalID; // ivar: _UMCCanonicalID
@property (readonly, nonatomic) NSArray *adTargetingKeywords; // ivar: _adTargetingKeywords
@property (readonly, nonatomic) NSArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property (readonly, nonatomic) NSObject<FCChannelProviding> *asChannel;
@property (readonly, nonatomic) NSObject<FCSectionProviding> *asSection;
@property (readonly, nonatomic) NSObject<FCSportsProviding> *asSports;
@property (readonly, nonatomic) NSObject<FCSportsEventProviding> *asSportsEvent;
@property (readonly, nonatomic) NSObject<FCTopicProviding> *asTopic;
@property (readonly, nonatomic) NSData *backingTagRecordData;
@property (readonly, nonatomic) NSArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (readonly, copy, nonatomic) NSString *compactDisplayName;
@property (readonly, nonatomic) NSInteger contentProvider;
@property (readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableBlock;
@property (readonly, nonatomic) BOOL disableFollow;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *eventArticleListID; // ivar: _eventArticleListID
@property (readonly, nonatomic) NSArray *eventCompetitorTags; // ivar: _eventCompetitorTags
@property (readonly, nonatomic) NSObject<FCSportsProviding> *eventLeagueTag; // ivar: _eventLeagueTag
@property (readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle;
@property (readonly, nonatomic) NSDate *fetchDate; // ivar: _fetchDate
@property (readonly, copy, nonatomic) FCColor *groupDarkStyleTitleColor;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) FCColor *groupTitleColor;
@property (readonly, nonatomic) NSUInteger groupingEligibility;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideAccessoryText;
@property (readonly, nonatomic) BOOL hideLocationInMasthead; // ivar: _hideLocationInMasthead
@property (readonly, copy, nonatomic) NSString *highlightsArticleListID; // ivar: _highlightsArticleListID
@property (readonly, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) NSArray *iAdKeywords;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isArticleReadCountReportingEnabled;
@property (readonly, nonatomic) BOOL isAutoDarkModeEnabled;
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isDeprecated; // ivar: _isDeprecated
@property (readonly, nonatomic) BOOL isExplicitContent;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) BOOL isInternal;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isMagazine;
@property (readonly, nonatomic) BOOL isMySports;
@property (readonly, nonatomic) BOOL isNewspaper;
@property (readonly, nonatomic) BOOL isNotificationEnabled;
@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, nonatomic) BOOL isRealTimeTrackingEnabled;
@property (readonly, nonatomic) BOOL isRouteable;
@property (readonly, nonatomic) BOOL isSandbox;
@property (readonly, nonatomic) BOOL isSensitiveTopic;
@property (readonly, nonatomic) BOOL isSports;
@property (readonly, nonatomic) BOOL isSportsEvent;
@property (readonly, nonatomic) BOOL isSportsRecommendable;
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) NSDate *loadDate; // ivar: _loadDate
@property (readonly, copy, nonatomic) NSString *magazineGenre;
@property (readonly, nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameCompact;
@property (readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeMaskAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (readonly, copy, nonatomic) FCPaywallConfiguration *paidBundlePaywallConfiguration;
@property (readonly, copy, nonatomic) NSString *primaryAudience;
@property (readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL;
@property (readonly, nonatomic) NSArray *publisherPaidBundlePurchaseIDs;
@property (readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (readonly, nonatomic) BOOL publisherPaidLeakyPaywallOptOut;
@property (readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations;
@property (readonly, copy, nonatomic) NSString *publisherPaidVerificationURL;
@property (readonly, nonatomic) BOOL publisherPaidWebAccessOptIn;
@property (readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL;
@property (readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property (readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property (readonly, nonatomic) NSDictionary *publisherSpecifiedArticles;
@property (readonly, copy, nonatomic) NSString *replacementID;
@property (readonly, nonatomic) NSDictionary *rosterResourceIDs; // ivar: _rosterResourceIDs
@property (readonly, nonatomic) NSInteger score;
@property (readonly, nonatomic) NSString *sportsData; // ivar: _sportsData
@property (readonly, nonatomic) FCColor *sportsEventNavigationForegroundColor; // ivar: _sportsEventNavigationForegroundColor
@property (readonly, copy, nonatomic) NSDate *sportsEventStartTime; // ivar: _sportsEventStartTime
@property (readonly, copy, nonatomic) NSString *sportsFullName; // ivar: _sportsFullName
@property (readonly, nonatomic) NSUInteger sportsLeagueType; // ivar: _sportsLeagueType
@property (readonly, copy, nonatomic) NSString *sportsLocation; // ivar: _sportsLocation
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageAssetHandle; // ivar: _sportsLogoImageAssetHandle
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageCompactAssetHandle; // ivar: _sportsLogoImageCompactAssetHandle
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageLargeAssetHandle; // ivar: _sportsLogoImageLargeAssetHandle
@property (readonly, nonatomic) NSInteger sportsLogoMastheadHorizontalPaddingOffset;
@property (readonly, nonatomic) NSInteger sportsLogoMastheadLeadingOffset;
@property (readonly, nonatomic) NSUInteger sportsLogoMastheadVisibility; // ivar: _sportsLogoMastheadVisibility
@property (readonly, copy, nonatomic) NSString *sportsNameAbbreviation; // ivar: _sportsNameAbbreviation
@property (readonly, copy, nonatomic) NSString *sportsNickname; // ivar: _sportsNickname
@property (readonly, nonatomic) FCColor *sportsPrimaryColor; // ivar: _sportsPrimaryColor
@property (readonly, copy, nonatomic) NSString *sportsPrimaryName; // ivar: _sportsPrimaryName
@property (readonly, nonatomic) FCSportsRecommendationMappings *sportsRecommendationMappings;
@property (readonly, nonatomic) NSData *sportsRecommendationMappingsJSON;
@property (readonly, nonatomic) FCColor *sportsSecondaryColor; // ivar: _sportsSecondaryColor
@property (readonly, copy, nonatomic) NSString *sportsSecondaryName; // ivar: _sportsSecondaryName
@property (readonly, copy, nonatomic) NSObject<FCSportsTheming> *sportsTheme;
@property (readonly, nonatomic) NSUInteger sportsType; // ivar: _sportsType
@property (readonly, copy, nonatomic) NSString *sportsTypeDisplayName; // ivar: _sportsTypeDisplayName
@property (readonly, copy, nonatomic) NSString *sportsTypePluralizedDisplayName; // ivar: _sportsTypePluralizedDisplayName
@property (readonly, nonatomic) NSObject<FCTagStocksFields> *stocksFields;
@property (readonly, nonatomic) CGFloat subscriptionRate;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *superfeedConfigResourceID; // ivar: _superfeedConfigResourceID
@property (readonly, nonatomic) NSString *supergroupConfigJson; // ivar: _supergroupConfigJson
@property (readonly, nonatomic) FCSectionSupergroupKnobs *supergroupKnobs; // ivar: _supergroupKnobs
@property (readonly, nonatomic) NSString *supergroupKnobsJson; // ivar: _supergroupKnobsJson
@property (readonly, nonatomic) NSUInteger tagType;
@property (readonly, copy, nonatomic) NSObject<FCFeedTheming> *theme;
@property (copy, nonatomic) NSString *titleDisplayPrefix; // ivar: _titleDisplayPrefix
@property (copy, nonatomic) NSString *titleDisplaySuffix; // ivar: _titleDisplaySuffix
@property (readonly, copy, nonatomic) NSArray *topLevelGroupsTagIdentifiers; // ivar: _topLevelGroupsTagIdentifiers
@property (readonly, copy, nonatomic) NSString *topLevelSportTagIdentifier; // ivar: _topLevelSportTagIdentifier
@property (readonly, nonatomic) NSUInteger userFacingTagType;
@property (readonly, copy, nonatomic) NSString *versionKey; // ivar: _versionKey


+(BOOL)isSportsEventIdentifier:(id)arg0 ;
-(BOOL)isAuthenticationSetup;
-(BOOL)isEqualToTag:(id)arg0 ;
-(BOOL)isNoLongerAvailable;
-(BOOL)isPurchaseSetup;
-(id)authorizationURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)feedIDForBin:(NSInteger)arg0 ;
-(id)freeFeedIDForBin:(NSInteger)arg0 ;
-(id)initWithSportsEventRecord:(id)arg0 eventCompetitorTags:(id)arg1 eventLeagueTag:(id)arg2 assetManager:(id)arg3 interestToken:(id)arg4 sportsEventPagesEnabled:(BOOL)arg5 ;
-(id)paidFeedIDForBin:(NSInteger)arg0 ;
-(id)prefetchPurchaseOffer;
-(void)_inflateSportsDataFromJSONDictionary:(id)arg0 ;
-(void)_inflateSportsThemeFromJSONDictionary:(id)arg0 ;
-(void)ppt_overrideFeedID:(id)arg0 ;


@end


#endif