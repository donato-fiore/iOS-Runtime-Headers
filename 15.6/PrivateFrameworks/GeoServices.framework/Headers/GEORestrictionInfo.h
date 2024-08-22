// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORESTRICTIONINFO_H
#define GEORESTRICTIONINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOFormattedString.h"

@interface GEORestrictionInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_effectiveTimeRange;
    NSMutableArray *_restrictionDetails;
    GEOFormattedString *_subTitleString;
    GEOFormattedString *_titleString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOFormattedString *effectiveTimeRange;
@property (readonly, nonatomic) BOOL hasEffectiveTimeRange;
@property (readonly, nonatomic) BOOL hasSubTitleString;
@property (readonly, nonatomic) BOOL hasTitleString;
@property (retain, nonatomic) NSMutableArray *restrictionDetails;
@property (retain, nonatomic) GEOFormattedString *subTitleString;
@property (retain, nonatomic) GEOFormattedString *titleString;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)restrictionDetailsAtIndex:(NSUInteger)arg0 ;
-(void)addRestrictionDetails:(id)arg0 ;
-(void)clearRestrictionDetails;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif