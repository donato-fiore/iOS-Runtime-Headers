// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCOLLECTIONSTORAGE_H
#define MSPCOLLECTIONSTORAGE_H

@class PBCodable, PBUnknownFields, NSString, NSData;
@protocol NSCopying;



@interface MSPCollectionStorage : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
}


@property (retain, nonatomic) NSString *collectionDescription; // ivar: _collectionDescription
@property (readonly, nonatomic) BOOL hasCollectionDescription;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (readonly, nonatomic) BOOL hasItemData;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSData *image; // ivar: _image
@property (retain, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (retain, nonatomic) NSData *itemData; // ivar: _itemData
@property (retain, nonatomic) NSString *title; // ivar: _title
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