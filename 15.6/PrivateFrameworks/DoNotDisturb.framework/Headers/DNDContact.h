// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDCONTACT_H
#define DNDCONTACT_H

@class NSString, NSSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy, nonatomic) NSSet *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, copy, nonatomic) NSString *nickName; // ivar: _nickName
@property (readonly, copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, copy, nonatomic) NSSet *phoneNumbers; // ivar: _phoneNumbers


+(BOOL)supportsSecureCoding;
+(id)normalizePhoneNumber:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesContact:(id)arg0 ;
-(BOOL)matchesContactHandle:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionForRedacted:(BOOL)arg0 ;
-(id)_initWithContactIdentifier:(id)arg0 firstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 nickName:(id)arg4 organizationName:(id)arg5 phoneNumbers:(id)arg6 emailAddresses:(id)arg7 ;
-(id)_redactedDescriptionsForStrings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diffDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)normalizedPhoneNumbers;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif