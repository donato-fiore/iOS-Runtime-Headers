// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAREMOTEALERTSERVICEVIEWCONTROLLER_H
#define FAREMOTEALERTSERVICEVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, NSXPCConnection;
@protocol FAFamilyPresenterHostProtocol;


#import "FACircleContext.h"

@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
}


@property (retain, nonatomic) NSObject<FAFamilyPresenterHostProtocol> *hostProxy; // ivar: _hostProxy


-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_account;
-(void)_dismissAndExit;
-(void)_handleSignedOutAcceptInvitation;
-(void)_invalidateLookupConnection;
-(void)_main_dismissAndExit;
-(void)_setupRemoteProxy;
-(void)_showFamilyFlow;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)handleButtonActions:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif