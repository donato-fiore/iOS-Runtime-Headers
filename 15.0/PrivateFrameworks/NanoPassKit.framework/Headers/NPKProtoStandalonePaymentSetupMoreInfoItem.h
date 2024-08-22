// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTSETUPMOREINFOITEM_H
#define NPKPROTOSTANDALONEPAYMENTSETUPMOREINFOITEM_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentSetupMoreInfoItem : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasImageData;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (readonly, nonatomic) BOOL hasLinkText;
@property (readonly, nonatomic) BOOL hasLinkURL;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (retain, nonatomic) NSString *linkText; // ivar: _linkText
@property (retain, nonatomic) NSString *linkURL; // ivar: _linkURL
@property (retain, nonatomic) NSString *title; // ivar: _title


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