// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOVERSHEETSCENEMANAGER_H
#define SBCOVERSHEETSCENEMANAGER_H

@class UIWindow, UIApplicationSceneDeactivationAssertion, NSMutableArray;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBCoverSheetSceneManager : NSObject

@property (weak, nonatomic) UIWindow *coverSheetWindow; // ivar: _coverSheetWindow
@property (retain, nonatomic) NSObject<BSInvalidatable> *displayLayoutAssertion; // ivar: _displayLayoutAssertion
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *notificationCenterAssertion; // ivar: _notificationCenterAssertion
@property (retain, nonatomic) NSMutableArray *pendingSceneUpdateBlocks; // ivar: _pendingSceneUpdateBlocks
@property (nonatomic, getter=isPerformingSceneUpdate) BOOL performingSceneUpdate; // ivar: _performingSceneUpdate
@property (retain, nonatomic) NSObject<BSInvalidatable> *stateCaptureInvalidatable; // ivar: _stateCaptureInvalidatable
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *systemAnimationAssertion; // ivar: _systemAnimationAssertion


-(id)initWithCoverSheetWindow:(id)arg0 ;
-(void)_performNextSceneUpdateBlock;
-(void)_performSceneUpdateBlock:(id)arg0 ;
-(void)_setDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)_setSceneBackgrounded:(BOOL)arg0 suspendUnderLockEnvironment:(BOOL)arg1 ;
-(void)_updateForegroundScenesForNotificationCenter:(BOOL)arg0 ;
-(void)updateForegroundScenesForCoverSheetAnimationActive:(BOOL)arg0 ;
-(void)updateSceneManagerForPresented:(BOOL)arg0 suspendUnderLockEnvironment:(BOOL)arg1 ;


@end


#endif