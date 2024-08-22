// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBISSUERECORD_H
#define NTPBISSUERECORD_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTPBRecordBase.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats.h"
#import "COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector.h"
#import "NTPBDate.h"
#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores.h"

@interface NTPBIssueRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *allArticleIDs; // ivar: _allArticleIDs
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs; // ivar: _allowedStorefrontIDs
@property (retain, nonatomic) NTPBRecordBase *base; // ivar: _base
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs; // ivar: _blockedStorefrontIDs
@property (retain, nonatomic) NSMutableArray *bundleFeaturedArticleIDs; // ivar: _bundleFeaturedArticleIDs
@property (retain, nonatomic) NSString *channelTagID; // ivar: _channelTagID
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats *conversionStats; // ivar: _conversionStats
@property (retain, nonatomic) NSString *coverAccentColor; // ivar: _coverAccentColor
@property (retain, nonatomic) NSString *coverArticleID; // ivar: _coverArticleID
@property (nonatomic) CGFloat coverAspectRatio; // ivar: _coverAspectRatio
@property (retain, nonatomic) NSString *coverBackgroundColor; // ivar: _coverBackgroundColor
@property (retain, nonatomic) NSString *coverImageURL; // ivar: _coverImageURL
@property (retain, nonatomic) NSString *coverPrimaryColor; // ivar: _coverPrimaryColor
@property (retain, nonatomic) NSString *coverTextColor; // ivar: _coverTextColor
@property (retain, nonatomic) NSString *edition; // ivar: _edition
@property (nonatomic) NSUInteger halfLifeMilliseconds; // ivar: _halfLifeMilliseconds
@property (readonly, nonatomic) BOOL hasBase;
@property (readonly, nonatomic) BOOL hasChannelTagID;
@property (readonly, nonatomic) BOOL hasConversionStats;
@property (readonly, nonatomic) BOOL hasCoverAccentColor;
@property (readonly, nonatomic) BOOL hasCoverArticleID;
@property (nonatomic) BOOL hasCoverAspectRatio;
@property (readonly, nonatomic) BOOL hasCoverBackgroundColor;
@property (readonly, nonatomic) BOOL hasCoverImageURL;
@property (readonly, nonatomic) BOOL hasCoverPrimaryColor;
@property (readonly, nonatomic) BOOL hasCoverTextColor;
@property (readonly, nonatomic) BOOL hasEdition;
@property (nonatomic) BOOL hasHalfLifeMilliseconds;
@property (nonatomic) BOOL hasIsDraft;
@property (nonatomic) BOOL hasIsPaid;
@property (readonly, nonatomic) BOOL hasIssueDescription;
@property (readonly, nonatomic) BOOL hasLayeredCover;
@property (nonatomic) BOOL hasLayeredCoverAspectRatio;
@property (readonly, nonatomic) BOOL hasLayeredCoverPrimaryColor;
@property (readonly, nonatomic) BOOL hasMetadataURL;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (readonly, nonatomic) BOOL hasNotificationDescription;
@property (readonly, nonatomic) BOOL hasPdfResourceArchiveURL;
@property (readonly, nonatomic) BOOL hasPersonalizationVector;
@property (readonly, nonatomic) BOOL hasPersonalizationVectorAlt;
@property (readonly, nonatomic) BOOL hasPersonalizationVectorAltFullURL;
@property (readonly, nonatomic) BOOL hasPersonalizationVectorFullURL;
@property (readonly, nonatomic) BOOL hasPublishDate;
@property (readonly, nonatomic) BOOL hasScores;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isDraft; // ivar: _isDraft
@property (nonatomic) BOOL isPaid; // ivar: _isPaid
@property (retain, nonatomic) NSString *issueDescription; // ivar: _issueDescription
@property (retain, nonatomic) NSString *layeredCover; // ivar: _layeredCover
@property (nonatomic) CGFloat layeredCoverAspectRatio; // ivar: _layeredCoverAspectRatio
@property (retain, nonatomic) NSString *layeredCoverPrimaryColor; // ivar: _layeredCoverPrimaryColor
@property (retain, nonatomic) NSString *metadataURL; // ivar: _metadataURL
@property (nonatomic) NSInteger minimumNewsVersion; // ivar: _minimumNewsVersion
@property (retain, nonatomic) NSString *notificationDescription; // ivar: _notificationDescription
@property (retain, nonatomic) NSString *pdfResourceArchiveURL; // ivar: _pdfResourceArchiveURL
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVector; // ivar: _personalizationVector
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *personalizationVectorAlt; // ivar: _personalizationVectorAlt
@property (retain, nonatomic) NSString *personalizationVectorAltFullURL; // ivar: _personalizationVectorAltFullURL
@property (retain, nonatomic) NSString *personalizationVectorFullURL; // ivar: _personalizationVectorFullURL
@property (retain, nonatomic) NTPBDate *publishDate; // ivar: _publishDate
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores *scores; // ivar: _scores
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSMutableArray *topicTagIDs; // ivar: _topicTagIDs
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allArticleIDsAtIndex:(NSUInteger)arg0 ;
-(id)allowedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)blockedStorefrontIDsAtIndex:(NSUInteger)arg0 ;
-(id)bundleFeaturedArticleIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicTagIDsAtIndex:(NSUInteger)arg0 ;
-(void)addAllArticleIDs:(id)arg0 ;
-(void)addAllowedStorefrontIDs:(id)arg0 ;
-(void)addBlockedStorefrontIDs:(id)arg0 ;
-(void)addBundleFeaturedArticleIDs:(id)arg0 ;
-(void)addTopicTagIDs:(id)arg0 ;
-(void)clearAllArticleIDs;
-(void)clearAllowedStorefrontIDs;
-(void)clearBlockedStorefrontIDs;
-(void)clearBundleFeaturedArticleIDs;
-(void)clearTopicTagIDs;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif