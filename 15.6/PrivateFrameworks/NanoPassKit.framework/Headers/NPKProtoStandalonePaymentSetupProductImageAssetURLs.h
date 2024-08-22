// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOSTANDALONEPAYMENTSETUPPRODUCTIMAGEASSETURLS_H
#define NPKPROTOSTANDALONEPAYMENTSETUPPRODUCTIMAGEASSETURLS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *digitalCardImageUrl; // ivar: _digitalCardImageUrl
@property (readonly, nonatomic) BOOL hasDigitalCardImageUrl;
@property (readonly, nonatomic) BOOL hasLogoImageUrl;
@property (readonly, nonatomic) BOOL hasThumbnailImageUrl;
@property (retain, nonatomic) NSString *logoImageUrl; // ivar: _logoImageUrl
@property (retain, nonatomic) NSString *thumbnailImageUrl; // ivar: _thumbnailImageUrl


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