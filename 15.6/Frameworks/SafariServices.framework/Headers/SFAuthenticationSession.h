// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAUTHENTICATIONSESSION_H
#define SFAUTHENTICATIONSESSION_H

@class NSURL, NSString;
@protocol SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal, _SFAuthenticationSessionDelegate;

#import <Foundation/Foundation.h>

#import "SFAuthenticationViewController.h"

@interface SFAuthenticationSession : NSObject <SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal>

 {
    NSURL *_initialURL;
    id *_completionHandler;
    SFAuthenticationViewController *_authViewController;
    NSString *_callbackURLScheme;
}


@property (weak, nonatomic) NSObject<_SFAuthenticationSessionDelegate> *_delegate; // ivar: __delegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession; // ivar: _prefersEphemeralWebBrowserSession
@property (nonatomic, getter=isSessionStarted) BOOL sessionStarted; // ivar: _sessionStarted
@property (readonly) Class superclass;


-(BOOL)_startRequestingFromWebAuthenticationSession:(BOOL)arg0 inWindow:(id)arg1 dryRun:(BOOL)arg2 ;
-(BOOL)start;
-(BOOL)startASWebAuthenticationSessionInWindow:(id)arg0 dryRun:(BOOL)arg1 ;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithURL:(id)arg0 callbackURLScheme:(id)arg1 usingEphemeralSession:(BOOL)arg2 completionHandler:(id)arg3 ;
-(id)presentingViewControllerForAuthenticationViewController:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)safariViewController:(id)arg0 didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2 ;
-(void)safariViewController:(id)arg0 hostApplicationOpenURL:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg0 ;


@end


#endif