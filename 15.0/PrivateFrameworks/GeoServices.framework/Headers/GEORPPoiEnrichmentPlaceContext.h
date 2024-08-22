// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPPOIENRICHMENTPLACECONTEXT_H
#define GEORPPOIENRICHMENTPLACECONTEXT_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOPDMapsIdentifier.h"

@interface GEORPPoiEnrichmentPlaceContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_entityNames;
    NSMutableArray *_localizedAddress;
    NSString *_mapsCategoryId;
    GEOLatLng *_placeCenter;
    GEOPDMapsIdentifier *_placeId;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *entityNames;
@property (readonly, nonatomic) BOOL hasMapsCategoryId;
@property (readonly, nonatomic) BOOL hasPlaceCenter;
@property (readonly, nonatomic) BOOL hasPlaceId;
@property (readonly, nonatomic) BOOL hasWalletCategoryId;
@property (retain, nonatomic) NSMutableArray *localizedAddress;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (retain, nonatomic) GEOLatLng *placeCenter;
@property (retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property (retain, nonatomic) NSString *walletCategoryId;


+(BOOL)isValid:(id)arg0 ;
+(Class)entityNameType;
+(id)buildPlaceContextWithPlaceData:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)muid;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entityNameAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)localizedAddressAtIndex:(NSUInteger)arg0 ;
-(void)addEntityName:(id)arg0 ;
-(void)addLocalizedAddress:(id)arg0 ;
-(void)clearEntityNames;
-(void)clearLocalizedAddress;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif