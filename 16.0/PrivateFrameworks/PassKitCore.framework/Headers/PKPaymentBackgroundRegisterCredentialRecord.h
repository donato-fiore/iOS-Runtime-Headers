// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTBACKGROUNDREGISTERCREDENTIALRECORD_H
#define PKPAYMENTBACKGROUNDREGISTERCREDENTIALRECORD_H

@class NSString, NSData;


#import "PKPaymentBackgroundDownloadRecord.h"

@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord

@property (copy, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (copy, nonatomic) NSData *responseData; // ivar: _responseData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredentialIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif