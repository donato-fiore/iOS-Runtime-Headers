// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLEHEADLINE_H
#define FCARTICLEHEADLINE_H

@class NSString, NSDate, NSURL, NSArray, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector, NTPBArticleRecord;
@protocol FCHeadlineStocksFields, FCArticleAccessCheckable, FCContentArchivable, FCChannelProviding;


#import "FCHeadline.h"
#import "FCHeadlineExperimentalTitleMetadata.h"
#import "FCHeadlineThumbnail.h"
#import "FCIssue.h"
#import "FCTopStoriesStyleConfiguration.h"
#import "FCCoverArt.h"
#import "FCArticleAudioTrack.h"
#import "FCColor.h"
#import "FCInterestToken.h"
#import "FCContentArchive.h"

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields, FCArticleAccessCheckable, FCContentArchivable>

 {
    BOOL _hasThumbnail;
    BOOL _sponsored;
    BOOL _deleted;
    BOOL _featureCandidate;
    BOOL _needsRapidUpdates;
    BOOL _showMinimalChrome;
    BOOL _boundToContext;
    BOOL _hiddenFromFeeds;
    BOOL _pressRelease;
    BOOL _hiddenFromAutoFavorites;
    BOOL _webEmbedsEnabled;
    BOOL _issueOnly;
    BOOL _canBePurchased;
    BOOL _showBundleSoftPaywall;
    BOOL _useTransparentNavigationBar;
    BOOL _disableBookmarking;
    NSString *_versionIdentifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    NSUInteger _contentType;
    NSString *_titleCompact;
    FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    NSInteger _publisherArticleVersion;
    NSInteger _backendArticleVersion;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_globalConversionStats;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_publisherConversionStats;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *_publisherTagMetadata;
    NSURL *_videoURL;
    CGFloat _videoDuration;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    FCIssue *_masterIssue;
    NSUInteger _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    FCCoverArt *_coverArt;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    NSString *_language;
    NSUInteger _role;
    NSUInteger _halfLife;
    NSArray *_linkedArticleIDs;
    NSArray *_linkedIssueIDs;
    NSInteger _bodyTextLength;
    FCArticleAudioTrack *_narrativeTrack;
    FCArticleAudioTrack *_narrativeTrackSample;
    NSString *_narrativeTrackTextRanges;
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVector;
    COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *_personalizationVectorAlt;
    NSString *_layeredThumbnailJSON;
    CGFloat _layeredThumbnailAspectRatio;
    FCColor *_thumbnailImagePrimaryColor;
    FCColor *_thumbnailImageBackgroundColor;
    FCColor *_thumbnailImageTextColor;
    FCColor *_thumbnailImageAccentColor;
    NSArray *_authors;
    NSArray *_narrators;
    NSString *_excerpt;
    CGRect _thumbnailFocalFrame;
}


