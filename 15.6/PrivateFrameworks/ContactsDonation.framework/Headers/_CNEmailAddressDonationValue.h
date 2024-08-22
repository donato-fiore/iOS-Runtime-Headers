// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNEMAILADDRESSDONATIONVALUE_H
#define _CNEMAILADDRESSDONATIONVALUE_H

@class NSString;


#import "CNDonationValue.h"

@interface _CNEmailAddressDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithNewExpirationDate:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddress:(id)arg0 label:(id)arg1 origin:(id)arg2 ;
-(void)acceptDonationValueVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePropertyListRepresentation:(id)arg0 ;


@end


#endif