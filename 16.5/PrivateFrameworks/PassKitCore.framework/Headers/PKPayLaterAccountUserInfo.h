// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERACCOUNTUSERINFO_H
#define PKPAYLATERACCOUNTUSERINFO_H

@class CNContact;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPayLaterAccountUserInfoValue.h"

@interface PKPayLaterAccountUserInfo : NSObject <NSSecureCoding, NSCopying>

 {
    CNContact *_contact;
}


@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *city; // ivar: _city
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *dateOfBirth; // ivar: _dateOfBirth
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *firstName; // ivar: _firstName
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *lastName; // ivar: _lastName
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *postalCode; // ivar: _postalCode
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *ssn; // ivar: _ssn
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *state; // ivar: _state
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *street1; // ivar: _street1
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *street2; // ivar: _street2
@property (retain, nonatomic) PKPayLaterAccountUserInfoValue *yearlyIncome; // ivar: _yearlyIncome


+(BOOL)supportsSecureCoding;
-(BOOL)hasUserInfo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)contact;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif