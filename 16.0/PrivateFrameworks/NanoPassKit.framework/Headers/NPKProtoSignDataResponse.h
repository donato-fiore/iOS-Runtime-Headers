// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSIGNDATARESPONSE_H
#define NPKPROTOSIGNDATARESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoSignDataResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *certsBytes; // ivar: _certsBytes
@property (readonly, nonatomic) BOOL hasCertsBytes;
@property (nonatomic) BOOL hasPending;
@property (readonly, nonatomic) BOOL hasSignatureInfoBytes;
@property (readonly, nonatomic) BOOL hasSignedData;
@property (nonatomic) BOOL pending; // ivar: _pending
@property (retain, nonatomic) NSData *signatureInfoBytes; // ivar: _signatureInfoBytes
@property (retain, nonatomic) NSData *signedData; // ivar: _signedData


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