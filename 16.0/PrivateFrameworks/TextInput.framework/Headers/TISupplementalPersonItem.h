// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISUPPLEMENTALPERSONITEM_H
#define TISUPPLEMENTALPERSONITEM_H

@class NSString, NSPersonNameComponents;


#import "TISupplementalItem.h"

@interface TISupplementalPersonItem : TISupplementalItem

@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (copy, nonatomic) NSString *nickname; // ivar: _nickname
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, nonatomic) NSPersonNameComponents *personNameComponents;
@property (copy, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (copy, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (copy, nonatomic) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (copy, nonatomic) NSString *phoneticOrganizationName; // ivar: _phoneticOrganizationName
@property (copy, nonatomic) NSString *previousFamilyName; // ivar: _previousFamilyName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithPersonNameComponents:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif