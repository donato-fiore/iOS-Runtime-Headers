// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPOSTALADDRESSCONTACTPREDICATE_H
#define CNPOSTALADDRESSCONTACTPREDICATE_H



#import "CNPredicate.h"
#import "CNPostalAddress.h"

@interface CNPostalAddressContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress; // ivar: _postalAddress


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPostalAddress:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif