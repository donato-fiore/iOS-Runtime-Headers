// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUIVOICESHORTCUTHOSTCONTEXT_H
#define INUIVOICESHORTCUTHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol INUIVoiceShortcutRemoteHostingInterface;



@interface INUIVoiceShortcutHostContext : NSExtensionContext <INUIVoiceShortcutRemoteHostingInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUIVoiceShortcutRemoteHostingInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)remoteViewControllerDidCancel;
-(void)remoteViewControllerDidCreateVoiceShortcut:(id)arg0 error:(id)arg1 ;
-(void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg0 ;
-(void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg0 error:(id)arg1 ;


@end


#endif