@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (retain, nonatomic) FCInterestToken *articleInterestToken; // ivar: _articleInterestToken
@property (retain, nonatomic) NTPBArticleRecord *articleRecord; // ivar: _articleRecord
@property (nonatomic) NSInteger behaviorFlags; // ivar: _behaviorFlags
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid; // ivar: _bundlePaid
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) BOOL isDraft; // ivar: _isDraft
@property (readonly, nonatomic) BOOL isLocalDraft; // ivar: _isLocalDraft
@property (readonly, nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (readonly, nonatomic, getter=isPaid) BOOL paid; // ivar: _paid
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel; // ivar: _sourceChannel
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSString *stocksClusterID;
@property (readonly, copy, nonatomic) NSString *stocksMetadataJSON;
@property (readonly, copy, nonatomic) NSString *stocksScoresJSON;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)canBePurchased;
-(BOOL)disableBookmarking;
-(BOOL)hasAudioTrack;
-(BOOL)hasThumbnail;
-(BOOL)isBoundToContext;
-(BOOL)isDeleted;
-(BOOL)isFeatureCandidate;
-(BOOL)isHiddenFromAutoFavorites;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isIssueOnly;
-(BOOL)isPressRelease;
-(BOOL)isSponsored;
-(BOOL)needsRapidUpdates;
-(BOOL)showBundleSoftPaywall;
-(BOOL)showMinimalChrome;
-(BOOL)useTransparentNavigationBar;
-(BOOL)webEmbedsEnabled;
-(CGFloat)layeredThumbnailAspectRatio;
-(CGFloat)videoDuration;
-(NSInteger)backendArticleVersion;
-(NSInteger)bodyTextLength;
-(NSInteger)publisherArticleVersion;
-(NSUInteger)contentType;
-(NSUInteger)halfLife;
-(NSUInteger)role;
-(NSUInteger)storyType;
-(id)accessoryText;
-(id)articleID;
-(id)articleRecirculationConfigJSON;
-(id)authors;
-(id)backingArticleRecordData;
-(id)clusterID;
-(id)contentURL;
-(id)contentWithContext:(id)arg0 ;
-(id)coverArt;
-(id)excerpt;
-(id)experimentalTitleMetadata;
-(id)globalCohorts;
-(id)globalConversionStats;
-(id)iAdCategories;
-(id)iAdKeywords;
-(id)iAdSectionIDs;
-(id)init;
-(id)initWithArticleRecord:(id)arg0 articleInterestToken:(id)arg1 sourceChannel:(id)arg2 masterIssue:(id)arg3 storyStyleConfigs:(id)arg4 storyTypeTimeout:(NSInteger)arg5 rapidUpdatesTimeout:(NSInteger)arg6 assetManager:(id)arg7 experimentalTitleProvider:(id)arg8 ;
-(id)initWithArticleRecordData:(id)arg0 sourceChannel:(id)arg1 masterIssue:(id)arg2 assetManager:(id)arg3 ;
-(id)language;
-(id)lastFetchedDate;
-(id)lastModifiedDate;
-(id)layeredThumbnailJSON;
-(id)linkedArticleIDs;
-(id)linkedIssueIDs;
-(id)masterIssue;
-(id)moreFromPublisherArticleIDs;
-(id)narrativeTrack;
-(id)narrativeTrackSample;
-(id)narrativeTrackTextRanges;
-(id)narrators;
-(id)personalizationVector;
-(id)personalizationVectorAlt;
-(id)primaryAudience;
-(id)publishDate;
-(id)publisherCohorts;
-(id)publisherConversionStats;
-(id)publisherID;
-(id)publisherSpecifiedArticleIDs;
-(id)publisherTagMetadata;
-(id)referencedArticleID;
-(id)relatedArticleIDs;
-(id)shortExcerpt;
-(id)sourceName;
-(id)stocksFields;
-(id)storyStyle;
-(id)thumbnail;
-(id)thumbnailHQ;
-(id)thumbnailImageAccentColor;
-(id)thumbnailImageBackgroundColor;
-(id)thumbnailImagePrimaryColor;
-(id)thumbnailImageTextColor;
-(id)thumbnailLQ;
-(id)thumbnailMedium;
-(id)thumbnailUltraHQ;
-(id)thumbnailWidget;
-(id)thumbnailWidgetHQ;
-(id)thumbnailWidgetLQ;
-(id)topicIDs;
-(id)topics;
-(id)versionIdentifier;
-(id)videoCallToActionTitle;
-(id)videoCallToActionURL;
-(id)videoURL;
-(struct CGRect )thumbnailFocalFrame;
-(void)setAccessoryText:(id)arg0 ;
-(void)setArticleID:(id)arg0 ;
-(void)setClusterID:(id)arg0 ;
-(void)setContentType:(NSUInteger)arg0 ;
-(void)setDeleted:(BOOL)arg0 ;
-(void)setExcerpt:(id)arg0 ;
-(void)setHalfLife:(NSUInteger)arg0 ;
-(void)setHasThumbnail:(BOOL)arg0 ;
-(void)setNeedsRapidUpdates:(BOOL)arg0 ;
-(void)setPublishDate:(id)arg0 ;
-(void)setRole:(NSUInteger)arg0 ;
-(void)setShortExcerpt:(id)arg0 ;
-(void)setSourceName:(id)arg0 ;
-(void)setSponsored:(BOOL)arg0 ;
-(void)setStoryStyle:(id)arg0 ;
-(void)setStoryType:(NSUInteger)arg0 ;
-(void)setThumbnail:(id)arg0 ;
-(void)setThumbnailFocalFrame:(struct CGRect )arg0 ;
-(void)setThumbnailHQ:(id)arg0 ;
-(void)setThumbnailLQ:(id)arg0 ;
-(void)setThumbnailMedium:(id)arg0 ;
-(void)setThumbnailUltraHQ:(id)arg0 ;
-(void)setTopicIDs:(id)arg0 ;


@end


#endif