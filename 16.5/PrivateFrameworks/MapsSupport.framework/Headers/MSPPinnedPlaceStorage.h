// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPPINNEDPLACESTORAGE_H
#define MSPPINNEDPLACESTORAGE_H

@class PBCodable, PBUnknownFields, NSMutableArray, NSString, GEOMapItemStorage;
@protocol NSCopying;



@interface MSPPinnedPlaceStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *contactStorages; // ivar: _contactStorages
@property (retain, nonatomic) NSString *customName; // ivar: _customName
@property (readonly, nonatomic) BOOL hasCustomName;
@property (nonatomic) BOOL hasHidden;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasMapItemStorage;
@property (readonly, nonatomic) BOOL hasOriginatingAddressString;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage; // ivar: _mapItemStorage
@property (retain, nonatomic) NSString *originatingAddressString; // ivar: _originatingAddressString
@property (nonatomic) int type; // ivar: _type
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(Class)contactStorageType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactStorageAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addContactStorage:(id)arg0 ;
-(void)clearContactStorages;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif