// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPRXDEVICEUNLOCKVIEWCONTROLLER_H
#define TSPRXDEVICEUNLOCKVIEWCONTROLLER_H

@class PRXCardContentViewController, PRXAction, NSString, UIImageView, CUSystemMonitor;
@protocol TSSetupFlowItem, TSSIMSetupFlowDelegate;



@interface TSPRXDeviceUnlockViewController : PRXCardContentViewController <TSSetupFlowItem>

 {
    int springBoardLockStateNotifyToken;
}


@property (retain) PRXAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIImageView *radioImageView; // ivar: _radioImageView
@property (readonly) Class superclass;
@property (retain) CUSystemMonitor *systemMonitor; // ivar: _systemMonitor


+(BOOL)_isSecureForRemoteViewService;
-(BOOL)_canShowWhileLocked;
-(id)init;
-(void)_handleLockState:(int)arg0 ;
-(void)_registerLockState;
-(void)_screenStateChanged;
-(void)_startSystemMonitor;
-(void)_stopSystemMonitor;
-(void)_unlockScreen;
-(void)_unregisterLockState;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif