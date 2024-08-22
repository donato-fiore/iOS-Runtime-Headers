// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OTSPONSORTOAPPLICANTROUND2M2_H
#define OTSPONSORTOAPPLICANTROUND2M2_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasVoucher;
@property (readonly, nonatomic) BOOL hasVoucherSignature;
@property (retain, nonatomic) NSData *voucher; // ivar: _voucher
@property (retain, nonatomic) NSData *voucherSignature; // ivar: _voucherSignature


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