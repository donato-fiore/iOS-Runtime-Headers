// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCARDONOTDISTURBCONTROLLER_H
#define SBCARDONOTDISTURBCONTROLLER_H

@class CARAutomaticDNDStatus, NSString;
@protocol CSExternalLockProviding, CSExternalEventHandling, CSExternalBehaviorProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBLockScreenManager.h"

@interface SBCarDoNotDisturbController : NSObject <CSExternalLockProviding, CSExternalEventHandling, CSExternalBehaviorProviding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_stateValid;
    BOOL _queue_exitConfirmationRequired;
    BOOL _queue_pendingExitConfirmationRequirement;
    BOOL _queue_screenOn;
    BOOL _queue_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
    CARAutomaticDNDStatus *_carAutomaticDNDStatus;
    SBLockScreenManager *_lockScreenManager;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly, nonatomic) BOOL showPasscode;
@property (readonly) Class superclass;


-(BOOL)_dismissAlertItemsAnimated:(BOOL)arg0 ;
-(BOOL)_hasShownSiriHeaderViewControllerDuringCurrentCarDNDSession;
-(BOOL)_isExitConfirmationRequired;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)unlockFromSource:(int)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)init;
-(id)initWithCARAutomaticDNDStatus:(id)arg0 lockScreenManager:(id)arg1 ;
-(void)_queue_setExitConfirmationRequired:(BOOL)arg0 ;
-(void)_queue_setScreenOn:(BOOL)arg0 ;
-(void)_setHasShownSiriHeaderViewControllerDuringCurrentCarDNDSession:(BOOL)arg0 ;
-(void)_setScreenOn:(BOOL)arg0 ;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSEventHandling;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dealloc;


@end


#endif