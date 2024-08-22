// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDONATIONVALUE_H
#define CNDONATIONVALUE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNDonationOrigin.h"

@interface CNDonationValue : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) CNDonationOrigin *origin; // ivar: _origin


+(BOOL)supportsSecureCoding;
+(id)donationValueWithEmailAddress:(id)arg0 label:(id)arg1 origin:(id)arg2 ;
+(id)donationValueWithImageData:(id)arg0 origin:(id)arg1 ;
+(id)donationValueWithNameComponents:(id)arg0 origin:(id)arg1 ;
+(id)donationValueWithPhoneNumber:(id)arg0 label:(id)arg1 origin:(id)arg2 ;
+(id)donationValueWithPostalAddress:(id)arg0 style:(NSInteger)arg1 label:(id)arg2 origin:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithNewExpirationDate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)propertyListRepresentation;
-(void)acceptDonationValueVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updatePropertyListRepresentation:(id)arg0 ;


@end


#endif