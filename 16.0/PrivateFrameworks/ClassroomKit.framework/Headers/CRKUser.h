// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKUSER_H
#define CRKUSER_H

@class NSString, NSPersonNameComponents, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CRKUser : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSString *imageIdentifier; // ivar: _imageIdentifier
@property (copy, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (readonly, nonatomic) BOOL isMeCardUser;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *phoneticFamilyName; // ivar: _phoneticFamilyName
@property (copy, nonatomic) NSString *phoneticGivenName; // ivar: _phoneticGivenName
@property (nonatomic) NSInteger role; // ivar: _role
@property (nonatomic, getter=shouldUseMeCardIfAvailable) BOOL useMeCardIfAvailable; // ivar: _useMeCardIfAvailable
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) NSData *userImageData; // ivar: _userImageData
@property (copy, nonatomic) NSString *userSource; // ivar: _userSource


+(BOOL)supportsSecureCoding;
+(id)customUserFromMeCardUser:(id)arg0 ;
+(id)makeMeCardUserProvider;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUser:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryValue;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif