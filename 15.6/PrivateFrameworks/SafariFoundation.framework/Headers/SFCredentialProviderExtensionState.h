// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCREDENTIALPROVIDEREXTENSIONSTATE_H
#define SFCREDENTIALPROVIDEREXTENSIONSTATE_H

@class SFExternalCredentialIdentityStoreIdentifier, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier; // ivar: _credentialIdentityStoreIdentifier
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly, nonatomic) BOOL supportsIncrementalUpdates; // ivar: _supportsIncrementalUpdates


+(BOOL)supportsSecureCoding;
+(id)credentialProviderExtensionWithDisabledState;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabledState:(BOOL)arg0 supportsIncrementalUpdates:(BOOL)arg1 ;
-(id)initWithEnabledState:(BOOL)arg0 supportsIncrementalUpdates:(BOOL)arg1 localizedDisplayName:(id)arg2 credentialIdentityStoreIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif