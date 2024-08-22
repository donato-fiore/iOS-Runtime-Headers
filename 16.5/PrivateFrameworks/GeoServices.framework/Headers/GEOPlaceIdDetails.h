// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPLACEIDDETAILS_H
#define GEOPLACEIDDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEOPlaceIdDetails : PBCodable <NSCopying>

 {
    NSUInteger _basemapId;
    NSUInteger _businessId;
    unsigned int _localSearchProviderId;
    unsigned int _resultIndex;
    ? _flags;
}


@property (nonatomic) NSUInteger basemapId;
@property (nonatomic) NSUInteger businessId;
@property (nonatomic) BOOL hasBasemapId;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) BOOL hasLocalSearchProviderId;
@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) unsigned int localSearchProviderId;
@property (nonatomic) unsigned int resultIndex;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif