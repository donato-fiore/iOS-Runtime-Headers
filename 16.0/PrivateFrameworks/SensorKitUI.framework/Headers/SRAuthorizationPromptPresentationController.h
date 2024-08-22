// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRAUTHORIZATIONPROMPTPRESENTATIONCONTROLLER_H
#define SRAUTHORIZATIONPROMPTPRESENTATIONCONTROLLER_H

@class NSString, NSError, UIViewController<SRRemoteAuthorizationPromptViewController>;
@protocol SRRemoteAuthorizationPromptViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface SRAuthorizationPromptPresentationController : NSObject <SRRemoteAuthorizationPromptViewControllerDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hostNavigationBarHidden; // ivar: _hostNavigationBarHidden
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController<SRRemoteAuthorizationPromptViewController> *viewController; // ivar: _viewController


+(id)sharedInstance;
+(void)initialize;
-(BOOL)isViewControllerPresentedModally;
-(BOOL)presentAnyViewController:(id)arg0 reason:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(id)navigationControllerFromRoot:(id)arg0 ;
-(id)presentationAnchor;
-(id)presentingViewControllerFromRoot:(id)arg0 ;
-(void)authorizationRequestCompleted;
-(void)authorizationRequestDidDisappear;
-(void)authorizationRequestFailedWithError:(id)arg0 ;
-(void)authorizationRequestWillDisappear;
-(void)authorizationUIReadyForDisplayModally:(BOOL)arg0 ;
-(void)completePromptWithError:(id)arg0 ;
-(void)dealloc;
-(void)presentAppsAndStudiesPromptViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentFirstRunOnboardingViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentMigrationPromptViewController:(id)arg0 withDesiredServices:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)presentPromptViewController:(id)arg0 withDesiredServices:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)presentResearchDataViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)presentStudyAuthorizationPromptViewController:(id)arg0 bundlePath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif