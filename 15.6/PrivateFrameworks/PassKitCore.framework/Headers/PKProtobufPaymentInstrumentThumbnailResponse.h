// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFPAYMENTINSTRUMENTTHUMBNAILRESPONSE_H
#define PKPROTOBUFPAYMENTINSTRUMENTTHUMBNAILRESPONSE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasManifestHash;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (retain, nonatomic) NSString *manifestHash; // ivar: _manifestHash
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSData *thumbnailImage; // ivar: _thumbnailImage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif