// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREABLEPASSMETADATA_H
#define PKSHAREABLEPASSMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKImage.h"

@interface PKShareablePassMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *accountHash; // ivar: _accountHash
@property (readonly, nonatomic) NSString *cardConfigurationIdentifier; // ivar: _cardConfigurationIdentifier
@property (readonly, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (readonly, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, nonatomic) NSString *ownerDisplayName; // ivar: _ownerDisplayName
@property (readonly, nonatomic) *CGImage passThumbnailImage;
@property (retain, nonatomic) PKImage *pkPassThumbnailImage; // ivar: _pkPassThumbnailImage
@property (readonly, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, nonatomic) BOOL requiresUnifiedAccessCapableDevice; // ivar: _requiresUnifiedAccessCapableDevice
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier; // ivar: _sharingInstanceIdentifier
@property (nonatomic) NSUInteger targetDevice; // ivar: _targetDevice
@property (readonly, nonatomic) NSString *templateIdentifier; // ivar: _templateIdentifier


+(BOOL)supportsSecureCoding;
-(id)_initWithProvisioningCredentialIdentifier:(id)arg0 cardConfigurationIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 passThumbnailImage:(struct CGImage *)arg3 ownerDisplayName:(id)arg4 localizedDescription:(id)arg5 accountHash:(id)arg6 templateIdentifier:(id)arg7 relyingPartyIdentifier:(id)arg8 requiresUnifiedAccessCapableDevice:(BOOL)arg9 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 cardConfigurationIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 cardConfigurationIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 passThumbnailImage:(struct CGImage *)arg3 ownerDisplayName:(id)arg4 localizedDescription:(id)arg5 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 sharingInstanceIdentifier:(id)arg1 passThumbnailImage:(struct CGImage *)arg2 ownerDisplayName:(id)arg3 localizedDescription:(id)arg4 accountHash:(id)arg5 templateIdentifier:(id)arg6 relyingPartyIdentifier:(id)arg7 requiresUnifiedAccessCapableDevice:(BOOL)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif