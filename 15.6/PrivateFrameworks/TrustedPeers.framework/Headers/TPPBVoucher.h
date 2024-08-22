// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPBVOUCHER_H
#define TPPBVOUCHER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface TPPBVoucher : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *beneficiary; // ivar: _beneficiary
@property (readonly, nonatomic) BOOL hasBeneficiary;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) BOOL hasSponsor;
@property (nonatomic) int reason; // ivar: _reason
@property (retain, nonatomic) NSString *sponsor; // ivar: _sponsor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reasonAsString:(int)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif