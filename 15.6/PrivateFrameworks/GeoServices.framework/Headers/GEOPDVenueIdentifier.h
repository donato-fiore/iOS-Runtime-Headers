// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDVENUEIDENTIFIER_H
#define GEOPDVENUEIDENTIFIER_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;



@interface GEOPDVenueIdentifier : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _containedBys;
    ? _sectionIds;
    NSUInteger _buildingId;
    NSUInteger _featureId;
    NSUInteger _fixtureId;
    NSUInteger _geminiId;
    NSUInteger _levelId;
    NSUInteger _unitId;
    NSUInteger _venueGeminiId;
    NSUInteger _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _levelOrdinal;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithVenueID:(NSUInteger)arg0 featureID:(NSUInteger)arg1 businessID:(NSUInteger)arg2 ;
-(id)initWithVenueID:(NSUInteger)arg0 featureID:(NSUInteger)arg1 businessID:(NSUInteger)arg2 componentIdentifier:(id)arg3 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif