// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSPERSON_H
#define CLSPERSON_H

@class NSString, NSPersonNameComponents;
@protocol CLSContactsSearchable;


#import "CLSObject.h"

@interface CLSPerson : CLSObject <CLSContactsSearchable>



@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (nonatomic) NSInteger axmAccountStatus; // ivar: _axmAccountStatus
@property (readonly, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (nonatomic, getter=isFederatedAccount) BOOL federatedAccount; // ivar: _federatedAccount
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSString *grade; // ivar: _grade
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *iCloudUserID; // ivar: _iCloudUserID
@property (nonatomic, getter=isEditable) BOOL isEditable; // ivar: _isEditable
@property (nonatomic, getter=isSearchable) BOOL isSearchable; // ivar: _isSearchable
@property (copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *orgID; // ivar: _orgID
@property (nonatomic) NSInteger passcodeType; // ivar: _passcodeType
@property (copy, nonatomic) NSString *personNumber; // ivar: _personNumber
@property (copy, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (copy, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (copy, nonatomic) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (nonatomic, getter=isProgressTrackingAllowed) BOOL progressTrackingAllowed; // ivar: _progressTrackingAllowed
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType


+(BOOL)supportsSecureCoding;
+(NSUInteger)roleFromString:(id)arg0 ;
+(id)_propertyNames;
+(id)stringForRole:(NSUInteger)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif