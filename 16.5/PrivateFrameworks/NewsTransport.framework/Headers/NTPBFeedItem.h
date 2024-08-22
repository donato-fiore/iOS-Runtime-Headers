// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBFEEDITEM_H
#define NTPBFEEDITEM_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList.h"
#import "NTPBScoreProfiles.h"

@interface NTPBFeedItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleID; // ivar: _articleID
@property (nonatomic) NSInteger bodyTextLength; // ivar: _bodyTextLength
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *channelConversionStats; // ivar: _channelConversionStats
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *channelTagMetadata; // ivar: _channelTagMetadata
@property (retain, nonatomic) NSString *clusterID; // ivar: _clusterID
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleContentExpiration *expirationData; // ivar: _expirationData
@property (nonatomic) NSUInteger feedHalfLifeMilliseconds; // ivar: _feedHalfLifeMilliseconds
@property (retain, nonatomic) NSString *feedID; // ivar: _feedID
@property (retain, nonatomic) NSData *float16FullBodyEncoding; // ivar: _float16FullBodyEncoding
@property (retain, nonatomic) NSData *float16TitleEncoding; // ivar: _float16TitleEncoding
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // ivar: _globalCohorts
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats; // ivar: _globalConversionStats
@property (nonatomic) CGFloat globalUserFeedback; // ivar: _globalUserFeedback
@property (readonly, nonatomic) BOOL hasArticleID;
@property (nonatomic) BOOL hasAudioTrack; // ivar: _hasAudioTrack
@property (nonatomic) BOOL hasBodyTextLength;
@property (readonly, nonatomic) BOOL hasChannelConversionStats;
@property (readonly, nonatomic) BOOL hasChannelTagMetadata;
@property (readonly, nonatomic) BOOL hasClusterID;
@property (nonatomic) BOOL hasContentType;
@property (readonly, nonatomic) BOOL hasExpirationData;
@property (nonatomic) BOOL hasFeedHalfLifeMilliseconds;
@property (readonly, nonatomic) BOOL hasFeedID;
@property (readonly, nonatomic) BOOL hasFloat16FullBodyEncoding;
@property (readonly, nonatomic) BOOL hasFloat16TitleEncoding;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (readonly, nonatomic) BOOL hasGlobalConversionStats;
@property (nonatomic) BOOL hasGlobalUserFeedback;
@property (nonatomic) BOOL hasHasAudioTrack;
@property (nonatomic) BOOL hasHasThumbnail;
@property (nonatomic) BOOL hasHasVideo;
@property (nonatomic) BOOL hasHasVideoStillImage;
@property (nonatomic) BOOL hasIsBundlePaid;
@property (nonatomic) BOOL hasIsEvergreen;
@property (nonatomic) BOOL hasIsExplicitContent;
@property (nonatomic) BOOL hasIsFeatureCandidate;
@property (nonatomic) BOOL hasIsFeatured;
@property (nonatomic) BOOL hasIsFromBlockedStorefront;
@property (nonatomic) BOOL hasIsHiddenFromAutoFavorites;
@property (nonatomic) BOOL hasIsIssueOnly;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL hasIsSponsored;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) BOOL hasOrder;
@property (readonly, nonatomic) BOOL hasParentIssueID;
@property (nonatomic) BOOL hasPublishDateMilliseconds;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (nonatomic) BOOL hasReduceVisibility;
@property (readonly, nonatomic) BOOL hasScoreProfiles;
@property (readonly, nonatomic) BOOL hasSourceArticleListID;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelID;
@property (nonatomic) BOOL hasThumbnail; // ivar: _hasThumbnail
@property (readonly, nonatomic) BOOL hasThumbnailPerceptualHash;
@property (nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (nonatomic) BOOL hasVideoStillImage; // ivar: _hasVideoStillImage
@property (nonatomic) BOOL hasWebConverted;
@property (nonatomic) BOOL isBundlePaid; // ivar: _isBundlePaid
@property (nonatomic) BOOL isEvergreen; // ivar: _isEvergreen
@property (nonatomic) BOOL isExplicitContent; // ivar: _isExplicitContent
@property (nonatomic) BOOL isFeatureCandidate; // ivar: _isFeatureCandidate
@property (nonatomic) BOOL isFeatured; // ivar: _isFeatured
@property (nonatomic) BOOL isFromBlockedStorefront; // ivar: _isFromBlockedStorefront
@property (nonatomic) BOOL isHiddenFromAutoFavorites; // ivar: _isHiddenFromAutoFavorites
@property (nonatomic) BOOL isIssueOnly; // ivar: _isIssueOnly
@property (nonatomic) BOOL isPaid; // ivar: _isPaid
@property (nonatomic) BOOL isSponsored; // ivar: _isSponsored
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (nonatomic) NSUInteger order; // ivar: _order
@property (retain, nonatomic) NSString *parentIssueID; // ivar: _parentIssueID
@property (nonatomic) NSUInteger publishDateMilliseconds; // ivar: _publishDateMilliseconds
@property (nonatomic) NSInteger publisherArticleVersion; // ivar: _publisherArticleVersion
@property (nonatomic) BOOL reduceVisibility; // ivar: _reduceVisibility
@property (retain, nonatomic) NTPBScoreProfiles *scoreProfiles; // ivar: _scoreProfiles
@property (retain, nonatomic) NSString *sourceArticleListID; // ivar: _sourceArticleListID
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts; // ivar: _sourceChannelCohorts
@property (retain, nonatomic) NSString *sourceChannelID; // ivar: _sourceChannelID
@property (retain, nonatomic) NSData *thumbnailPerceptualHash; // ivar: _thumbnailPerceptualHash
@property (retain, nonatomic) NSMutableArray *topicIDs; // ivar: _topicIDs
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics
@property (nonatomic) BOOL webConverted; // ivar: _webConverted


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicIDsAtIndex:(NSUInteger)arg0 ;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(void)addTopicIDs:(id)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearTopicIDs;
-(void)clearTopics;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif