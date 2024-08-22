// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV20APPLEMEDIASERVICESUI7WEBVIEW11COORDINATOR_H
#define _TTCV20APPLEMEDIASERVICESUI7WEBVIEW11COORDINATOR_H

@protocol AMSUIWebDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV20AppleMediaServicesUI7WebView11Coordinator : NSObject <AMSUIWebDelegate>

 {
    ? parent;
}




-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(void)webViewController:(id)arg0 didEncodeNetworkRequest:(id)arg1 ;
-(void)webViewController:(id)arg0 didFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(void)webViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)webViewController:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)webViewController:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif