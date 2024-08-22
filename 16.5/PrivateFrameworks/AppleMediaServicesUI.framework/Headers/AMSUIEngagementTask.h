// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIENGAGEMENTTASK_H
#define AMSUIENGAGEMENTTASK_H

@class AMSTask, UIViewController, AMSProcessInfo, NSString, NSError, AMSEngagementRequest, AMSEngagementResult;
@protocol AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSUIEngagementViewControllerDelegate, PRXFlowDelegate, AMSBagConsumer, AMSBagProtocol;


#import "AMSUIEngagementViewController.h"

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSUIEngagementViewControllerDelegate, PRXFlowDelegate, AMSBagConsumer>

 {
    BOOL _finished;
    BOOL _running;
}


@property (nonatomic) BOOL allowMultiplePresentations; // ivar: _allowMultiplePresentations
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) UIViewController *cachedNavigationController; // ivar: _cachedNavigationController
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (nonatomic) BOOL presented; // ivar: _presented
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) BOOL remotePresentation; // ivar: _remotePresentation
@property (retain, nonatomic) AMSEngagementRequest *request; // ivar: _request
@property (retain, nonatomic) AMSEngagementResult *result; // ivar: _result
@property (readonly) Class superclass;
@property (readonly, nonatomic) AMSUIEngagementViewController *taskController; // ivar: _taskController


+(id)createBagForSubProfile;
-(BOOL)_isInitialEngagementViewController;
-(BOOL)_isRemotePresentationEnabled;
-(BOOL)_isRemoteViewService;
-(BOOL)_isWindowPresentation;
-(BOOL)isFinished;
-(BOOL)isRunning;
-(NSInteger)_modalPresentationStyle;
-(id)_infoWithBuyParams:(id)arg0 additionalInfo:(id)arg1 ;
-(id)_presentEngagementLocally;
-(id)_presentEngagementRemotely;
-(id)_presentTaskController;
-(id)_presentViewController:(id)arg0 dismissBlock:(id)arg1 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentEngagement;
-(void)engagementViewController:(id)arg0 didResolveWithResult:(id)arg1 error:(id)arg2 ;
-(void)engagementViewControllerShouldDismiss:(id)arg0 ;


@end


#endif