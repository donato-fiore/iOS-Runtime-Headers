// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDRESULTREFINEMENTMETADATADEFAULT_H
#define GEOPDRESULTREFINEMENTMETADATADEFAULT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSData;
@protocol NSCopying;



@interface GEOPDResultRefinementMetadataDefault : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_refinementKey;
    NSData *_refinementValueMetadata;
    NSString *_refinementValue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _refinementMetadataDefaultType;
    unsigned int _selectionFromQuerySequenceNumber;
    BOOL _selectionFromQuery;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasRefinementKey;
@property (nonatomic) BOOL hasRefinementMetadataDefaultType;
@property (readonly, nonatomic) BOOL hasRefinementValue;
@property (readonly, nonatomic) BOOL hasRefinementValueMetadata;
@property (nonatomic) BOOL hasSelectionFromQuery;
@property (nonatomic) BOOL hasSelectionFromQuerySequenceNumber;
@property (retain, nonatomic) NSString *refinementKey;
@property (nonatomic) int refinementMetadataDefaultType;
@property (retain, nonatomic) NSString *refinementValue;
@property (retain, nonatomic) NSData *refinementValueMetadata;
@property (nonatomic) BOOL selectionFromQuery;
@property (nonatomic) unsigned int selectionFromQuerySequenceNumber;
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
-(id)refinementMetadataDefaultTypeAsString:(int)arg0 ;
-(int)StringAsRefinementMetadataDefaultType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif