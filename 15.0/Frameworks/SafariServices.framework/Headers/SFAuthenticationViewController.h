// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTHENTICATIONVIEWCONTROLLER_H
#define SFAUTHENTICATIONVIEWCONTROLLER_H

@class _UIFallbackPresentationViewController, NSString, UIWindow;
@protocol UIViewControllerTransitioningDelegate, SFAuthenticationViewControllerPresentationDelegate;


#import "SFSafariViewController.h"

@interface SFAuthenticationViewController : SFSafariViewController <UIViewControllerTransitioningDelegate>

 {
    _UIFallbackPresentationViewController *_fallbackPresentationViewController;
    NSString *_callbackURLScheme;
    UIWindow *_presentationContextWindow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SFAuthenticationViewControllerPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly) Class superclass;


+(BOOL)_supportsPrewarming;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 usingEphemeralSession:(BOOL)arg2 presentationContextWindow:(id)arg3 ;
-(void)_presentViewController;
-(void)_restartServiceViewController;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)remoteViewController:(id)arg0 didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2 ;
-(void)remoteViewController:(id)arg0 hostApplicationOpenURL:(id)arg1 ;
-(void)setDefersAddingRemoteViewController:(BOOL)arg0 ;


@end


#endif