// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKUSERIDENTITY_H
#define CKUSERIDENTITY_H

@class NSArray, NSString, NSData, NSPersonNameComponents;
@protocol CKPropertiesDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKUserIdentityLookupInfo.h"
#import "CKRecordID.h"

@interface CKUserIdentity : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>



@property (copy) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSData *encryptedPersonalInfo; // ivar: _encryptedPersonalInfo
@property (readonly, copy) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property BOOL hasiCloudAccount; // ivar: _hasiCloudAccount
@property BOOL isCached; // ivar: _isCached
@property (readonly, copy) NSString *lastName; // ivar: _lastName
@property (copy) CKUserIdentityLookupInfo *lookupInfo; // ivar: _lookupInfo
@property (copy) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (retain) NSData *outOfNetworkPrivateKey; // ivar: _outOfNetworkPrivateKey
@property NSUInteger publicKeyVersion; // ivar: _publicKeyVersion
@property (retain) NSData *publicSharingKey; // ivar: _publicSharingKey
@property (readonly) Class superclass;
@property (copy) CKRecordID *userRecordID; // ivar: _userRecordID


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