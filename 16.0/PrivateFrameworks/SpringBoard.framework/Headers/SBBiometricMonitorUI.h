// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBIOMETRICMONITORUI_H
#define SBBIOMETRICMONITORUI_H

@class UIWindow, NSString;
@protocol SBBiometricMonitorObserver, SBBiometricMonitorDataSource;

#import <Foundation/Foundation.h>

#import "SBBiometricMonitorViewController.h"
#import "SBWindowScene.h"

@interface SBBiometricMonitorUI : NSObject <SBBiometricMonitorObserver>

 {
    BOOL _enabled;
    UIWindow *_debugWindow;
    SBBiometricMonitorViewController *_debugViewController;
    BOOL _deferredMatchUpdatePending;
    BOOL _deferredPresenceDetectUpdatePending;
}


@property (retain, nonatomic) NSObject<SBBiometricMonitorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(BOOL)_isDeferredMatchStateUpdatePending;
-(BOOL)_isDeferredPresenceDetectStateUpdatePending;
-(id)init;
-(void)_cancelDeferredUpdateMatchState;
-(void)_cancelDeferredUpdatePresenceDetectState;
-(void)_deferredUpdateMatchState;
-(void)_deferredUpdatePresenceDetectState;
-(void)_doDeferredMatchStateUpdate;
-(void)_doDeferredPresenceDetectUpdate;
-(void)_updateMatchState;
-(void)_updatePresenceDetectState;
-(void)biometricMonitorDataSourceMatchingEnded:(id)arg0 ;
-(void)biometricMonitorDataSourceMatchingFailed:(id)arg0 ;
-(void)biometricMonitorDataSourceMatchingStarted:(id)arg0 ;
-(void)biometricMonitorDataSourceMatchingSucceeded:(id)arg0 ;
-(void)biometricMonitorDataSourcePoseUpdated:(id)arg0 ;
-(void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg0 ;
-(void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg0 ;
-(void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg0 ;
-(void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg0 ;
-(void)disable;
-(void)enable;


@end


#endif