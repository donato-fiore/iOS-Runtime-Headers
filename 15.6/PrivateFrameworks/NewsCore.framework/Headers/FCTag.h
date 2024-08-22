// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCTAG_H
#define FCTAG_H

@class NSString, NTPBFeedConfiguration, NSArray, NSData, NSDate, NTPBPublisherPaidDescriptionStrings, NTPBTagRecord;
@protocol FCTagStocksFields, FCTagProviding, FCChannelProviding, FCSectionProviding, FCTopicProviding, FCFeedTheming, FCContentArchivable, FCSportsProviding, FCSportsTheming;

#import <Foundation/Foundation.h>

#import "FCInterestToken.h"
#import "FCAssetManager.h"
#import "FCColor.h"
#import "FCTagBanner.h"
#import "FCContentArchive.h"
#import "FCContentColorMap.h"
#import "FCAssetHandle.h"
#import "FCColorGradient.h"
#import "FCHeadlineTemplate.h"
#import "FCTextInfo.h"
#import "FCPaywallConfiguration.h"
#import "FCSectionSupergroupKnobs.h"

@interface FCTag : NSObject <FCTagStocksFields, FCTagProviding, FCChannelProviding, FCSectionProviding, FCTopicProviding, FCFeedTheming, FCContentArchivable, FCSportsProviding, FCSportsTheming>

 {
    NSString *_groupTitleColorHexString;
    NSString *_groupDarkStyleTitleColorHexString;
    FCInterestToken *_tagInterestToken;
    NSUInteger _userFacingTagTypeOverride;
    NTPBFeedConfiguration *_feedConfiguration;
    NSArray *_sectionFeedConfigurations;
    NSString *_backgroundColorHexString;
    NSString *_darkStyleBackgroundColorHexString;
    NSString *_foregroundColorHexString;
    NSString *_darkStyleForegroundColorHexString;
    FCAssetManager *_assetManager;
}


