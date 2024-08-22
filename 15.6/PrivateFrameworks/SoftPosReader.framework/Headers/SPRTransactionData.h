// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRTRANSACTIONDATA_H
#define SPRTRANSACTIONDATA_H

@class NSData, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRTransactionData : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *cardHolderData; // ivar: _cardHolderData
@property (readonly, copy, nonatomic) NSData *cvmResult; // ivar: _cvmResult
@property (readonly, nonatomic) unsigned char cvmType; // ivar: _cvmType
@property (readonly, copy, nonatomic) NSData *ecdsaCertificate; // ivar: _ecdsaCertificate
@property (readonly, copy, nonatomic) NSString *kekId; // ivar: _kekId
@property (readonly, copy, nonatomic) NSData *kernelIdentityKeyAttestation; // ivar: _kernelIdentityKeyAttestation
@property (readonly, copy, nonatomic) NSData *languagePreference; // ivar: _languagePreference
@property (readonly, copy, nonatomic) NSData *last4Pan; // ivar: _last4Pan
@property (readonly, copy, nonatomic) NSData *merchantCategoryCode; // ivar: _merchantCategoryCode
@property (readonly, copy, nonatomic) NSString *network; // ivar: _network
@property (readonly, nonatomic) unsigned char outcomeStatus; // ivar: _outcomeStatus
@property (readonly, nonatomic) BOOL pinRequired; // ivar: _pinRequired
@property (readonly, nonatomic) NSInteger readError; // ivar: _readError
@property (readonly, copy, nonatomic) NSData *transactionResultData; // ivar: _transactionResultData
@property (readonly, copy, nonatomic) NSArray *vasResponses; // ivar: _vasResponses


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVasResponses:(id)arg0 cardHolderData:(id)arg1 network:(id)arg2 cvmResult:(id)arg3 merchantCategoryCode:(id)arg4 pinRequired:(BOOL)arg5 kernelIdentityKeyAttestation:(id)arg6 ecdsaCertificate:(id)arg7 transactionResultData:(id)arg8 kekId:(id)arg9 languagePreference:(id)arg10 ;
-(id)initWithVasResponses:(id)arg0 cardHolderData:(id)arg1 network:(id)arg2 cvmType:(unsigned char)arg3 cvmResult:(id)arg4 merchantCategoryCode:(id)arg5 pinRequired:(BOOL)arg6 kernelIdentityKeyAttestation:(id)arg7 ecdsaCertificate:(id)arg8 transactionResultData:(id)arg9 kekId:(id)arg10 languagePreference:(id)arg11 ;
-(id)initWithVasResponses:(id)arg0 cardHolderData:(id)arg1 network:(id)arg2 last4Pan:(id)arg3 cvmResult:(id)arg4 merchantCategoryCode:(id)arg5 pinRequired:(BOOL)arg6 kernelIdentityKeyAttestation:(id)arg7 ecdsaCertificate:(id)arg8 transactionResultData:(id)arg9 kekId:(id)arg10 languagePreference:(id)arg11 ;
-(id)initWithVasResponses:(id)arg0 cardHolderData:(id)arg1 network:(id)arg2 outcomeStatus:(unsigned char)arg3 cvmType:(unsigned char)arg4 cvmResult:(id)arg5 merchantCategoryCode:(id)arg6 pinRequired:(BOOL)arg7 kernelIdentityKeyAttestation:(id)arg8 ecdsaCertificate:(id)arg9 transactionResultData:(id)arg10 kekId:(id)arg11 languagePreference:(id)arg12 ;
-(id)initWithVasResponses:(id)arg0 cardHolderData:(id)arg1 network:(id)arg2 outcomeStatus:(unsigned char)arg3 cvmType:(unsigned char)arg4 cvmResult:(id)arg5 merchantCategoryCode:(id)arg6 pinRequired:(BOOL)arg7 kernelIdentityKeyAttestation:(id)arg8 ecdsaCertificate:(id)arg9 transactionResultData:(id)arg10 kekId:(id)arg11 languagePreference:(id)arg12 readError:(NSInteger)arg13 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif