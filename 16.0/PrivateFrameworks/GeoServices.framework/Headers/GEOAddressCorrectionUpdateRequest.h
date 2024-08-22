// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOADDRESSCORRECTIONUPDATEREQUEST_H
#define GEOADDRESSCORRECTIONUPDATEREQUEST_H

@class PBRequest, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOAddressCorrectionUpdateRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_addressID;
    NSMutableArray *_addressResults;
    NSMutableArray *_significantLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _correctionStatus;
    ? _flags;
}


@property (retain, nonatomic) NSString *addressID;
@property (retain, nonatomic) NSMutableArray *addressResults;
@property (nonatomic) int correctionStatus;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (nonatomic) BOOL hasCorrectionStatus;
@property (retain, nonatomic) NSMutableArray *significantLocations;


+(BOOL)isValid:(id)arg0 ;
+(Class)addressResultType;
+(Class)significantLocationType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)addressResultAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correctionStatusAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)significantLocationAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCorrectionStatus:(id)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addAddressResult:(id)arg0 ;
-(void)addSignificantLocation:(id)arg0 ;
-(void)clearAddressResults;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSignificantLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif