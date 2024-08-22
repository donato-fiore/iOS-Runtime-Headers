// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAREABLEPASSMETADATA_H
#define PKSHAREABLEPASSMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKShareablePassMetadataPreview.h"
#import "PKPushProvisioningTarget.h"

@interface PKShareablePassMetadata : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *accountHash;
@property (readonly, nonatomic) NSString *cardConfigurationIdentifier;
@property (readonly, nonatomic) NSString *cardTemplateIdentifier;
@property (readonly, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *ownerDisplayName;
@property (readonly, nonatomic) *CGImage passThumbnailImage;
@property (readonly, nonatomic) PKShareablePassMetadataPreview *preview; // ivar: _preview
@property (retain, nonatomic) PKPushProvisioningTarget *provisioningTarget; // ivar: _provisioningTarget
@property (retain, nonatomic) NSString *relyingPartyIdentifier;
@property (nonatomic) BOOL requiresUnifiedAccessCapableDevice;
@property (retain, nonatomic) NSString *serverEnvironmentIdentifier; // ivar: _serverEnvironmentIdentifier
@property (readonly, nonatomic) NSString *sharingInstanceIdentifier;
@property (readonly, nonatomic) NSString *templateIdentifier;


+(BOOL)supportsSecureCoding;
-(id)_initWithProvisioningCredentialIdentifier:(id)arg0 cardConfigurationIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 passThumbnailImage:(struct CGImage *)arg3 ownerDisplayName:(id)arg4 localizedDescription:(id)arg5 accountHash:(id)arg6 templateIdentifier:(id)arg7 relyingPartyIdentifier:(id)arg8 requiresUnifiedAccessCapableDevice:(BOOL)arg9 passPreviewMetadata:(id)arg10 ;
-(id)_initWithPushProvisioningTarget:(id)arg0 passThumbnailImage:(struct CGImage *)arg1 ownerDisplayName:(id)arg2 localizedDescription:(id)arg3 passPreviewMetadata:(id)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)environmentIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 cardConfigurationIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 cardConfigurationIdentifier:(id)arg1 sharingInstanceIdentifier:(id)arg2 passThumbnailImage:(struct CGImage *)arg3 ownerDisplayName:(id)arg4 localizedDescription:(id)arg5 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 sharingInstanceIdentifier:(id)arg1 cardConfigurationIdentifier:(id)arg2 preview:(id)arg3 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 sharingInstanceIdentifier:(id)arg1 cardTemplateIdentifier:(id)arg2 preview:(id)arg3 ;
-(id)initWithProvisioningCredentialIdentifier:(id)arg0 sharingInstanceIdentifier:(id)arg1 passThumbnailImage:(struct CGImage *)arg2 ownerDisplayName:(id)arg3 localizedDescription:(id)arg4 accountHash:(id)arg5 templateIdentifier:(id)arg6 relyingPartyIdentifier:(id)arg7 requiresUnifiedAccessCapableDevice:(BOOL)arg8 ;
-(id)initWithPushProvisioningTarget:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEnvironmentIdentifier:(id)arg0 ;


@end


#endif