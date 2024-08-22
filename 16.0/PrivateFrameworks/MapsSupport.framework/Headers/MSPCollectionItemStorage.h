// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPCOLLECTIONITEMSTORAGE_H
#define MSPCOLLECTIONITEMSTORAGE_H

@class PBCodable, PBUnknownFields, NSData;
@protocol NSCopying;



@interface MSPCollectionItemStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (retain, nonatomic) NSData *contents; // ivar: _contents
@property (retain, nonatomic) NSData *contentsTimestamp; // ivar: _contentsTimestamp
@property (readonly, nonatomic) BOOL hasContents;
@property (readonly, nonatomic) BOOL hasContentsTimestamp;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasPositionTimestamp;
@property (readonly, nonatomic) BOOL hasStorageIdentifier;
@property (retain, nonatomic) NSData *position; // ivar: _position
@property (retain, nonatomic) NSData *positionTimestamp; // ivar: _positionTimestamp
@property (retain, nonatomic) NSData *storageIdentifier; // ivar: _storageIdentifier
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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