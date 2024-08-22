// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15MANAGEDSETTINGS28SHIELDACTIONEXTENSIONCONTEXT_H
#define _TTC15MANAGEDSETTINGS28SHIELDACTIONEXTENSIONCONTEXT_H

@class NSExtensionContext;
@protocol _TtP15ManagedSettings25ShieldActionExtensionHost_, _TtP15ManagedSettings27ShieldActionExtensionVendor_;



@interface _TtC15ManagedSettings28ShieldActionExtensionContext : NSExtensionContext <_TtP15ManagedSettings25ShieldActionExtensionHost_, _TtP15ManagedSettings27ShieldActionExtensionVendor_>

 {
    ? $__lazy_storage_$_shieldActionDelegate;
}




+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;
-(id)initWithInputItems:(id)arg0 ;
-(id)initWithInputItems:(id)arg0 contextUUID:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)handleWithAction:(NSInteger)arg0 applicationTokenData:(id)arg1 replyHandler:(id)arg2 ;
-(void)handleWithAction:(NSInteger)arg0 categoryTokenData:(id)arg1 replyHandler:(id)arg2 ;
-(void)handleWithAction:(NSInteger)arg0 webDomainTokenData:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif