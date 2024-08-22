// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPBROADCASTEXTENSIONHOSTCONTEXT_H
#define RPBROADCASTEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol RPBroadcastExtensionHostProtocol, RPBroadcastExtensionInitProtocol;


#import "RPBroadcastHostViewController.h"

@interface RPBroadcastExtensionHostContext : NSExtensionContext <RPBroadcastExtensionHostProtocol, RPBroadcastExtensionInitProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) RPBroadcastHostViewController *hostViewController; // ivar: _hostViewController
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)extensionObjectProxy;
-(void)completeSetupWithBroadcastURL:(id)arg0 ;
-(void)updateBroadcastHandlerListenerEndpoint:(id)arg0 ;


@end


#endif