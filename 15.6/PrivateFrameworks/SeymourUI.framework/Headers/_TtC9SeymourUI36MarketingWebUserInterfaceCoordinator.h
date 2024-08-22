// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI36MARKETINGWEBUSERINTERFACECOORDINATOR_H
#define _TTC9SEYMOURUI36MARKETINGWEBUSERINTERFACECOORDINATOR_H

@protocol AMSUIWebDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9SeymourUI36MarketingWebUserInterfaceCoordinator : NSObject <AMSUIWebDelegate>

 {
    ? presentingViewController;
}




-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(id)init;
-(void)webViewController:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)webViewController:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif