// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIPARTIST_H
#define MIPARTIST_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface MIPArtist : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *artworkId; // ivar: _artworkId
@property (retain, nonatomic) NSString *cloudUniversalLibraryId; // ivar: _cloudUniversalLibraryId
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasPersistentId;
@property (readonly, nonatomic) BOOL hasSortName;
@property (nonatomic) BOOL hasStoreId;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger persistentId; // ivar: _persistentId
@property (retain, nonatomic) NSString *sortName; // ivar: _sortName
@property (nonatomic) NSInteger storeId; // ivar: _storeId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif