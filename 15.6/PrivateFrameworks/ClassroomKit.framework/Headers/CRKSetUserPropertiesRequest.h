// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSETUSERPROPERTIESREQUEST_H
#define CRKSETUSERPROPERTIESREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier, NSString, NSData, NSNumber;



@interface CRKSetUserPropertiesRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (copy, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (copy, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (retain, nonatomic) NSNumber *useMeCardIfAvailable; // ivar: _useMeCardIfAvailable
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) NSString *userSource; // ivar: _userSource


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif