// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDSHAREABLEPASSCONFIGURATION_H
#define PKADDSHAREABLEPASSCONFIGURATION_H

@class NSArray, NSString;


#import "PKAddSecureElementPassConfiguration.h"

@interface PKAddShareablePassConfiguration : PKAddSecureElementPassConfiguration

@property (readonly, nonatomic) NSArray *credentialsMetadata; // ivar: _credentialsMetadata
@property (nonatomic) BOOL noncesFetched; // ivar: _noncesFetched
@property (readonly, nonatomic) NSUInteger primaryAction; // ivar: _primaryAction
@property (readonly, nonatomic) NSString *provisioningPolicyIdentifier; // ivar: _provisioningPolicyIdentifier
@property (readonly, nonatomic) BOOL requiresUnifiedAccessCapableDevice;


+(BOOL)supportsSecureCoding;
+(void)configurationForPassMetadata:(id)arg0 provisioningPolicyIdentifier:(id)arg1 primaryAction:(NSUInteger)arg2 completion:(id)arg3 ;
-(BOOL)hasRequiredDataForProvisioning;
-(id)_PKAddShareablePassConfigurationPrimaryActionToString:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryAction:(NSUInteger)arg0 credentialsMetadata:(id)arg1 provisioningPolicyIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;


@end


#endif