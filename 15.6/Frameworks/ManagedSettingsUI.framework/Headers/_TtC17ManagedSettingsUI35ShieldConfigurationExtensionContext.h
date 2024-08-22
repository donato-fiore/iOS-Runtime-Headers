// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17MANAGEDSETTINGSUI35SHIELDCONFIGURATIONEXTENSIONCONTEXT_H
#define _TTC17MANAGEDSETTINGSUI35SHIELDCONFIGURATIONEXTENSIONCONTEXT_H

@class NSExtensionContext;
@protocol _TtP17ManagedSettingsUI32ShieldConfigurationExtensionHost_, _TtP17ManagedSettingsUI34ShieldConfigurationExtensionVendor_;



@interface _TtC17ManagedSettingsUI35ShieldConfigurationExtensionContext : NSExtensionContext <_TtP17ManagedSettingsUI32ShieldConfigurationExtensionHost_, _TtP17ManagedSettingsUI34ShieldConfigurationExtensionVendor_>

 {
    ? $__lazy_storage_$_shieldConfigurationDataSource;
}




+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)fetchConfigurationDataForApplication:(id)arg0 localizedApplicationDisplayName:(id)arg1 categoryTokenData:(id)arg2 localizedCategoryDisplayName:(id)arg3 replyHandler:(id)arg4 ;
-(void)fetchConfigurationDataForApplication:(id)arg0 tokenData:(id)arg1 localizedDisplayName:(id)arg2 replyHandler:(id)arg3 ;
-(void)fetchConfigurationDataForWebDomain:(id)arg0 categoryTokenData:(id)arg1 localizedDisplayName:(id)arg2 replyHandler:(id)arg3 ;
-(void)fetchConfigurationDataForWebDomain:(id)arg0 tokenData:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif