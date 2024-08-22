// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDAMENITYVALUE_H
#define GEOPDAMENITYVALUE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPDAmenityValue : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_amenityId;
    NSMutableArray *_names;
    NSString *_symbolImageName;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _amenityType;
    BOOL _amenityPresent;
    ? _flags;
}


@property (retain, nonatomic) NSString *amenityId;
@property (nonatomic) BOOL amenityPresent;
@property (nonatomic) int amenityType;
@property (readonly, nonatomic) BOOL hasAmenityId;
@property (nonatomic) BOOL hasAmenityPresent;
@property (nonatomic) BOOL hasAmenityType;
@property (readonly, nonatomic) BOOL hasSymbolImageName;
@property (readonly, nonatomic) BOOL hasVendorId;
@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSString *symbolImageName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *vendorId;


+(BOOL)isValid:(id)arg0 ;
+(Class)nameType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)amenityTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayTitle;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)nameAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAmenityType:(id)arg0 ;
-(void)addName:(id)arg0 ;
-(void)clearNames;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif