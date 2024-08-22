// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAREMOTESERVICEVIEWCONTROLLER_H
#define FAREMOTESERVICEVIEWCONTROLLER_H

@class UIViewController, NSXPCConnection, NSString;
@protocol FARemoteServiceProtocol, RUIPresentationHandling;


#import "FACircleContext.h"

@interface FARemoteServiceViewController : UIViewController <FARemoteServiceProtocol, RUIPresentationHandling>

 {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
    BOOL _isFlowStarted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(NSUInteger)supportedInterfaceOrientations;
-(void)_dismissAndExit;
-(void)_main_dismissAndExit;
-(void)_presentAsChildViewController:(id)arg0 ;
-(void)_removeChildViewControllers;
-(void)_showFamilyFlow;
-(void)_showLoadingView;
-(void)dealloc;
-(void)dismissModalRUIController:(id)arg0 completion:(id)arg1 ;
-(void)presentModalRUIController:(id)arg0 completion:(id)arg1 ;
-(void)replaceModalRUIController:(id)arg0 byController:(id)arg1 completion:(id)arg2 ;
-(void)ruiDidDismissAlertController:(id)arg0 ;
-(void)ruiPresentAlertController:(id)arg0 ;
-(void)startFlowWithContext:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif