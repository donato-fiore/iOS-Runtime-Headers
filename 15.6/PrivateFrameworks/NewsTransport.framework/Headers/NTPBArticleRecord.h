// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBARTICLERECORD_H
#define NTPBARTICLERECORD_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "NTPBRecordBase.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList.h"
#import "COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector.h"
#import "NTPBDate.h"

@interface NTPBArticleRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accessoryText; // ivar: _accessoryText
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (retain, nonatomic) NSData *articleRecirculationConfiguration; // ivar: _articleRecirculationConfiguration
@property (retain, nonatomic) NSMutableArray *authors; // ivar: _authors
@property (nonatomic) NSInteger backendArticleVersion; // ivar: _backendArticleVersion
@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (nonatomic) NSInteger behaviorFlags; // ivar: _behaviorFlags
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (nonatomic) NSInteger bodyTextLength; // ivar: _bodyTextLength
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *channelConversionStats; // ivar: _channelConversionStats
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *channelTagMetadata; // ivar: _channelTagMetadata
@property (retain, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (nonatomic) int contentType; // ivar: _contentType
@property (retain, nonatomic) NSString *contentURL; // ivar: _contentURL
@property (retain, nonatomic) NSString *coverArt; // ivar: _coverArt
@property (retain, nonatomic) NSString *excerptURL; // ivar: _excerptURL
@property (retain, nonatomic) NSMutableArray *experimentalTitles; // ivar: _experimentalTitles
@property (retain, nonatomic) NSString *flintDocumentURL; // ivar: _flintDocumentURL
@property (retain, nonatomic) NSMutableArray *flintFontResourceIDs; // ivar: _flintFontResourceIDs
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // ivar: _globalCohorts
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats; // ivar: _globalConversionStats
@property (nonatomic) NSUInteger halfLifeMilliseconds; // ivar: _halfLifeMilliseconds
@property (nonatomic) NSUInteger halfLifeMillisecondsOverride; // ivar: _halfLifeMillisecondsOverride
@property (readonly, nonatomic) BOOL hasAccessoryText;
@property (readonly, nonatomic) BOOL hasArticleRecirculationConfiguration;
@property (nonatomic) BOOL hasBackendArticleVersion;
@property (readonly, nonatomic) BOOL hasBase;
@property (nonatomic) BOOL hasBehaviorFlags;
@property (nonatomic) BOOL hasBodyTextLength;
@property (readonly, nonatomic) BOOL hasChannelConversionStats;
@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (readonly, nonatomic) BOOL hasClusterID;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasContentURL;
@property (readonly, nonatomic) BOOL hasCoverArt;
@property (readonly, nonatomic) BOOL hasExcerptURL;
@property (readonly, nonatomic) BOOL hasFlintDocumentURL;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (readonly, nonatomic) BOOL hasGlobalConversionStats;
@property (nonatomic) BOOL hasHalfLifeMilliseconds;
@property (nonatomic) BOOL hasHalfLifeMillisecondsOverride;
@property (nonatomic) BOOL hasIsBundlePaid;
@property (nonatomic) BOOL hasIsDraft;
@property (nonatomic) BOOL hasIsFeatureCandidate;
@property (nonatomic) BOOL hasIsIssueOnly;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL hasIsSponsored;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (readonly, nonatomic) BOOL hasLayeredCover;
@property (nonatomic) BOOL hasLayeredCoverAspectRatio;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (readonly, nonatomic) BOOL hasNarrativeTrackFullURL;
@property (readonly, nonatomic) BOOL hasNarrativeTrackMetadata;
@property (readonly, nonatomic) BOOL hasNarrativeTrackSampleURL;
@property (readonly, nonatomic) BOOL hasNarrativeTrackTextRanges;
@property (readonly, nonatomic) BOOL hasParentIssueID;
@property (readonly, nonatomic) BOOL hasPersonalizationVector;
@property (readonly, nonatomic) BOOL hasPersonalizationVectorAlt;
@property (readonly, nonatomic) BOOL hasPersonalizationVectorAltFullURL;
@property (readonly, nonatomic) BOOL hasPersonalizationVectorFullURL;
@property (readonly, nonatomic) BOOL hasPrimaryAudience;
@property (readonly, nonatomic) BOOL hasPublishDate;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasReferencedArticleID;
@property (nonatomic) BOOL hasRole;
@property (readonly, nonatomic) BOOL hasShortExcerpt;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelTagID;
@property (readonly, nonatomic) BOOL hasStocksClusterID;
@property (readonly, nonatomic) BOOL hasStocksMetadata;
@property (readonly, nonatomic) BOOL hasStocksScores;
@property (nonatomic) BOOL hasStoryType;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasThumbnailAccentColor;
@property (readonly, nonatomic) BOOL hasThumbnailBackgroundColor;
@property (nonatomic) BOOL hasThumbnailFocalFrame;
@property (nonatomic) BOOL hasThumbnailHQMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailHQURL;
@property (nonatomic) BOOL hasThumbnailLQMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailLQURL;
@property (nonatomic) BOOL hasThumbnailMediumMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailMediumURL;
@property (nonatomic) BOOL hasThumbnailMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailPrimaryColor;
@property (readonly, nonatomic) BOOL hasThumbnailTextColor;
@property (readonly, nonatomic) BOOL hasThumbnailURL;
@property (nonatomic) BOOL hasThumbnailUltraHQMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailUltraHQURL;
@property (nonatomic) BOOL hasThumbnailWidgetHQMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailWidgetHQTaggedURL;
@property (readonly, nonatomic) BOOL hasThumbnailWidgetHQURL;
@property (nonatomic) BOOL hasThumbnailWidgetLQMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailWidgetLQTaggedURL;
@property (readonly, nonatomic) BOOL hasThumbnailWidgetLQURL;
@property (nonatomic) BOOL hasThumbnailWidgetMetadata;
@property (readonly, nonatomic) BOOL hasThumbnailWidgetTaggedURL;
@property (readonly, nonatomic) BOOL hasThumbnailWidgetURL;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTitleCompact;
@property (readonly, nonatomic) BOOL hasVideoCallToActionTitle;
@property (readonly, nonatomic) BOOL hasVideoCallToActionURL;
@property (readonly, nonatomic) BOOL hasVideoStillImageURL;
@property (readonly, nonatomic) BOOL hasVideoURL;
@property (retain, nonatomic) NSMutableArray *iAdCategories; // ivar: _iAdCategories
@property (retain, nonatomic) NSMutableArray *iAdKeywords; // ivar: _iAdKeywords
@property (retain, nonatomic) NSMutableArray *iAdSectionIDs; // ivar: _iAdSectionIDs
@property (nonatomic) BOOL isBundlePaid; // ivar: _isBundlePaid
@property (nonatomic) BOOL isDraft; // ivar: _isDraft
@property (nonatomic) BOOL isFeatureCandidate; // ivar: _isFeatureCandidate
@property (nonatomic) BOOL isIssueOnly; // ivar: _isIssueOnly
@property (nonatomic) BOOL isPaid; // ivar: _isPaid
@property (nonatomic) BOOL isSponsored; // ivar: _isSponsored
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *layeredCover; // ivar: _layeredCover
@property (nonatomic) CGFloat layeredCoverAspectRatio; // ivar: _layeredCoverAspectRatio
@property (retain, nonatomic) NSMutableArray *linkedArticleIDs; // ivar: _linkedArticleIDs
@property (retain, nonatomic) NSMutableArray *linkedIssueIDs; // ivar: _linkedIssueIDs
@property (nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (retain, nonatomic) NSMutableArray *moreFromPublisherArticleIDs; // ivar: _moreFromPublisherArticleIDs
@property (retain, nonatomic) NSString *narrativeTrackFullURL; // ivar: _narrativeTrackFullURL
@property (retain, nonatomic) NSString *narrativeTrackMetadata; // ivar: _narrativeTrackMetadata
@property (retain, nonatomic) NSString *narrativeTrackSampleURL; // ivar: _narrativeTrackSampleURL
@property (retain, nonatomic) NSString *narrativeTrackTextRanges; // ivar: _narrativeTrackTextRanges
@property (retain, nonatomic) NSString *parentIssueID; // ivar: _parentIssueID
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector; // ivar: _personalizationVector
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt; // ivar: _personalizationVectorAlt
@property (retain, nonatomic) NSString *personalizationVectorAltFullURL; // ivar: _personalizationVectorAltFullURL
@property (retain, nonatomic) NSString *personalizationVectorFullURL; // ivar: _personalizationVectorFullURL
@property (retain, nonatomic) NSString *primaryAudience; // ivar: _primaryAudience
@property (retain, nonatomic) NTPBDate *publishDate; // ivar: _publishDate
@property (nonatomic) NSInteger publisherArticleVersion; // ivar: _publisherArticleVersion
@property (retain, nonatomic) NSMutableArray *publisherSpecifiedArticleIds; // ivar: _publisherSpecifiedArticleIds
@property (retain, nonatomic) NSString *referencedArticleID; // ivar: _referencedArticleID
@property (retain, nonatomic) NSMutableArray *relatedArticleIDs; // ivar: _relatedArticleIDs
@property (nonatomic) int role; // ivar: _role
@property (retain, nonatomic) NSString *shortExcerpt; // ivar: _shortExcerpt
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts; // ivar: _sourceChannelCohorts
@property (retain, nonatomic) NSString *sourceChannelTagID; // ivar: _sourceChannelTagID
@property (retain, nonatomic) NSString *stocksClusterID; // ivar: _stocksClusterID
@property (retain, nonatomic) NSString *stocksMetadata; // ivar: _stocksMetadata
@property (retain, nonatomic) NSString *stocksScores; // ivar: _stocksScores
@property (nonatomic) int storyType; // ivar: _storyType
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *thumbnailAccentColor; // ivar: _thumbnailAccentColor
@property (retain, nonatomic) NSString *thumbnailBackgroundColor; // ivar: _thumbnailBackgroundColor
@property (nonatomic) NSInteger thumbnailFocalFrame; // ivar: _thumbnailFocalFrame
@property (nonatomic) NSInteger thumbnailHQMetadata; // ivar: _thumbnailHQMetadata
@property (retain, nonatomic) NSString *thumbnailHQURL; // ivar: _thumbnailHQURL
@property (nonatomic) NSInteger thumbnailLQMetadata; // ivar: _thumbnailLQMetadata
@property (retain, nonatomic) NSString *thumbnailLQURL; // ivar: _thumbnailLQURL
@property (nonatomic) NSInteger thumbnailMediumMetadata; // ivar: _thumbnailMediumMetadata
@property (retain, nonatomic) NSString *thumbnailMediumURL; // ivar: _thumbnailMediumURL
@property (nonatomic) NSInteger thumbnailMetadata; // ivar: _thumbnailMetadata
@property (retain, nonatomic) NSString *thumbnailPrimaryColor; // ivar: _thumbnailPrimaryColor
@property (retain, nonatomic) NSString *thumbnailTextColor; // ivar: _thumbnailTextColor
@property (retain, nonatomic) NSString *thumbnailURL; // ivar: _thumbnailURL
@property (nonatomic) NSInteger thumbnailUltraHQMetadata; // ivar: _thumbnailUltraHQMetadata
@property (retain, nonatomic) NSString *thumbnailUltraHQURL; // ivar: _thumbnailUltraHQURL
@property (nonatomic) NSInteger thumbnailWidgetHQMetadata; // ivar: _thumbnailWidgetHQMetadata
@property (retain, nonatomic) NSString *thumbnailWidgetHQTaggedURL; // ivar: _thumbnailWidgetHQTaggedURL
@property (retain, nonatomic) NSString *thumbnailWidgetHQURL; // ivar: _thumbnailWidgetHQURL
@property (nonatomic) NSInteger thumbnailWidgetLQMetadata; // ivar: _thumbnailWidgetLQMetadata
@property (retain, nonatomic) NSString *thumbnailWidgetLQTaggedURL; // ivar: _thumbnailWidgetLQTaggedURL
@property (retain, nonatomic) NSString *thumbnailWidgetLQURL; // ivar: _thumbnailWidgetLQURL
@property (nonatomic) NSInteger thumbnailWidgetMetadata; // ivar: _thumbnailWidgetMetadata
@property (retain, nonatomic) NSString *thumbnailWidgetTaggedURL; // ivar: _thumbnailWidgetTaggedURL
@property (retain, nonatomic) NSString *thumbnailWidgetURL; // ivar: _thumbnailWidgetURL
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *titleCompact; // ivar: _titleCompact
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics
@property (retain, nonatomic) NSString *videoCallToActionTitle; // ivar: _videoCallToActionTitle
@property (retain, nonatomic) NSString *videoCallToActionURL; // ivar: _videoCallToActionURL
@property (retain, nonatomic) NSString *videoStillImageURL; // ivar: _videoStillImageURL
@property (retain, nonatomic) NSString *videoURL; // ivar: _videoURL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allowedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)authorsAtIndex:(NSUInteger)arg0 ;
-(id)blockedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)experimentalTitlesAtIndex:(NSUInteger)arg0 ;
-(id)flintFontResourceIDsAtIndex:(NSUInteger)arg0 ;
-(id)iAdCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)iAdKeywordsAtIndex:(NSUInteger)arg0 ;
-(id)iAdSectionIDsAtIndex:(NSUInteger)arg0 ;
-(id)linkedArticleIDsAtIndex:(NSUInteger)arg0 ;
-(id)linkedIssueIDsAtIndex:(NSUInteger)arg0 ;
-(id)moreFromPublisherArticleIDsAtIndex:(NSUInteger)arg0 ;
-(id)publisherSpecifiedArticleIdsAtIndex:(NSUInteger)arg0 ;
-(id)relatedArticleIDsAtIndex:(NSUInteger)arg0 ;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(void)addAllowedStorefrontIDs:(id)arg0 ;
-(void)addAuthors:(id)arg0 ;
-(void)addBlockedStorefrontIDs:(id)arg0 ;
-(void)addExperimentalTitles:(id)arg0 ;
-(void)addFlintFontResourceIDs:(id)arg0 ;
-(void)addIAdCategories:(id)arg0 ;
-(void)addIAdKeywords:(id)arg0 ;
-(void)addIAdSectionIDs:(id)arg0 ;
-(void)addLinkedArticleIDs:(id)arg0 ;
-(void)addLinkedIssueIDs:(id)arg0 ;
-(void)addMoreFromPublisherArticleIDs:(id)arg0 ;
-(void)addPublisherSpecifiedArticleIds:(id)arg0 ;
-(void)addRelatedArticleIDs:(id)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearAllowedStorefrontIDs;
-(void)clearAuthors;
-(void)clearBlockedStorefrontIDs;
-(void)clearExperimentalTitles;
-(void)clearFlintFontResourceIDs;
-(void)clearIAdCategories;
-(void)clearIAdKeywords;
-(void)clearIAdSectionIDs;
-(void)clearLinkedArticleIDs;
-(void)clearLinkedIssueIDs;
-(void)clearMoreFromPublisherArticleIDs;
-(void)clearPublisherSpecifiedArticleIds;
-(void)clearRelatedArticleIDs;
-(void)clearTopics;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif