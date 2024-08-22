// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPBROADCASTACTIVITYEXTENSIONHOSTCONTEXT_H
#define RPBROADCASTACTIVITYEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext;
@protocol RPBroadcastActivityCommunicationHostProtocol;


#import "RPBroadcastActivityHostViewController.h"

@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext <RPBroadcastActivityCommunicationHostProtocol>



@property (weak, nonatomic) RPBroadcastActivityHostViewController *hostViewController; // ivar: _hostViewController


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)extensionObjectProxy;
-(void)extensionDidFinishWithLaunchURL:(id)arg0 broadcastURL:(id)arg1 extensionBundleID:(id)arg2 cancelled:(BOOL)arg3 ;
-(void)presentationInfoWithCompletion:(id)arg0 ;


@end


#endif