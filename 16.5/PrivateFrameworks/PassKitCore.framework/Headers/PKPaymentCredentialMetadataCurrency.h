// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTCREDENTIALMETADATACURRENCY_H
#define PKPAYMENTCREDENTIALMETADATACURRENCY_H

@class NSString;


#import "PKPaymentCredentialMetadata.h"

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode


-(BOOL)_isEqualToMetadata:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)displayString;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif