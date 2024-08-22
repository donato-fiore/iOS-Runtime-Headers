// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(void)authorization:(id)arg0 didCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(void)canOpenURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg0 requestIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)requestReauthenticationWithRequestIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif