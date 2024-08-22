// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSRTPPARAMETERS_H
#define HMDSRTPPARAMETERS_H

@class HAPTLVBase, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDSRTPCryptoSuite.h"

@interface HMDSRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDSRTPCryptoSuite *srtpCryptoSuite; // ivar: _srtpCryptoSuite
@property (readonly, copy, nonatomic) NSData *srtpMasterKey; // ivar: _srtpMasterKey
@property (readonly, copy, nonatomic) NSData *srtpMasterSalt; // ivar: _srtpMasterSalt
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(BOOL)compatibleWithRemoteEndPoint:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCryptoSuite:(id)arg0 masterKey:(id)arg1 masterSalt:(id)arg2 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif