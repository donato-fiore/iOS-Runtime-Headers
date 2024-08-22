// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCREDENTIALMETADATADATE_H
#define PKPAYMENTCREDENTIALMETADATADATE_H

@class NSString;


#import "PKPaymentCredentialMetadata.h"

@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *displayFormat; // ivar: _displayFormat


-(BOOL)_isEqualToMetadata:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)displayString;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif