// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKISSUERPROVISIONINGEXTENSIONAUTHORIZATIONVIEWCONTROLLER_H
#define PKISSUERPROVISIONINGEXTENSIONAUTHORIZATIONVIEWCONTROLLER_H

@class UINavigationController;



@interface PKIssuerProvisioningExtensionAuthorizationViewController : UINavigationController {
    id *_completionHandler;
}




-(id)initWithExtension:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_cancel;
-(void)_failWithApplicationName:(id)arg0 ;
-(void)_invokeCompletionWithAuthorized:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif