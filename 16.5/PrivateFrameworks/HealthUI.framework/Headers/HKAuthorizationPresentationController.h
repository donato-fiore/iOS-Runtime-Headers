// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAUTHORIZATIONPRESENTATIONCONTROLLER_H
#define HKAUTHORIZATIONPRESENTATIONCONTROLLER_H

@class NSString, _UIAsyncInvocation;
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
@property (readonly) Class superclass;


-(void)_dismissViewControllerAnimated:(BOOL)arg0 ;
-(void)_mainQueue_presentWithPresentationRequests:(id)arg0 authorizationRequestRecord:(id)arg1 completion:(id)arg2 ;
-(void)_makeRemoteViewControllerVisible:(id)arg0 ;
// -(void)_requestAndConfigureCarouselAlert:(id)arg0 completion:(unk)arg1  ;
// -(void)_requestAndConfigureHostViewController:(id)arg0 completion:(unk)arg1  ;
-(void)cancelPresentation;
-(void)dealloc;
-(void)healthPrivacyHostAuthorizationControllerDidFinishWithError:(id)arg0 ;
-(void)presentWithPresentationRequests:(id)arg0 authorizationRequestRecord:(id)arg1 completion:(id)arg2 ;


@end


#endif