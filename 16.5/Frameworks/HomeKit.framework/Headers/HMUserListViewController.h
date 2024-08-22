// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMUSERLISTVIEWCONTROLLER_H
#define HMUSERLISTVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation;
@protocol HMUserManagementRemoteHost;


#import "HMHome.h"
#import "HMUserListRemoteViewController.h"

@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost>



@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation; // ivar: _cancelServiceInvocation
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (copy, nonatomic) id *loadHandler; // ivar: _loadHandler
@property (retain, nonatomic) HMUserListRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (nonatomic) BOOL shouldPresentWhenLoaded; // ivar: _shouldPresentWhenLoaded


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithHome:(id)arg0 loadHandler:(id)arg1 ;
-(void)_configureAndAddRemoteViewController;
-(void)_finishSetupWithError:(id)arg0 ;
-(void)_presentAsTopmostViewController;
-(void)_requestRemoteViewController;
-(void)presentWhenLoaded;
-(void)userManagementDidFinishWithError:(id)arg0 ;
-(void)userManagementDidLoad;
-(void)viewDidLoad;


@end


#endif