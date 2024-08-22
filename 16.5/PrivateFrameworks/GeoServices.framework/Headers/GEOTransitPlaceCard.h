// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITPLACECARD_H
#define GEOTRANSITPLACECARD_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOTransitDepartureSequenceUsage.h"

@interface GEOTransitPlaceCard : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_incidentType;
    GEOTransitDepartureSequenceUsage *_transitDepartureSequenceUsage;
    NSString *_transitSystemName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _transitCategory;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasIncidentType;
@property (nonatomic) BOOL hasTransitCategory;
@property (readonly, nonatomic) BOOL hasTransitDepartureSequenceUsage;
@property (readonly, nonatomic) BOOL hasTransitSystemName;
@property (retain, nonatomic) NSString *incidentType;
@property (nonatomic) int transitCategory;
@property (retain, nonatomic) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property (retain, nonatomic) NSString *transitSystemName;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)transitCategoryAsString:(int)arg0 ;
-(int)StringAsTransitCategory:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif