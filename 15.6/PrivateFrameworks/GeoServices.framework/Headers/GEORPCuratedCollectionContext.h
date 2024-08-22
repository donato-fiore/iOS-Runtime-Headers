// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPCURATEDCOLLECTIONCONTEXT_H
#define GEORPCURATEDCOLLECTIONCONTEXT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEORPCuratedCollectionContext : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _placeEntityMuids;
    NSUInteger _curatedCollectionMuid;
    NSMutableArray *_imageInfos;
    NSString *_originalDescription;
    NSString *_originalName;
    NSString *_originalUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (nonatomic) NSUInteger curatedCollectionMuid;
@property (nonatomic) BOOL hasCuratedCollectionMuid;
@property (readonly, nonatomic) BOOL hasOriginalDescription;
@property (readonly, nonatomic) BOOL hasOriginalName;
@property (readonly, nonatomic) BOOL hasOriginalUrl;
@property (retain, nonatomic) NSMutableArray *imageInfos;
@property (retain, nonatomic) NSString *originalDescription;
@property (retain, nonatomic) NSString *originalName;
@property (retain, nonatomic) NSString *originalUrl;
@property (readonly, nonatomic) *NSUInteger placeEntityMuids;
@property (readonly, nonatomic) NSUInteger placeEntityMuidsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)imageInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)placeEntityMuidAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imageInfoAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addImageInfo:(id)arg0 ;
-(void)addPlaceEntityMuid:(NSUInteger)arg0 ;
-(void)clearImageInfos;
-(void)clearPlaceEntityMuids;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif