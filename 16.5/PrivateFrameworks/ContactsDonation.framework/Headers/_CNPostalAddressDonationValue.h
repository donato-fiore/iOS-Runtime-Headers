// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNPOSTALADDRESSDONATIONVALUE_H
#define _CNPOSTALADDRESSDONATIONVALUE_H

@class NSString, CNPostalAddress;


#import "CNDonationValue.h"

@interface _CNPostalAddressDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress; // ivar: _postalAddress
@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithNewExpirationDate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPostalAddress:(id)arg0 style:(NSInteger)arg1 label:(id)arg2 origin:(id)arg3 ;
-(void)acceptDonationValueVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePropertyListRepresentation:(id)arg0 ;


@end


#endif