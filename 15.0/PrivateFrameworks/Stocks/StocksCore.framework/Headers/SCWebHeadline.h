// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCWEBHEADLINE_H
#define SCWEBHEADLINE_H

@class NSString, NSArray, NSData, NSURL, FCCoverArt, NSDate, FCHeadlineExperimentalTitleMetadata, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, FCIssue, FCArticleAudioTrack, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, FCFeedPersonalizedItemScoreProfile, FCTopStoriesStyleConfiguration, NSSet, FCHeadlineThumbnail, FCColor;
@protocol FCHeadlineProviding, FCHeadlineMetadata, FCNativeAdProviding, FCChannelProviding, FCHeadlineStocksFields;

#import <Foundation/Foundation.h>


@interface SCWebHeadline : NSObject <FCHeadlineProviding>



@property (readonly, copy, nonatomic) NSString *accessoryText;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, copy, nonatomic) NSObject<FCHeadlineMetadata> *appliedOverrideMetadata;
@property (readonly, copy, nonatomic) NSString *articleID; // ivar: _articleID
@property (readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property (readonly, nonatomic) NSObject<FCNativeAdProviding> *associatedAd;
@property (readonly, copy, nonatomic) NSArray *authors;
@property (readonly, nonatomic) NSInteger backendArticleVersion;
@property (readonly, nonatomic) NSData *backingArticleRecordData;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, nonatomic) NSInteger bodyTextLength;
@property (readonly, nonatomic, getter=isBoundToContext) BOOL boundToContext;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, copy, nonatomic) NSString *callToActionText;
@property (readonly, nonatomic) BOOL canBePurchased;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) NSUInteger contentType;
@property (readonly, copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, nonatomic) FCCoverArt *coverArt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableBookmarking;
@property (readonly, nonatomic, getter=isDisplayingAsNativeAd) BOOL displayAsNativeAd;
@property (readonly, copy, nonatomic) NSDate *displayDate;
@property (readonly, copy, nonatomic) NSString *excerpt;
@property (readonly, copy, nonatomic) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic, getter=isFeatureCandidate) BOOL featureCandidate;
@property (readonly, nonatomic) NSUInteger feedHalfLifeMilliseconds;
@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, nonatomic) NSUInteger feedOrder;
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) CGFloat globalUserFeedback;
@property (readonly, nonatomic) NSUInteger halfLife;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, nonatomic, getter=isHiddenFromFeeds) BOOL hiddenFromFeeds;
@property (readonly, copy, nonatomic) NSArray *iAdCategories;
@property (readonly, copy, nonatomic) NSArray *iAdKeywords;
@property (readonly, copy, nonatomic) NSArray *iAdSectionIDs;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isDraft;
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, nonatomic) BOOL isFullTrackAvailableToAll;
@property (readonly, nonatomic) BOOL isLocalDraft;
@property (readonly, nonatomic) BOOL isTopStory;
@property (readonly, nonatomic, getter=isIssueOnly) BOOL issueOnly;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSDate *lastFetchedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) CGFloat layeredThumbnailAspectRatio;
@property (readonly, nonatomic) NSString *layeredThumbnailJSON;
@property (readonly, copy, nonatomic) NSArray *linkedArticleIDs;
@property (readonly, copy, nonatomic) NSArray *linkedIssueIDs;
@property (readonly, copy, nonatomic) NSString *localDraftPath;
@property (readonly, copy, nonatomic) FCIssue *masterIssue;
@property (readonly, nonatomic) NSInteger minimumNewsVersion;
@property (readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs;
@property (readonly, nonatomic) FCArticleAudioTrack *narrativeTrack;
@property (readonly, nonatomic) FCArticleAudioTrack *narrativeTrackSample;
@property (readonly, nonatomic) NSString *narrativeTrackTextRanges;
@property (readonly, copy, nonatomic) NSArray *narrators;
@property (readonly, copy, nonatomic) NSString *nativeAdCampaignData;
@property (readonly, nonatomic) BOOL needsRapidUpdates;
@property (readonly, nonatomic) NSUInteger order;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt;
@property (readonly, nonatomic, getter=isPressRelease) BOOL pressRelease;
@property (readonly, copy, nonatomic) NSString *primaryAudience;
@property (readonly, copy, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (readonly, nonatomic) NSUInteger publishDateMilliseconds;
@property (readonly, nonatomic) NSInteger publisherArticleVersion;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, copy, nonatomic) NSString *referencedArticleID;
@property (readonly, copy, nonatomic) NSArray *relatedArticleIDs;
@property (readonly, nonatomic) NSUInteger role;
@property (readonly, nonatomic) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (readonly, copy, nonatomic) NSString *shortExcerpt; // ivar: _shortExcerpt
@property (readonly, nonatomic) BOOL showBundleSoftPaywall;
@property (readonly, nonatomic) BOOL showMinimalChrome;
@property (readonly, nonatomic) BOOL showPublisherLogo;
@property (readonly, nonatomic) BOOL showSubscriptionRequiredText;
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly, copy, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (readonly, nonatomic, getter=isSponsored) BOOL sponsored;
@property (readonly, copy, nonatomic) NSString *sponsoredBy;
@property (readonly, nonatomic) NSObject<FCHeadlineStocksFields> *stocksFields;
@property (readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle;
@property (readonly, nonatomic) NSUInteger storyType;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *surfacedByArticleListID;
@property (readonly, copy, nonatomic) NSString *surfacedByBinID;
@property (readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property (readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property (readonly, copy, nonatomic) NSSet *surfacedByTagIDs;
@property (readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnail;
@property (readonly, nonatomic) CGRect thumbnailFocalFrame;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ;
@property (readonly, nonatomic) FCColor *thumbnailImageAccentColor;
@property (readonly, nonatomic) FCColor *thumbnailImageBackgroundColor;
@property (readonly, nonatomic) FCColor *thumbnailImagePrimaryColor;
@property (readonly, nonatomic) FCColor *thumbnailImageTextColor;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property (readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property (readonly, nonatomic) CGFloat tileProminenceScore;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *titleCompact;
@property (readonly, nonatomic) NSUInteger topStoryType;
@property (readonly, copy, nonatomic) NSArray *topicIDs;
@property (readonly, copy, nonatomic) NSArray *topics;
@property (readonly, nonatomic) BOOL useTransparentNavigationBar;
@property (readonly, nonatomic) BOOL usesImageOnTopLayout;
@property (readonly, copy, nonatomic) NSString *versionIdentifier;
@property (readonly, copy, nonatomic) NSString *videoCallToActionTitle;
@property (readonly, copy, nonatomic) NSURL *videoCallToActionURL;
@property (readonly, nonatomic) CGFloat videoDuration;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) BOOL webEmbedsEnabled;


-(CGFloat)globalScore;
-(NSInteger)feedElementType;
-(NSUInteger)articleContentType;
-(id)endOfArticleTopicIDs;
-(id)initWithURL:(id)arg0 title:(id)arg1 shortExcerpt:(id)arg2 publishDate:(id)arg3 sourceName:(id)arg4 ;
-(void)enumerateTopicCohortsWithBlock:(id)arg0 ;


@end


#endif