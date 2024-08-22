// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUREMOTEEXTENSIONCONTEXT_H
#define AUREMOTEEXTENSIONCONTEXT_H

@class NSExtensionContext, AUAudioUnitViewService;


#import "AURemoteHost.h"

@interface AURemoteExtensionContext : NSExtensionContext {
    AURemoteHost *_host;
    BOOL _isUIExtension;
    BOOL _isRunningInProcess;
}


@property (nonatomic) AUAudioUnitViewService *viewService; // ivar: _viewService


+(BOOL)conformsToProtocol:(id)arg0 ;
+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)iOSViewController;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)open:(id)arg0 ;
-(void)requestViewControllerWithCompletionHandler:(id)arg0 ;


@end


#endif