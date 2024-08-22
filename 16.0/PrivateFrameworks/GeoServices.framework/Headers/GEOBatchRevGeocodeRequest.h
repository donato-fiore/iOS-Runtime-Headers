// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOBATCHREVGEOCODEREQUEST_H
#define GEOBATCHREVGEOCODEREQUEST_H

@class PBRequest, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    ? _additionalPlaceTypes;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSString *_displayRegion;
    NSMutableArray *_locations;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int additionalPlaceTypes;
@property (readonly, nonatomic) NSUInteger additionalPlaceTypesCount;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (retain, nonatomic) NSString *deviceSku;
@property (retain, nonatomic) NSString *displayRegion;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSMutableArray *serviceTags;


+(BOOL)isValid:(id)arg0 ;
+(Class)locationType;
+(Class)serviceTagType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)additionalPlaceTypesAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)locationAtIndex:(NSUInteger)arg0 ;
-(id)serviceTagAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg0 ;
-(int)additionalPlaceTypeAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addAdditionalPlaceType:(int)arg0 ;
-(void)addLocation:(id)arg0 ;
-(void)addServiceTag:(id)arg0 ;
-(void)clearAdditionalPlaceTypes;
-(void)clearLocations;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearServiceTags;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif