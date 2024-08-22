// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFTRUSTKEY_H
#define NFTRUSTKEY_H

@class NSNumber, NSString, NSArray, NSData;


#import "NFTrustObject.h"

@interface NFTrustKey : NFTrustObject

@property (retain, nonatomic) NSNumber *counterLimit; // ivar: _counterLimit
@property (retain, nonatomic) NSNumber *counterValue; // ivar: _counterValue
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *keyAttestation; // ivar: _keyAttestation
@property (retain, nonatomic) NSString *keyAttestationAuthority; // ivar: _keyAttestationAuthority
@property (retain, nonatomic) NSArray *localValidations; // ivar: _localValidations
@property (retain, nonatomic) NSData *publicKey; // ivar: _publicKey


+(BOOL)supportsSecureCoding;
+(id)keyWithIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif