// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOHOSTEXTENSIONCONTEXT_H
#define SOHOSTEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol SOHostExtensionContextProtocol;


#import "SOExtension.h"

@interface SOHostExtensionContext : NSExtensionContext <SOHostExtensionContextProtocol>



@property (weak) SOExtension *contextExtension; // ivar: _contextExtension
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteContextWithError:(*id)arg0 ;
-(void)authorizationDidCompleteWithCredential:(id)arg0 error:(id)arg1 ;
-(void)canOpenURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg0 completion:(id)arg1 ;
-(void)requestReauthenticationWithCompletion:(id)arg0 ;


@end


#endif