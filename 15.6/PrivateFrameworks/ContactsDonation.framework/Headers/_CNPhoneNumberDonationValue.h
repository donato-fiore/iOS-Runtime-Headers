// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNPHONENUMBERDONATIONVALUE_H
#define _CNPHONENUMBERDONATIONVALUE_H

@class NSString, CNPhoneNumber;


#import "CNDonationValue.h"

@interface _CNPhoneNumberDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) CNPhoneNumber *phoneNumber; // ivar: _phoneNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithNewExpirationDate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 label:(id)arg1 origin:(id)arg2 ;
-(void)acceptDonationValueVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePropertyListRepresentation:(id)arg0 ;


@end


#endif