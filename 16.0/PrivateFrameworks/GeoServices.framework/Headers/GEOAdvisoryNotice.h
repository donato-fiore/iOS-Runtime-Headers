// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOADVISORYNOTICE_H
#define GEOADVISORYNOTICE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOFormattedString.h"
#import "GEOPBTransitArtwork.h"

@interface GEOAdvisoryNotice : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _incidentIndexs;
    NSMutableArray *_advisoryCards;
    NSMutableArray *_advisoryItems;
    NSMutableArray *_analyticsMessageValues;
    GEOFormattedString *_detailCardTitle;
    GEOPBTransitArtwork *_noticeArtwork;
    GEOFormattedString *_noticeText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _shouldAlwaysShowAdvisoryCard;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *advisoryCards;
@property (retain, nonatomic) NSMutableArray *advisoryItems;
@property (retain, nonatomic) NSMutableArray *analyticsMessageValues;
@property (retain, nonatomic) GEOFormattedString *detailCardTitle;
@property (readonly, nonatomic) BOOL hasDetailCardTitle;
@property (readonly, nonatomic) BOOL hasNoticeArtwork;
@property (readonly, nonatomic) BOOL hasNoticeText;
@property (nonatomic) BOOL hasShouldAlwaysShowAdvisoryCard;
@property (readonly, nonatomic) *unsigned int incidentIndexs;
@property (readonly, nonatomic) NSUInteger incidentIndexsCount;
@property (retain, nonatomic) GEOPBTransitArtwork *noticeArtwork;
@property (retain, nonatomic) GEOFormattedString *noticeText;
@property (nonatomic) BOOL shouldAlwaysShowAdvisoryCard;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)advisoryCardType;
+(Class)advisoryItemType;
+(Class)analyticsMessageValueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)advisoryCardAtIndex:(NSUInteger)arg0 ;
-(id)advisoryItemAtIndex:(NSUInteger)arg0 ;
-(id)analyticsMessageValueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)incidentIndexAtIndex:(NSUInteger)arg0 ;
-(void)addAdvisoryCard:(id)arg0 ;
-(void)addAdvisoryItem:(id)arg0 ;
-(void)addAnalyticsMessageValue:(id)arg0 ;
-(void)addIncidentIndex:(unsigned int)arg0 ;
-(void)clearAdvisoryCards;
-(void)clearAdvisoryItems;
-(void)clearAnalyticsMessageValues;
-(void)clearIncidentIndexs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif