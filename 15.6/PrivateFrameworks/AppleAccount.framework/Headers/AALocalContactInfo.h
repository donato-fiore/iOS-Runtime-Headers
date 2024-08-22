// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AALOCALCONTACTINFO_H
#define AALOCALCONTACTINFO_H

@class NSUUID, NSNumber, NSString, NSData;
@protocol NSSecureCoding, NSCopying, AAInheritanceContactInfo;

#import <Foundation/Foundation.h>


@interface AALocalContactInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger contactType; // ivar: _contactType
@property (copy, nonatomic) NSUUID *custodianID; // ivar: _custodianID
@property (readonly, nonatomic) NSNumber *familyDSID; // ivar: _familyDSID
@property (readonly, nonatomic) NSString *familyMemberType; // ivar: _familyMemberType
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSObject<AAInheritanceContactInfo> *inheritanceContactInfo; // ivar: _inheritanceContactInfo
@property (readonly, nonatomic) BOOL isChild; // ivar: _isChild
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) NSInteger trustedContactStatus; // ivar: _trustedContactStatus


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToLocalContact:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFamilyMember;
-(id)_detailsTextForContactType;
-(id)_fullNameFromFirstName:(id)arg0 lastName:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)detailsText;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFamilyDSID:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 appleID:(id)arg4 familyMemberType:(id)arg5 isChild:(BOOL)arg6 ;
-(id)initWithHandle:(id)arg0 contact:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif