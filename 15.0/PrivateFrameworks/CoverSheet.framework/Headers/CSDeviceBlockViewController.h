// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSDEVICEBLOCKVIEWCONTROLLER_H
#define CSDEVICEBLOCKVIEWCONTROLLER_H

@class SBFDeviceBlockTimer, ACAccountStore, ACAccount, NSString;
@protocol CSModalViewDelegate, SBFBlockStatusProvider, OS_dispatch_queue;


#import "CSModalViewControllerBase.h"
#import "CSLockScreenSettings.h"

@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSModalViewDelegate>

 {
    id<SBFBlockStatusProvider> *_blockStatusProvider;
    SBFDeviceBlockTimer *_blockTimer;
    CSLockScreenSettings *_lockScreenSettings;
    id *_pendingAction;
    NSObject<OS_dispatch_queue> *_accountAccessQueue;
    ACAccountStore *_accountStore;
    ACAccount *_queue_findMyAccount;
    BOOL _attemptingErase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isFindMyChangingState;
-(BOOL)_isFindMyEnabled;
-(NSInteger)presentationPriority;
-(id)initWithDeviceBlockStatusProvider:(id)arg0 ;
-(void)_attemptErase;
-(void)_cancelPendingActionAfterDelay:(CGFloat)arg0 ;
-(void)_eraseDeviceWithCompletion:(id)arg0 ;
-(void)_handleDeviceLocatorStateDidChange:(id)arg0 ;
-(void)_updateText;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dealloc;
-(void)disableFindMyWithMessage:(id)arg0 confirmationButtonTitle:(id)arg1 presentingViewController:(id)arg2 completion:(id)arg3 ;
-(void)handlePrimaryActionForView:(id)arg0 ;
-(void)handleSecondaryActionForView:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif