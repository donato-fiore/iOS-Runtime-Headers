// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBLOCKOUTCONTROLLER_H
#define DBLOCKOUTCONTROLLER_H

@class NSString;
@protocol DBBuddyMonitorObserver, DBDisclosureMonitorObserver, DBEnvironmentConfigurationObserving, DBKeybagMonitorObserver, DBLockOutViewControllerDelegate, DBSiriMonitorObserver, DBThermalMonitorObserver, DBLockoutControllerDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "DBBuddyMonitor.h"
#import "DBDashboardStateProvider.h"
#import "DBDisclosureMonitor.h"
#import "DBEnvironmentConfiguration.h"
#import "DBKeybagMonitor.h"
#import "DBLockOutViewController.h"
#import "DBLockOutWindow.h"
#import "DBSiriMonitor.h"
#import "DBThermalMonitor.h"

@interface DBLockOutController : NSObject <DBBuddyMonitorObserver, DBDisclosureMonitorObserver, DBEnvironmentConfigurationObserving, DBKeybagMonitorObserver, DBLockOutViewControllerDelegate, DBSiriMonitorObserver, DBThermalMonitorObserver>



@property (retain, nonatomic) DBBuddyMonitor *buddyMonitor; // ivar: _buddyMonitor
@property (retain, nonatomic) DBDashboardStateProvider *dashboardStateProvider; // ivar: _dashboardStateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<DBLockoutControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DBDisclosureMonitor *disclosureMonitor; // ivar: _disclosureMonitor
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBKeybagMonitor *keybagMonitor; // ivar: _keybagMonitor
@property (retain, nonatomic) NSObject<BSInvalidatable> *lockOutLayoutElementAssertion; // ivar: _lockOutLayoutElementAssertion
@property (nonatomic) NSInteger lockOutMode; // ivar: _lockOutMode
@property (retain, nonatomic) DBLockOutViewController *lockOutViewController; // ivar: _lockOutViewController
@property (retain, nonatomic) DBLockOutWindow *lockOutWindow; // ivar: _lockOutWindow
@property (readonly, nonatomic, getter=isLockedOut) BOOL lockedOut;
@property (retain, nonatomic) DBSiriMonitor *siriMonitor; // ivar: _siriMonitor
@property (readonly) Class superclass;
@property (retain, nonatomic) DBThermalMonitor *thermalMonitor; // ivar: _thermalMonitor


-(id)initWithWindowScene:(id)arg0 environmentConfiguration:(id)arg1 dashboardStateProvider:(id)arg2 delegate:(id)arg3 ;
-(void)buddyMonitorDidChangeFinished:(id)arg0 ;
-(void)disclosureMonitorDidChangeActive:(id)arg0 ;
-(void)environmentConfigurationPairedVehiclesDidChange:(id)arg0 ;
-(void)invalidate;
-(void)keybagMonitorLockStateDidChange:(id)arg0 ;
-(void)lockOutViewController:(id)arg0 didTapButtonOfType:(NSUInteger)arg1 ;
-(void)siriMonitorDidChangeEnabled:(id)arg0 ;
-(void)thermalMonitorLevelDidChange:(id)arg0 ;
-(void)updateLockOutModeAnimated:(BOOL)arg0 ;
-(void)updateLockOutModeAnimated:(BOOL)arg0 takeScreen:(BOOL)arg1 ;


@end


#endif