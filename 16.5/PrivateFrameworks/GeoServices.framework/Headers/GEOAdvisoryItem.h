// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOADVISORYITEM_H
#define GEOADVISORYITEM_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOAdvisoryCard.h"

@interface GEOAdvisoryItem : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAdvisoryCard *_advisoryCard;
    NSMutableArray *_analyticsMessageValues;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _incidentIndex;
    unsigned int _transitIncidentIndex;
    ? _flags;
}


@property (retain, nonatomic) GEOAdvisoryCard *advisoryCard;
@property (retain, nonatomic) NSMutableArray *analyticsMessageValues;
@property (readonly, nonatomic) BOOL hasAdvisoryCard;
@property (nonatomic) BOOL hasIncidentIndex;
@property (nonatomic) BOOL hasTransitIncidentIndex;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) unsigned int transitIncidentIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)analyticsMessageValueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)analyticsMessageValueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAnalyticsMessageValue:(id)arg0 ;
-(void)clearAnalyticsMessageValues;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif