// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKUSERIDENTITY_H
#define CKUSERIDENTITY_H

@class NSArray, NSString, NSData, NSPersonNameComponents;
@protocol CKPropertiesDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKUserIdentityLookupInfo.h"
#import "CKRecordID.h"

@interface CKUserIdentity : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *encryptedPersonalInfo; // ivar: _encryptedPersonalInfo
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hasiCloudAccount; // ivar: _hasiCloudAccount
@property (nonatomic) BOOL isCached; // ivar: _isCached
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) CKUserIdentityLookupInfo *lookupInfo; // ivar: _lookupInfo
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (retain, nonatomic) NSData *outOfNetworkPrivateKey; // ivar: _outOfNetworkPrivateKey
@property (nonatomic) NSUInteger publicKeyVersion; // ivar: _publicKeyVersion
@property (retain, nonatomic) NSData *publicSharingKey; // ivar: _publicSharingKey
@property (readonly) Class superclass;
@property (copy, nonatomic) CKRecordID *userRecordID; // ivar: _userRecordID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToUserIdentity:(id)arg0 ;
-(BOOL)isEquivalentToUserIdentityOrPublicKey:(id)arg0 ;
-(BOOL)isOutOfNetwork;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserRecordID:(id)arg0 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif