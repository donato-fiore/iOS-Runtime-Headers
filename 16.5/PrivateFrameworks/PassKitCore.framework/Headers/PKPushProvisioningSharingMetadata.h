// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPUSHPROVISIONINGSHARINGMETADATA_H
#define PKPUSHPROVISIONINGSHARINGMETADATA_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL allowProvisioningOnLockedDevice;
@property (retain, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (retain, nonatomic) NSString *credentialAuthorityIdentifier; // ivar: _credentialAuthorityIdentifier
@property (copy, nonatomic) NSString *provisioningCredentialHash; // ivar: _provisioningCredentialHash
@property (nonatomic) NSUInteger securityOptions; // ivar: _securityOptions
@property (copy, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) NSUInteger sharingStatus; // ivar: _sharingStatus
@property (nonatomic) NSInteger source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEncryptedProvisioningTarget:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif