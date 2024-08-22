// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAUTHORIZATIONPRESENTATIONCONTROLLER_H
#define HKAUTHORIZATIONPRESENTATIONCONTROLLER_H

@class NSString, _UIAsyncInvocation, UIWindow;
@protocol HKHealthPrivacyHostAuthorizationControllerDelegate, _HKAuthorizationPresentationController;

#import <Foundation/Foundation.h>

#import "HKHealthPrivacyHostAuthorizationViewController.h"
#import "HKNanoHostAuthorizationController.h"

@interface HKAuthorizationPresentationController : NSObject <HKHealthPrivacyHostAuthorizationControllerDelegate, _HKAuthorizationPresentationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPresent; // ivar: _didPresent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthPrivacyHostAuthorizationViewController *hostViewController; // ivar: _hostViewController
@property (retain, nonatomic) HKNanoHostAuthorizationController *nanoAuthorizationController; // ivar: _nanoAuthorizationController
@property (retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation; // ivar: _requestCancellationInvocation
@property (retain, nonatomic) UIWindow *savedKeyWindow; // ivar: _savedKeyWindow
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(void)_dismissRemoteViewController;
-(void)_mainQueue_presentWithPresentationRequests:(id)arg0 authorizationRequestRecord:(id)arg1 completion:(id)arg2 ;
-(void)_makeRemoteViewControllerKeyAndVisible:(id)arg0 ;
// -(void)_requestAndConfigureCarouselAlert:(id)arg0 completion:(unk)arg1  ;
// -(void)_requestAndConfigureHostViewController:(id)arg0 completion:(unk)arg1  ;
-(void)cancelPresentation;
-(void)dealloc;
-(void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)arg0 ;
-(void)presentWithPresentationRequests:(id)arg0 authorizationRequestRecord:(id)arg1 completion:(id)arg2 ;


@end


#endif