@property (readonly, copy, nonatomic) NSString *UMCCanonicalID;
@property (readonly, nonatomic) BOOL allowCustomBottomStyle;
@property (readonly, nonatomic) NSArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property (readonly, nonatomic) NSObject<FCChannelProviding> *asChannel;
@property (readonly, nonatomic) NSObject<FCSectionProviding> *asSection;
@property (readonly, nonatomic) NSObject<FCSportsProviding> *asSports;
@property (readonly, nonatomic) NSObject<FCTopicProviding> *asTopic;
@property (readonly, copy, nonatomic) NSString *backIssuesListID; // ivar: _backIssuesListID
@property (readonly, nonatomic) FCColor *backgroundColor;
@property (readonly, nonatomic) NSData *backingTagRecordData;
@property (nonatomic) CGFloat bannerImageBaselineOffsetPercentage; // ivar: _bannerImageBaselineOffsetPercentage
@property (readonly, nonatomic) FCTagBanner *bannerImageForMask; // ivar: _bannerImageForMask
@property (readonly, nonatomic) FCTagBanner *bannerImageForThemeBackground; // ivar: _bannerImageForThemeBackground
@property (readonly, nonatomic) FCTagBanner *bannerImageForWhiteBackground; // ivar: _bannerImageForWhiteBackground
@property (nonatomic) CGFloat bannerImageScale; // ivar: _bannerImageScale
@property (readonly, nonatomic) NSArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (readonly, nonatomic) NSUInteger channelType;
@property (readonly, nonatomic) FCTagBanner *compactBannerImage; // ivar: _compactBannerImage
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, nonatomic) FCContentColorMap *contentColorMap; // ivar: _contentColorMap
@property (readonly, nonatomic) NSInteger contentProvider; // ivar: _contentProvider
@property (readonly, nonatomic) FCAssetHandle *coverImageAssetHandle; // ivar: _coverImageAssetHandle
@property (readonly, copy, nonatomic) NSArray *currentIssueIDs; // ivar: _currentIssueIDs
@property (readonly, nonatomic) FCColor *darkStyleBackgroundColor;
@property (readonly, nonatomic) FCColor *darkStyleForegroundColor;
@property (readonly, nonatomic) FCColorGradient *darkStyleNavigationChromeBackgroundGradient; // ivar: _darkStyleNavigationChromeBackgroundGradient
@property (readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImage; // ivar: _darkStyleNavigationChromeBackgroundImage
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FCTagBanner *defaultBannerImage;
@property (readonly, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate; // ivar: _defaultHeadlineTemplate
@property (readonly, copy, nonatomic) NSString *defaultSectionID; // ivar: _defaultSectionID
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle; // ivar: _feedNavImageAssetHandle
@property (readonly, nonatomic) NSInteger feedType;
@property (readonly, nonatomic) FCColor *foregroundColor;
@property (readonly, copy, nonatomic) FCColor *groupDarkStyleTitleColor;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) FCColor *groupTitleColor;
@property (readonly, nonatomic) NSUInteger groupingEligibility; // ivar: _groupingEligibility
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) FCTextInfo *headlineBylineTextInfo; // ivar: _headlineBylineTextInfo
@property (readonly, copy, nonatomic) FCTextInfo *headlineExcerptTextInfo; // ivar: _headlineExcerptTextInfo
@property (readonly, copy, nonatomic) FCTextInfo *headlineTitleTextInfo; // ivar: _headlineTitleTextInfo
@property (readonly, nonatomic) BOOL hideAccessoryText; // ivar: _hideAccessoryText
@property (readonly, copy, nonatomic) NSString *highlightsArticleListID; // ivar: _highlightsArticleListID
@property (readonly, nonatomic) NSArray *iAdCategories; // ivar: _iAdCategories
@property (readonly, nonatomic) NSArray *iAdKeywords; // ivar: _iAdKeywords
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isArticleReadCountReportingEnabled; // ivar: _isArticleReadCountReportingEnabled
@property (readonly, nonatomic) BOOL isAutoDarkModeEnabled; // ivar: _isAutoDarkModeEnabled
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isDark;
@property (readonly, nonatomic) BOOL isDeprecated; // ivar: _isDeprecated
@property (readonly, nonatomic) BOOL isExplicitContent; // ivar: _isExplicitContent
@property (readonly, nonatomic) BOOL isHidden; // ivar: _isHidden
@property (readonly, nonatomic) BOOL isInternal; // ivar: _isInternal
@property (readonly, nonatomic) BOOL isLocal; // ivar: _isLocal
@property (readonly, nonatomic) BOOL isMagazine; // ivar: _isMagazine
@property (readonly, nonatomic) BOOL isNewspaper; // ivar: _isNewspaper
@property (readonly, nonatomic) BOOL isNotificationEnabled; // ivar: _isNotificationEnabled
@property (readonly, nonatomic) BOOL isPublic; // ivar: _isPublic
@property (readonly, nonatomic) BOOL isRealTimeTrackingEnabled; // ivar: _isRealTimeTrackingEnabled
@property (readonly, nonatomic) BOOL isSandbox; // ivar: _isSandbox
@property (readonly, nonatomic) BOOL isSensitiveTopic; // ivar: _isSensitiveTopic
@property (readonly, nonatomic) BOOL isSportsRecommendable; // ivar: _isSportsRecommendable
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, nonatomic) BOOL isWhite;
@property (readonly, nonatomic) BOOL isWhitelisted;
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSDate *loadDate; // ivar: _loadDate
@property (readonly, nonatomic) NSArray *loadableFonts;
@property (readonly, nonatomic) FCAssetHandle *logoImageAssetHandle; // ivar: _logoImageAssetHandle
@property (readonly, copy, nonatomic) NSString *magazineGenre; // ivar: _magazineGenre
@property (readonly, nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *nameCompact; // ivar: _nameCompact
@property (retain, nonatomic) FCAssetHandle *nameImageAssetHandle; // ivar: _nameImageAssetHandle
@property (readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle; // ivar: _nameImageCompactAssetHandle
@property (readonly, nonatomic) FCAssetHandle *nameImageForDarkBackgroundAssetHandle; // ivar: _nameImageForDarkBackgroundAssetHandle
@property (readonly, nonatomic) FCEdgeInsets nameImageForDarkBackgroundInsets; // ivar: _nameImageForDarkBackgroundInsets
@property (readonly, nonatomic) CGSize nameImageForDarkBackgroundSize; // ivar: _nameImageForDarkBackgroundSize
@property (readonly, nonatomic) FCEdgeInsets nameImageInsets; // ivar: _nameImageInsets
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeAssetHandle; // ivar: _nameImageLargeAssetHandle
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeMaskAssetHandle; // ivar: _nameImageLargeMaskAssetHandle
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskAssetHandle; // ivar: _nameImageMaskAssetHandle
@property (readonly, nonatomic) FCEdgeInsets nameImageMaskInsets; // ivar: _nameImageMaskInsets
@property (readonly, nonatomic) CGSize nameImageMaskSize; // ivar: _nameImageMaskSize
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle; // ivar: _nameImageMaskWidgetHQAssetHandle
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle; // ivar: _nameImageMaskWidgetLQAssetHandle
@property (nonatomic) CGSize nameImageSize; // ivar: _nameImageSize
@property (readonly, nonatomic) FCColorGradient *navigationChromeBackgroundGradient; // ivar: _navigationChromeBackgroundGradient
@property (readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImage; // ivar: _navigationChromeBackgroundImage
@property (readonly, copy, nonatomic) FCPaywallConfiguration *paidBundlePaywallConfiguration; // ivar: _paidBundlePaywallConfiguration
@property (readonly, copy, nonatomic) NSString *parentID; // ivar: _parentID
@property (copy, nonatomic) NSString *pptFeedIDOverride; // ivar: _pptFeedIDOverride
@property (readonly, copy, nonatomic) NSString *primaryAudience; // ivar: _primaryAudience
@property (readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL; // ivar: _publisherPaidAuthorizationURL
@property (readonly, nonatomic) NSArray *publisherPaidBundlePurchaseIDs; // ivar: _publisherPaidBundlePurchaseIDs
@property (readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings; // ivar: _publisherPaidDescriptionStrings
@property (readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs; // ivar: _publisherPaidFeldsparablePurchaseIDs
@property (readonly, nonatomic) BOOL publisherPaidLeakyPaywallOptOut; // ivar: _publisherPaidLeakyPaywallOptOut
@property (readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations; // ivar: _publisherPaidOfferableConfigurations
@property (readonly, copy, nonatomic) NSString *publisherPaidVerificationURL; // ivar: _publisherPaidVerificationURL
@property (readonly, nonatomic) BOOL publisherPaidWebAccessOptIn; // ivar: _publisherPaidWebAccessOptIn
@property (readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL; // ivar: _publisherPaidWebAccessURL
@property (readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs; // ivar: _publisherSpecifiedArticleIDs
@property (readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate; // ivar: _publisherSpecifiedArticleIDsModifiedDate
@property (readonly, copy, nonatomic) NSArray *recentIssueIDs; // ivar: _recentIssueIDs
@property (readonly, copy, nonatomic) NSString *replacementID; // ivar: _replacementID
@property (readonly, nonatomic) NSInteger score; // ivar: _score
@property (readonly, copy, nonatomic) NSArray *sectionIDs; // ivar: _sectionIDs
@property (readonly, copy, nonatomic) NSString *sportsLocationDescription;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageAssetHandle; // ivar: _sportsLogoImageAssetHandle
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageCompactAssetHandle; // ivar: _sportsLogoImageCompactAssetHandle
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageLargeAssetHandle; // ivar: _sportsLogoImageLargeAssetHandle
@property (readonly, copy, nonatomic) NSString *sportsNameAbbreviation;
@property (readonly, nonatomic) FCColor *sportsPrimaryColor;
@property (readonly, nonatomic) NSData *sportsRecommendationMappingsJSON;
@property (readonly, nonatomic) FCColor *sportsSecondaryColor; // ivar: _sportsSecondaryColor
@property (readonly, copy, nonatomic) NSObject<FCSportsTheming> *sportsTheme;
@property (readonly, nonatomic) NSUInteger sportsType;
@property (readonly, copy, nonatomic) NSString *stocksFeedConfigJSON;
@property (readonly, nonatomic) NSObject<FCTagStocksFields> *stocksFields;
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *superfeedConfigResourceID; // ivar: _superfeedConfigResourceID
@property (readonly, nonatomic) NSString *supergroupConfigJson; // ivar: _supergroupConfigJson
@property (readonly, nonatomic) FCSectionSupergroupKnobs *supergroupKnobs; // ivar: _supergroupKnobs
@property (readonly, nonatomic) NSString *supergroupKnobsJson; // ivar: _supergroupKnobsJson
@property (readonly, nonatomic) BOOL supportsNotifications;
@property (readonly, nonatomic) NTPBTagRecord *tagRecord; // ivar: _tagRecord
@property (readonly, nonatomic) FCInterestToken *tagRecordInterestToken; // ivar: _tagRecordInterestToken
@property (readonly, nonatomic) NSUInteger tagType; // ivar: _tagType
@property (readonly, copy, nonatomic) NSObject<FCFeedTheming> *theme;
@property (copy, nonatomic) NSString *titleDisplayPrefix; // ivar: _titleDisplayPrefix
@property (copy, nonatomic) NSString *titleDisplaySuffix; // ivar: _titleDisplaySuffix
@property (readonly, nonatomic) NSUInteger userFacingTagType;
@property (readonly, copy, nonatomic) NSString *versionKey; // ivar: _versionKey


-(BOOL)isAuthenticationSetup;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTag:(id)arg0 ;
-(BOOL)isNoLongerAvailable;
-(BOOL)isPurchaseSetup;
-(id)authorizationURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)feedIDForBin:(NSInteger)arg0 ;
-(id)freeFeedIDForBin:(NSInteger)arg0 ;
-(id)freeFeedIDForSection:(id)arg0 bin:(NSInteger)arg1 ;
-(id)initChannelForTestingWithIdentifier:(id)arg0 name:(id)arg1 defaultSection:(id)arg2 publisherAuthorizationURL:(id)arg3 publisherVerificationURL:(id)arg4 ;
-(id)initChannelForTestingWithIdentifier:(id)arg0 name:(id)arg1 publisherPaidBundlePurchaseIDs:(id)arg2 ;
-(id)initChannelFromNotificationWithIdentifier:(id)arg0 name:(id)arg1 nameImageAssetHandle:(id)arg2 nameImageMaskAssetHandle:(id)arg3 ;
-(id)initForTestingWithTagType:(NSUInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;
-(id)initWithData:(id)arg0 context:(id)arg1 ;
-(id)initWithTagMetadata:(id)arg0 assetManager:(id)arg1 ;
-(id)initWithTagRecord:(id)arg0 assetManager:(id)arg1 interestToken:(id)arg2 ;
-(id)initWithTagType:(NSUInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;
-(id)paidFeedIDForBin:(NSInteger)arg0 ;
-(id)paidFeedIDForSection:(id)arg0 bin:(NSInteger)arg1 ;
-(id)prefetchPurchaseOffer;
-(void)ppt_overrideFeedID:(id)arg0 ;


@end


#endif