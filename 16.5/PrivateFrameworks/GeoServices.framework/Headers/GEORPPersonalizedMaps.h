// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPPERSONALIZEDMAPS_H
#define GEORPPERSONALIZEDMAPS_H

@class PBCodable;
@protocol NSCopying;


#import "GEORPAddress.h"

@interface GEORPPersonalizedMaps : PBCodable <NSCopying>

 {
    GEORPAddress *_address;
    int _addressType;
    int _placeType;
    ? _flags;
}


@property (retain, nonatomic) GEORPAddress *address;
@property (nonatomic) int addressType;
@property (readonly, nonatomic) BOOL hasAddress;
@property (nonatomic) BOOL hasAddressType;
@property (nonatomic) BOOL hasPlaceType;
@property (nonatomic) int placeType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)placeTypeAsString:(int)arg0 ;
-(int)StringAsAddressType:(id)arg0 ;
-(int)StringAsPlaceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif