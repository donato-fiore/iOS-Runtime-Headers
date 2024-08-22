// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16NEWSSUBSCRIPTION30AMSUIWEBVIEWCONTROLLERDELEGATE_H
#define _TTC16NEWSSUBSCRIPTION30AMSUIWEBVIEWCONTROLLERDELEGATE_H

@protocol AMSUIWebDelegate;

#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscription30AMSUIWebViewControllerDelegate : NSObject <AMSUIWebDelegate>

 {
    ? entitlementsManager;
}




-(id)init;
-(void)webViewController:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif