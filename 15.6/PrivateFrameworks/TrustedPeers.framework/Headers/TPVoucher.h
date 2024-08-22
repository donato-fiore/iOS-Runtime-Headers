// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPVOUCHER_H
#define TPVOUCHER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface TPVoucher : NSObject

@property (retain, nonatomic) NSString *beneficiaryID; // ivar: _beneficiaryID
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (retain, nonatomic) NSData *sig; // ivar: _sig
@property (retain, nonatomic) NSString *sponsorID; // ivar: _sponsorID


+(id)voucherInfoWithData:(id)arg0 sig:(id)arg1 ;
+(id)voucherWithReason:(NSUInteger)arg0 beneficiaryID:(id)arg1 sponsorID:(id)arg2 signingKeyPair:(id)arg3 error:(*id)arg4 ;
-(BOOL)checkSignatureWithKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVoucher:(id)arg0 ;
-(id)createRecoveryECPublicKey:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithObj:(id)arg0 data:(id)arg1 sig:(id)arg2 ;


@end


#endif