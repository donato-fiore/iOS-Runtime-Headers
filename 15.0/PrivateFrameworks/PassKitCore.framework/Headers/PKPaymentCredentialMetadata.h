// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCREDENTIALMETADATA_H
#define PKPAYMENTCREDENTIALMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPaymentCredentialMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(Class)classForValueType:(id)arg0 ;
+(id)paymentCredentialMetadataWithConfiguration:(id)arg0 ;
-(BOOL)_isEqualToMetadata:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)displayString;
-(id)initWithConfiguration:(id)arg0 ;


@end


#endif