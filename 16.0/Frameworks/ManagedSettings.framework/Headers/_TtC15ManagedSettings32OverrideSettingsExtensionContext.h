// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MANAGEDSETTINGS32OVERRIDESETTINGSEXTENSIONCONTEXT_H
#define _TTC15MANAGEDSETTINGS32OVERRIDESETTINGSEXTENSIONCONTEXT_H

@class NSExtensionContext;
@protocol _TtP15ManagedSettings29OverrideSettingsExtensionHost_, _TtP15ManagedSettings31OverrideSettingsExtensionVendor_;



@interface _TtC15ManagedSettings32OverrideSettingsExtensionContext : NSExtensionContext <_TtP15ManagedSettings29OverrideSettingsExtensionHost_, _TtP15ManagedSettings31OverrideSettingsExtensionVendor_>

 {
    ? $__lazy_storage_$_overrideSettingsHandler;
}




+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)askToOverrideUnremovabilityOfApplicationWithBundleIdentifier:(id)arg0 teamIdentifier:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif