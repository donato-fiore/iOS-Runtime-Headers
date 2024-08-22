// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDREMOTEACTIONVIEWCONTROLLER_H
#define DDREMOTEACTIONVIEWCONTROLLER_H

@class UIRemoteViewController, _UIRemoteViewController, NSString;
@protocol DDRemoteActionPresenter, _UIRemoteViewControllerContaining;


#import "DDAction.h"
#import "DDActionController.h"

@interface DDRemoteActionViewController : UIRemoteViewController <DDRemoteActionPresenter, _UIRemoteViewControllerContaining>

 {
    BOOL _proxyConfigured;
    BOOL _waitingForRemoteConfiguration;
    BOOL _receivedActionDidFinish;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (weak, nonatomic) DDAction *action; // ivar: _action
@property (weak, nonatomic) DDActionController *actionController; // ivar: _actionController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)controllerIsAvailable;
+(id)exportedInterface;
+(id)prepareViewController:(id)arg0 forAction:(id)arg1 actionController:(id)arg2 ;
+(id)serviceViewControllerInterface;
-(void)_prepareForAction:(id)arg0 inActionController:(id)arg1 ;
-(void)actionCanBeCancelledExternally:(BOOL)arg0 ;
-(void)actionDidFinishShouldDismiss:(BOOL)arg0 ;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;
-(void)getIsBeingPresentedInPopover:(id)arg0 ;
-(void)viewControllerReady;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif