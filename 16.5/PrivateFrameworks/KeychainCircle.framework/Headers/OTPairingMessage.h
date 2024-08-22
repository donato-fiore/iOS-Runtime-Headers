// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OTPAIRINGMESSAGE_H
#define OTPAIRINGMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "OTSponsorToApplicantRound1M2.h"
#import "OTApplicantToSponsorRound2M1.h"
#import "OTSupportOctagonMessage.h"
#import "OTSupportSOSMessage.h"
#import "OTSponsorToApplicantRound2M2.h"

@interface OTPairingMessage : PBCodable <NSCopying>



@property (retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch; // ivar: _epoch
@property (readonly, nonatomic) BOOL hasEpoch;
@property (readonly, nonatomic) BOOL hasPrepare;
@property (readonly, nonatomic) BOOL hasSupportsOctagon;
@property (readonly, nonatomic) BOOL hasSupportsSOS;
@property (readonly, nonatomic) BOOL hasVoucher;
@property (retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare; // ivar: _prepare
@property (retain, nonatomic) OTSupportOctagonMessage *supportsOctagon; // ivar: _supportsOctagon
@property (retain, nonatomic) OTSupportSOSMessage *supportsSOS; // ivar: _supportsSOS
@property (retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher; // ivar: _voucher


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