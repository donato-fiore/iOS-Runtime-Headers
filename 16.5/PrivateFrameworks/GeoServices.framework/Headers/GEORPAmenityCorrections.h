// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPAMENITYCORRECTIONS_H
#define GEORPAMENITYCORRECTIONS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;



@interface GEORPAmenityCorrections : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _addedAmenities;
    ? _removedAmenities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int addedAmenities;
@property (readonly, nonatomic) NSUInteger addedAmenitiesCount;
@property (readonly, nonatomic) *int removedAmenities;
@property (readonly, nonatomic) NSUInteger removedAmenitiesCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addedAmenitiesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)removedAmenitiesAsString:(int)arg0 ;
-(int)StringAsAddedAmenities:(id)arg0 ;
-(int)StringAsRemovedAmenities:(id)arg0 ;
-(int)addedAmenitiesAtIndex:(NSUInteger)arg0 ;
-(int)removedAmenitiesAtIndex:(NSUInteger)arg0 ;
-(void)addAddedAmenities:(int)arg0 ;
-(void)addRemovedAmenities:(int)arg0 ;
-(void)clearAddedAmenities;
-(void)clearRemovedAmenities;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif