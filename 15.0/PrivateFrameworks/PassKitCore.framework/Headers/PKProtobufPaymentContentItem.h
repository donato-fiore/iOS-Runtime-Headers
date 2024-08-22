// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPROTOBUFPAYMENTCONTENTITEM_H
#define PKPROTOBUFPAYMENTCONTENTITEM_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface PKProtobufPaymentContentItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL centered; // ivar: _centered
@property (nonatomic) BOOL hasCentered;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasImageRequest;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSData *image; // ivar: _image
@property (retain, nonatomic) NSData *imageRequest; // ivar: _imageRequest
@property (retain, nonatomic) NSData *label; // ivar: _label
@property (retain, nonatomic) NSData *title; // ivar: _title


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