// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAAUTHENTICATORCONTROLLER_H
#define LAAUTHENTICATORCONTROLLER_H

@class NSString;
@protocol LAAuthorizationViewControllerDelegate, LAAuthenticatorControllerDelegate;

#import <Foundation/Foundation.h>

#import "LAAuthorizationViewController.h"
#import "LAAuthenticatorServiceConfiguration.h"

@interface LAAuthenticatorController : NSObject <LAAuthorizationViewControllerDelegate>

 {
    LAAuthorizationViewController *_authorizationViewController;
    id<LAAuthenticatorControllerDelegate> *_delegate;
    LAAuthenticatorServiceConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 ;
-(void)authorizationController:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)authorizationController:(id)arg0 didProvideAuthorizationRequirementWithReply:(id)arg1 ;
-(void)dismiss;
-(void)presentInViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif