// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CNNAMECOMPONENTSDONATIONVALUE_H
#define _CNNAMECOMPONENTSDONATIONVALUE_H

@class NSPersonNameComponents;


#import "CNDonationValue.h"

@interface _CNNameComponentsDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithNewExpirationDate:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNameComponents:(id)arg0 origin:(id)arg1 ;
-(void)acceptDonationValueVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePropertyListRepresentation:(id)arg0 ;


@end


#endif