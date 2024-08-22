// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKHOSTEDCHALLENGEISSUECONTROLLER_H
#define GKHOSTEDCHALLENGEISSUECONTROLLER_H

@class UIViewController, GKChallenge, NSString, NSArray;
@protocol GKExtensionParentViewControllerProtocol;


#import "GKChallengeIssueHostViewController.h"

@interface GKHostedChallengeIssueController : UIViewController <GKExtensionParentViewControllerProtocol>



@property (retain, nonatomic) GKChallenge *challenge; // ivar: _challenge
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultMessage; // ivar: _defaultMessage
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler
@property (nonatomic) BOOL forcePicker; // ivar: _forcePicker
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *players; // ivar: _players
@property (copy, nonatomic) id *receivedRemoteHandler; // ivar: _receivedRemoteHandler
@property (retain, nonatomic) GKChallengeIssueHostViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
+(id)hostedIssueControllerWithChallenge:(id)arg0 players:(id)arg1 defaultMessage:(id)arg2 completionHandler:(id)arg3 ;
+(id)presentationQueue;
+(void)presentHostedIssueControllerWithChallenge:(id)arg0 players:(id)arg1 defaultMessage:(id)arg2 ;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)initWithChallenge:(id)arg0 players:(id)arg1 defaultMessage:(id)arg2 completionHandler:(id)arg3 ;
-(void)_setupChildViewController;
-(void)_setupRemoteViewController;
-(void)dealloc;
-(void)doneWithPlayers:(id)arg0 message:(id)arg1 ;
-(void)extensionDidFinishWithError:(id)arg0 ;


@end


#endif