// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTREMOTECREDENTIALFIDOPROFILE_H
#define PKPAYMENTREMOTECREDENTIALFIDOPROFILE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface PKPaymentRemoteCredentialFIDOProfile : NSObject

@property (readonly, copy, nonatomic) NSString *accountHash; // ivar: _accountHash
@property (readonly, copy, nonatomic) NSData *keyHash; // ivar: _keyHash
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif