// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNOTIFICATIONARTICLEHEADLINE_H
#define FCNOTIFICATIONARTICLEHEADLINE_H

@class NSString, NSURL, NSDate, NSArray, NSDictionary, NSNumber, COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration, NSData, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata;
@protocol FCFeedPersonalizingItem, FCChannelProviding;


#import "FCHeadline.h"
#import "FCHeadlineThumbnail.h"
#import "FCAssetHandle.h"
#import "FCTopStoriesStyleConfiguration.h"
#import "FCCoverArt.h"
#import "FCArticleAudioTrack.h"
#import "FCAssetManager.h"
#import "FCFeedPersonalizedItemScoreProfile.h"

@interface FCNotificationArticleHeadline : FCHeadline <FCFeedPersonalizingItem>

 {
    BOOL _sponsored;
    BOOL _deleted;
    BOOL _isDraft;
    BOOL _isLocalDraft;
    BOOL _featureCandidate;
    BOOL _needsRapidUpdates;
    BOOL _disableTapToChannel;
    BOOL _boundToContext;
    BOOL _hiddenFromFeeds;
    BOOL _pressRelease;
    BOOL _webEmbedsEnabled;
    BOOL _issueOnly;
    BOOL _showBundleSoftPaywall;
    BOOL _useTransparentNavigationBar;
    BOOL _disableBookmarking;
    BOOL _hideModalCloseButton;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSUInteger _contentType;
    NSString *_title;
    NSString *_primaryAudience;
    NSInteger _publisherArticleVersion;
    NSInteger _backendArticleVersion;
    id<FCChannelProviding> *_sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSURL *_videoURL;
    CGFloat _videoDuration;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    NSArray *_publisherSpecifiedArticleIDs;
    FCAssetHandle *_articleRecirculationConfigAssetHandle;
    NSUInteger _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    NSInteger _minimumNewsVersion;
    FCCoverArt *_coverArt;
    NSUInteger _role;
    NSArray *_linkedArticleIDs;
    NSArray *_linkedIssueIDs;
    NSString *_callToActionText;
    NSString *_surfacedByArticleListID;
    FCArticleAudioTrack *_narrativeTrack;
    FCArticleAudioTrack *_narrativeTrackSample;
    NSString *_narrativeTrackTextRanges;
    NSString *_layeredThumbnailJSON;
    CGFloat _layeredThumbnailAspectRatio;
    NSURL *_routeURL;
    CGRect _thumbnailFocalFrame;
}


@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (retain, nonatomic) NSDictionary *articlePayload; // ivar: _articlePayload
@property (retain, nonatomic) FCAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) NSInteger bodyTextLength; // ivar: _bodyTextLength
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid; // ivar: _bundlePaid
@property (retain, nonatomic) NSString *changeEtag; // ivar: _changeEtag
@property (retain, nonatomic) NSNumber *channelCohortScoresCTR; // ivar: _channelCohortScoresCTR
@property (readonly, copy, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData;
@property (retain, nonatomic) NSData *flintDocumentPrefetchedData; // ivar: _flintDocumentPrefetchedData
@property (retain, nonatomic) NSString *flintDocumentUrlString; // ivar: _flintDocumentUrlString
@property (retain, nonatomic) NSArray *flintFontResourceIDs; // ivar: _flintFontResourceIDs
@property (readonly, nonatomic) NSData *float16FullBodyEncoding;
@property (readonly, nonatomic) NSData *float16TitleEncoding;
@property (retain, nonatomic) NSNumber *globalCohortScoresCTR; // ivar: _globalCohortScoresCTR
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats;
@property (readonly, nonatomic) CGFloat globalUserFeedback;
@property (readonly, nonatomic) NSUInteger halfLife;
@property (readonly, nonatomic) NSUInteger halfLifeOverride;
@property (readonly, nonatomic) BOOL hasAudioTrack;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic) BOOL hasThumbnail; // ivar: _hasThumbnail
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites; // ivar: _hiddenFromAutoFavorites
@property (readonly, copy, nonatomic) NSArray *iAdCategories; // ivar: _iAdCategories
@property (readonly, nonatomic) BOOL isEvergreen;
@property (readonly, nonatomic) BOOL isFeatureCandidate;
@property (readonly, nonatomic) BOOL isFeatured;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic, getter=isPaid) BOOL paid; // ivar: _paid
@property (readonly, copy, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *publisherConversionStats;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *publisherTagMetadata;
@property (readonly, nonatomic) BOOL reduceVisibility; // ivar: _reduceVisibility
@property (retain) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *thumbnailPerceptualHash;
@property (retain, nonatomic) NSArray *topicCohortScoresCTRs; // ivar: _topicCohortScoresCTRs
@property (readonly, copy, nonatomic) NSArray *topicIDs; // ivar: _topicIDs
@property (readonly, copy, nonatomic) NSArray *topics; // ivar: _topics
@property (readonly, nonatomic) BOOL webConverted; // ivar: _webConverted


-(BOOL)disableBookmarking;
-(BOOL)disableTapToChannel;
-(BOOL)hideModalCloseButton;
-(BOOL)isBoundToContext;
-(BOOL)isDeleted;
-(BOOL)isDraft;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isIssueOnly;
-(BOOL)isLocalDraft;
-(BOOL)isPressRelease;
-(BOOL)isSponsored;
-(BOOL)isValid;
-(BOOL)needsRapidUpdates;
-(BOOL)showBundleSoftPaywall;
-(BOOL)useTransparentNavigationBar;
-(BOOL)webEmbedsEnabled;
-(CGFloat)layeredThumbnailAspectRatio;
-(CGFloat)videoDuration;
-(NSInteger)backendArticleVersion;
-(NSInteger)minimumNewsVersion;
-(NSInteger)publisherArticleVersion;
-(NSUInteger)contentType;
-(NSUInteger)role;
-(NSUInteger)storyType;
-(id)accessoryText;
-(id)allowedStorefrontIDs;
-(id)articleID;
-(id)articleRecirculationConfigAssetHandle;
-(id)blockedStorefrontIDs;
-(id)callToActionText;
-(id)contentURL;
-(id)contentWithContext:(id)arg0 ;
-(id)coverArt;
-(id)generateFlintDocumentAssetHandleForUrlString:(id)arg0 prefetchedData:(id)arg1 withAssetManager:(id)arg2 ;
-(id)generateThumbnailAssetHandleForUrlString:(id)arg0 withAssetManager:(id)arg1 ;
-(id)iAdKeywords;
-(id)iAdSectionIDs;
-(id)identifier;
-(id)initWithArticlePayload:(id)arg0 sourceChannel:(id)arg1 assetManager:(id)arg2 ;
-(id)lastFetchedDate;
-(id)lastModifiedDate;
-(id)layeredThumbnailJSON;
-(id)linkedArticleIDs;
-(id)linkedIssueIDs;
-(id)moreFromPublisherArticleIDs;
-(id)narrativeTrack;
-(id)narrativeTrackSample;
-(id)narrativeTrackTextRanges;
-(id)primaryAudience;
-(id)publisherSpecifiedArticleIDs;
-(id)referencedArticleID;
-(id)relatedArticleIDs;
-(id)routeURL;
-(id)shortExcerpt;
-(id)sourceChannel;
-(id)sourceName;
-(id)storyStyle;
-(id)surfacedByArticleListID;
-(id)thumbnail;
-(id)thumbnailHQ;
-(id)thumbnailLQ;
-(id)thumbnailMedium;
-(id)thumbnailUltraHQ;
-(id)title;
-(id)videoURL;
-(struct CGRect )thumbnailFocalFrame;
-(void)enumerateTopicCohortsWithBlock:(id)arg0 ;
-(void)enumerateTopicConversionStatsWithBlock:(id)arg0 ;
-(void)setAccessoryText:(id)arg0 ;
-(void)setArticleID:(id)arg0 ;
-(void)setCallToActionText:(id)arg0 ;
-(void)setContentType:(NSUInteger)arg0 ;
-(void)setDeleted:(BOOL)arg0 ;
-(void)setIdentifier:(id)arg0 ;
-(void)setRole:(NSUInteger)arg0 ;
-(void)setShortExcerpt:(id)arg0 ;
-(void)setSourceChannel:(id)arg0 ;
-(void)setSourceName:(id)arg0 ;
-(void)setSponsored:(BOOL)arg0 ;
-(void)setStoryStyle:(id)arg0 ;
-(void)setStoryType:(NSUInteger)arg0 ;
-(void)setSurfacedByArticleListID:(id)arg0 ;
-(void)setThumbnail:(id)arg0 ;
-(void)setThumbnailFocalFrame:(struct CGRect )arg0 ;
-(void)setThumbnailHQ:(id)arg0 ;
-(void)setThumbnailLQ:(id)arg0 ;
-(void)setThumbnailMedium:(id)arg0 ;
-(void)setThumbnailUltraHQ:(id)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif