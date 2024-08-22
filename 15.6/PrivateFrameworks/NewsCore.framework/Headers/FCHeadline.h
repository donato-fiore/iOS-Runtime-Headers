// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCHEADLINE_H
#define FCHEADLINE_H

@class NSString, NSArray, NSData, NSURL, NSDate, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, NSSet;
@protocol FCHeadlineProviding, FCHeadlineMetadata, FCNativeAdProviding, FCChannelProviding, FCHeadlineStocksFields;

#import <Foundation/Foundation.h>

#import "FCCoverArt.h"
#import "FCHeadlineExperimentalTitleMetadata.h"
#import "FCIssue.h"
#import "FCArticleAudioTrack.h"
#import "FCFeedPersonalizedItemScoreProfile.h"
#import "FCTopStoriesStyleConfiguration.h"
#import "FCHeadlineThumbnail.h"
#import "FCColor.h"
#import "FCAssetHandle.h"

@interface FCHeadline : NSObject <FCHeadlineProviding>



@property (copy, nonatomic) NSString *accessoryText; // ivar: _accessoryText
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, copy, nonatomic) NSObject<FCHeadlineMetadata> *appliedOverrideMetadata;
@property (copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (readonly, nonatomic) NSString *articleRecirculationConfigJSON; // ivar: _articleRecirculationConfigJSON
@property (retain, nonatomic) NSObject<FCNativeAdProviding> *associatedAd; // ivar: _associatedAd
@property (readonly, copy, nonatomic) NSArray *authors; // ivar: _authors
@property (readonly, nonatomic) NSInteger backendArticleVersion; // ivar: _backendArticleVersion
@property (readonly, nonatomic) NSData *backingArticleRecordData; // ivar: _backingArticleRecordData
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (readonly, nonatomic) NSInteger bodyTextLength; // ivar: _bodyTextLength
@property (readonly, nonatomic, getter=isBoundToContext) BOOL boundToContext; // ivar: _boundToContext
@property (nonatomic, getter=isBundlePaid) BOOL bundlePaid; // ivar: _bundlePaid
@property (copy, nonatomic) NSString *callToActionText; // ivar: _callToActionText
@property (readonly, nonatomic) BOOL canBePurchased; // ivar: _canBePurchased
@property (copy, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, nonatomic) FCCoverArt *coverArt; // ivar: _coverArt
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableBookmarking; // ivar: _disableBookmarking
@property (nonatomic, getter=isDisplayingAsNativeAd) BOOL displayAsNativeAd; // ivar: _displayAsNativeAd
@property (copy, nonatomic) NSDate *displayDate; // ivar: _displayDate
@property (copy, nonatomic) NSString *excerpt; // ivar: _excerpt
@property (readonly, copy, nonatomic) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata; // ivar: _experimentalTitleMetadata
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic, getter=isFeatureCandidate) BOOL featureCandidate; // ivar: _featureCandidate
@property (readonly, nonatomic) NSUInteger feedHalfLifeMilliseconds;
@property (readonly, copy, nonatomic) NSString *feedID;
@property (nonatomic) NSUInteger feedOrder; // ivar: _feedOrder
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // ivar: _globalCohorts
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats; // ivar: _globalConversionStats
@property (nonatomic) CGFloat globalUserFeedback; // ivar: _globalUserFeedback
@property (nonatomic) NSUInteger halfLife; // ivar: _halfLife
@property (readonly, nonatomic) NSUInteger halfLifeOverride;
@property (readonly, nonatomic) BOOL hasAudioTrack; // ivar: _hasAudioTrack
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (nonatomic) BOOL hasThumbnail; // ivar: _hasThumbnail
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *headlineURL; // ivar: _headlineURL
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites; // ivar: _hiddenFromAutoFavorites
@property (readonly, nonatomic, getter=isHiddenFromFeeds) BOOL hiddenFromFeeds; // ivar: _hiddenFromFeeds
@property (readonly, nonatomic) BOOL hideModalCloseButton; // ivar: _hideModalCloseButton
@property (readonly, copy, nonatomic) NSArray *iAdCategories; // ivar: _iAdCategories
@property (readonly, copy, nonatomic) NSArray *iAdKeywords; // ivar: _iAdKeywords
@property (readonly, copy, nonatomic) NSArray *iAdSectionIDs; // ivar: _iAdSectionIDs
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isDraft; // ivar: _isDraft
@property (nonatomic) BOOL isEvergreen; // ivar: _isEvergreen
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, nonatomic) BOOL isFullTrackAvailableToAll;
@property (readonly, nonatomic) BOOL isLocalDraft; // ivar: _isLocalDraft
@property (readonly, nonatomic) BOOL isTopStory;
@property (readonly, nonatomic, getter=isIssueOnly) BOOL issueOnly; // ivar: _issueOnly
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, copy, nonatomic) NSDate *lastFetchedDate; // ivar: _lastFetchedDate
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) CGFloat layeredThumbnailAspectRatio; // ivar: _layeredThumbnailAspectRatio
@property (readonly, nonatomic) NSString *layeredThumbnailJSON; // ivar: _layeredThumbnailJSON
@property (readonly, copy, nonatomic) NSArray *linkedArticleIDs; // ivar: _linkedArticleIDs
@property (readonly, copy, nonatomic) NSArray *linkedIssueIDs; // ivar: _linkedIssueIDs
@property (readonly, copy, nonatomic) NSString *localDraftPath; // ivar: _localDraftPath
@property (readonly, copy, nonatomic) FCIssue *masterIssue; // ivar: _masterIssue
@property (readonly, nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs; // ivar: _moreFromPublisherArticleIDs
@property (readonly, nonatomic) FCArticleAudioTrack *narrativeTrack; // ivar: _narrativeTrack
@property (readonly, copy, nonatomic) NSArray *narrativeTrackBuddyArticleIDs; // ivar: _narrativeTrackBuddyArticleIDs
@property (readonly, nonatomic) NSString *narrativeTrackPreferredUpsellVariantID; // ivar: _narrativeTrackPreferredUpsellVariantID
@property (readonly, nonatomic) FCArticleAudioTrack *narrativeTrackSample; // ivar: _narrativeTrackSample
@property (readonly, nonatomic) NSString *narrativeTrackTextRanges; // ivar: _narrativeTrackTextRanges
@property (readonly, copy, nonatomic) NSArray *narrators; // ivar: _narrators
@property (copy, nonatomic) NSString *nativeAdCampaignData; // ivar: _nativeAdCampaignData
@property (readonly, nonatomic) BOOL needsRapidUpdates; // ivar: _needsRapidUpdates
@property (readonly, nonatomic) NSUInteger order;
@property (nonatomic, getter=isPaid) BOOL paid; // ivar: _paid
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector; // ivar: _personalizationVector
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt; // ivar: _personalizationVectorAlt
@property (readonly, nonatomic, getter=isPressRelease) BOOL pressRelease; // ivar: _pressRelease
@property (readonly, copy, nonatomic) NSString *primaryAudience; // ivar: _primaryAudience
@property (copy, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (readonly, nonatomic) NSUInteger publishDateMilliseconds;
@property (readonly, nonatomic) NSInteger publisherArticleVersion; // ivar: _publisherArticleVersion
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts; // ivar: _publisherCohorts
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats; // ivar: _publisherConversionStats
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs; // ivar: _publisherSpecifiedArticleIDs
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata; // ivar: _publisherTagMetadata
@property (readonly, copy, nonatomic) NSString *referencedArticleID; // ivar: _referencedArticleID
@property (readonly, copy, nonatomic) NSArray *relatedArticleIDs; // ivar: _relatedArticleIDs
@property (nonatomic) NSUInteger role; // ivar: _role
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile; // ivar: _scoreProfile
@property (copy, nonatomic) NSString *shortExcerpt; // ivar: _shortExcerpt
@property (readonly, nonatomic) BOOL showBundleSoftPaywall; // ivar: _showBundleSoftPaywall
@property (readonly, nonatomic) BOOL showMinimalChrome; // ivar: _showMinimalChrome
@property (readonly, nonatomic) BOOL showPublisherLogo;
@property (nonatomic) BOOL showSubscriptionRequiredText; // ivar: _showSubscriptionRequiredText
@property (copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel; // ivar: _sourceChannel
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (copy, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (nonatomic, getter=isSponsored) BOOL sponsored; // ivar: _sponsored
@property (copy, nonatomic) NSString *sponsoredBy; // ivar: _sponsoredBy
@property (readonly, nonatomic) NSObject<FCHeadlineStocksFields> *stocksFields; // ivar: _stocksFields
@property (retain, nonatomic) FCTopStoriesStyleConfiguration *storyStyle; // ivar: _storyStyle
@property (nonatomic) NSUInteger storyType; // ivar: _storyType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *surfacedByArticleListID; // ivar: _surfacedByArticleListID
@property (copy, nonatomic) NSString *surfacedByBinID; // ivar: _surfacedByBinID
@property (copy, nonatomic) NSString *surfacedByChannelID; // ivar: _surfacedByChannelID
@property (copy, nonatomic) NSString *surfacedBySectionID; // ivar: _surfacedBySectionID
@property (copy, nonatomic) NSSet *surfacedByTagIDs; // ivar: _surfacedByTagIDs
@property (copy, nonatomic) NSString *surfacedByTopicID; // ivar: _surfacedByTopicID
@property (retain, nonatomic) FCHeadlineThumbnail *thumbnail; // ivar: _thumbnail
@property (nonatomic) CGRect thumbnailFocalFrame; // ivar: _thumbnailFocalFrame
@property (retain, nonatomic) FCHeadlineThumbnail *thumbnailHQ; // ivar: _thumbnailHQ
@property (readonly, nonatomic) FCColor *thumbnailImageAccentColor; // ivar: _thumbnailImageAccentColor
@property (readonly, nonatomic) FCColor *thumbnailImageBackgroundColor; // ivar: _thumbnailImageBackgroundColor
@property (readonly, nonatomic) FCColor *thumbnailImagePrimaryColor; // ivar: _thumbnailImagePrimaryColor
@property (readonly, nonatomic) FCColor *thumbnailImageTextColor; // ivar: _thumbnailImageTextColor
@property (retain, nonatomic) FCHeadlineThumbnail *thumbnailLQ; // ivar: _thumbnailLQ
@property (retain, nonatomic) FCHeadlineThumbnail *thumbnailMedium; // ivar: _thumbnailMedium
@property (retain, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ; // ivar: _thumbnailUltraHQ
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget; // ivar: _thumbnailWidget
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ; // ivar: _thumbnailWidgetHQ
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ; // ivar: _thumbnailWidgetLQ
@property (nonatomic) CGFloat tileProminenceScore; // ivar: _personalizedScore
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *titleCompact; // ivar: _titleCompact
@property (nonatomic) NSUInteger topStoryType; // ivar: _topStoryType
@property (copy, nonatomic) NSArray *topicIDs; // ivar: _topicIDs
@property (readonly, copy, nonatomic) NSArray *topics; // ivar: _topics
@property (readonly, nonatomic) BOOL useTransparentNavigationBar; // ivar: _useTransparentNavigationBar
@property (nonatomic) BOOL usesImageOnTopLayout; // ivar: _usesImageOnTopLayout
@property (readonly, copy, nonatomic) NSString *versionIdentifier;
@property (readonly, copy, nonatomic) NSString *videoCallToActionTitle; // ivar: _videoCallToActionTitle
@property (readonly, copy, nonatomic) NSURL *videoCallToActionURL; // ivar: _videoCallToActionURL
@property (readonly, nonatomic) CGFloat videoDuration; // ivar: _videoDuration
@property (readonly, nonatomic) FCAssetHandle *videoStillImage; // ivar: _videoStillImage
@property (readonly, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, nonatomic) BOOL webEmbedsEnabled; // ivar: _webEmbedsEnabled


+(id)emptyHeadline;
+(id)emptyHeadlineWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGap;
-(NSUInteger)articleContentType;
-(id)contentWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)applyHeadlineMetadata:(id)arg0 configuration:(id)arg1 ;
-(void)assignStoryType:(NSUInteger)arg0 withConfiguration:(id)arg1 ;
-(void)enumerateTopicCohortsWithBlock:(id)arg0 ;
-(void)enumerateTopicConversionStatsWithBlock:(id)arg0 ;
-(void)overrideDisplayDate:(id)arg0 ;
-(void)overrideShortExcerpt:(id)arg0 ;
-(void)overrideTitle:(id)arg0 ;


@end


#endif