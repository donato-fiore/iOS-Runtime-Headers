// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDCHAINPCSDATA_H
#define CKDCHAINPCSDATA_H

@class CKEncryptedData;
@protocol NSSecureCoding;


#import "CKDPCSData.h"

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding>



@property (readonly, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey; // ivar: _encryptedChainPCSPrivateKey


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPCSData:(id)arg0 encryptedPrivateKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif