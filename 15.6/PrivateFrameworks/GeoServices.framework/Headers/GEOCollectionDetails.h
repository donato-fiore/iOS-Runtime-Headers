// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOLLECTIONDETAILS_H
#define GEOCOLLECTIONDETAILS_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOCollectionDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _collectionIds;
    NSString *_collectionCategory;
    NSUInteger _targetId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _currentlySaved;
    ? _flags;
}


@property (retain, nonatomic) NSString *collectionCategory;
@property (readonly, nonatomic) *NSUInteger collectionIds;
@property (readonly, nonatomic) NSUInteger collectionIdsCount;
@property (nonatomic) BOOL currentlySaved;
@property (readonly, nonatomic) BOOL hasCollectionCategory;
@property (nonatomic) BOOL hasCurrentlySaved;
@property (nonatomic) BOOL hasTargetId;
@property (nonatomic) NSUInteger targetId;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)collectionIdAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addCollectionId:(NSUInteger)arg0 ;
-(void)clearCollectionIds;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif