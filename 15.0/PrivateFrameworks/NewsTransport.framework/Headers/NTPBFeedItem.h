// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBFEEDITEM_H
#define NTPBFEEDITEM_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores.h"

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
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *conversionStats; // ivar: _conversionStats
@property (nonatomic) NSUInteger feedHalfLifeMilliseconds; // ivar: _feedHalfLifeMilliseconds
@property (retain, nonatomic) NSString *feedID; // ivar: _feedID
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
@property (readonly, nonatomic) BOOL hasConversionStats;
@property (nonatomic) BOOL hasFeedHalfLifeMilliseconds;
@property (readonly, nonatomic) BOOL hasFeedID;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (readonly, nonatomic) BOOL hasGlobalConversionStats;
@property (nonatomic) BOOL hasGlobalUserFeedback;
@property (nonatomic) BOOL hasHasAudioTrack;
@property (nonatomic) BOOL hasHasThumbnail;
@property (nonatomic) BOOL hasHasVideo;
@property (nonatomic) BOOL hasIsBundlePaid;
@property (nonatomic) BOOL hasIsEvergreen;
@property (nonatomic) BOOL hasIsExplicitContent;
@property (nonatomic) BOOL hasIsFeatured;
@property (nonatomic) BOOL hasIsFromBlockedStorefront;
@property (nonatomic) BOOL hasIsHiddenFromAutoFavorites;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) BOOL hasOrder;
@property (readonly, nonatomic) BOOL hasParentIssueID;
@property (nonatomic) BOOL hasPublishDateMilliseconds;
@property (nonatomic) BOOL hasPublisherArticleVersion;
@property (readonly, nonatomic) BOOL hasScores;
@property (readonly, nonatomic) BOOL hasSourceArticleListID;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelID;
@property (nonatomic) BOOL hasThumbnail; // ivar: _hasThumbnail
@property (nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (nonatomic) BOOL isBundlePaid; // ivar: _isBundlePaid
@property (nonatomic) BOOL isEvergreen; // ivar: _isEvergreen
@property (nonatomic) BOOL isExplicitContent; // ivar: _isExplicitContent
@property (nonatomic) BOOL isFeatured; // ivar: _isFeatured
@property (nonatomic) BOOL isFromBlockedStorefront; // ivar: _isFromBlockedStorefront
@property (nonatomic) BOOL isHiddenFromAutoFavorites; // ivar: _isHiddenFromAutoFavorites
@property (nonatomic) BOOL isPaid; // ivar: _isPaid
@property (nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (nonatomic) NSUInteger order; // ivar: _order
@property (retain, nonatomic) NSString *parentIssueID; // ivar: _parentIssueID
@property (nonatomic) NSUInteger publishDateMilliseconds; // ivar: _publishDateMilliseconds
@property (nonatomic) NSInteger publisherArticleVersion; // ivar: _publisherArticleVersion
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores; // ivar: _scores
@property (retain, nonatomic) NSString *sourceArticleListID; // ivar: _sourceArticleListID
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts; // ivar: _sourceChannelCohorts
@property (retain, nonatomic) NSString *sourceChannelID; // ivar: _sourceChannelID
@property (retain, nonatomic) NSMutableArray *topicIDs; // ivar: _topicIDs
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics


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