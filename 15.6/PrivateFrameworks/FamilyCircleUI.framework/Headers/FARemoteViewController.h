// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAREMOTEVIEWCONTROLLER_H
#define FAREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, UIViewController, _UIRemoteViewController, NSString;
@protocol _UIRemoteViewControllerContaining, FARemoteViewControllerProtocol, FARemoteViewControllerDelegate;



@interface FARemoteViewController : UIRemoteViewController <_UIRemoteViewControllerContaining, FARemoteViewControllerProtocol>

 {
    id *_completion;
    id *_presentationCompletion;
    UIViewController *_hostViewController;
    NSUInteger _ruiPresentationStyle;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FARemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)requestViewControllerWithCompletion:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(void)dismissAlertProxyWithCompletion:(id)arg0 ;
-(void)dismissWithCompletion:(id)arg0 ;
-(void)operationFinishedWithResponse:(id)arg0 ;
-(void)presentAlertProxyWithCompletion:(id)arg0 ;
-(void)presentWithRUIModalPresentationStyle:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)replaceModalRUIControllerWithStyle:(NSUInteger)arg0 byController:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)startFlowWithContext:(id)arg0 viewController:(id)arg1 completion:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif