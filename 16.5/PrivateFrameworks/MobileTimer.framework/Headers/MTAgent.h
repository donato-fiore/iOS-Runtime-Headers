// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTAGENT_H
#define MTAGENT_H

@class NSString, NSDate;
@protocol MTAgentDiagnosticDelegate, MTSystemStateDelegate, MTApplicationWorkspaceObserverProtocol, MTNotificationCenter, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTAlarmIntentDonor.h"
#import "MTAlarmScheduler.h"
#import "MTAlarmServer.h"
#import "MTAlarmSnapshot.h"
#import "MTAlarmStorage.h"
#import "MTAlarmSyncDataModel.h"
#import "MTCoreDuetMonitor.h"
#import "MTAgentDiagnosticListener.h"
#import "MTLanguageChangeListener.h"
#import "MTAgentNotificationManager.h"
#import "MTSleepCoordinator.h"
#import "MTSleepManager.h"
#import "MTSleepModeMonitor.h"
#import "MTSleepSessionManager.h"
#import "MTSleepSessionTracker.h"
#import "MTMetrics.h"
#import "MTSystemStateListener.h"
#import "MTTimeListener.h"
#import "MTTimerIntentDonor.h"
#import "MTTimerScheduler.h"
#import "MTTimerServer.h"
#import "MTTimerSessionsCoordinator.h"
#import "MTTimerSnapshot.h"
#import "MTTimerStorage.h"
#import "MTWidgetProvider.h"

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate, MTApplicationWorkspaceObserverProtocol>



@property (retain, nonatomic) MTAlarmIntentDonor *alarmIntentDonor; // ivar: _alarmIntentDonor
@property (retain, nonatomic) MTAlarmScheduler *alarmScheduler; // ivar: _alarmScheduler
@property (retain, nonatomic) MTAlarmServer *alarmServer; // ivar: _alarmServer
@property (retain, nonatomic) MTAlarmSnapshot *alarmSnapshot; // ivar: _alarmSnapshot
@property (retain, nonatomic) MTAlarmStorage *alarmStorage; // ivar: _alarmStorage
@property (retain, nonatomic) MTAlarmSyncDataModel *alarmSyncDataModel; // ivar: _alarmSyncDataModel
@property (retain, nonatomic) MTCoreDuetMonitor *coreDuetMonitor; // ivar: _coreDuetMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTAgentDiagnosticListener *diagnostics; // ivar: _diagnostics
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHorseman; // ivar: _isHorseman
@property (retain, nonatomic) MTLanguageChangeListener *languageChangeListener; // ivar: _languageChangeListener
@property (retain, nonatomic) NSDate *launchDate; // ivar: _launchDate
@property (retain, nonatomic) NSObject<MTNotificationCenter> *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) MTAgentNotificationManager *notificationManager; // ivar: _notificationManager
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (retain, nonatomic) MTSleepCoordinator *sleepCoordinator; // ivar: _sleepCoordinator
@property (readonly, nonatomic) MTSleepManager *sleepManager; // ivar: _sleepManager
@property (retain, nonatomic) MTSleepModeMonitor *sleepModeMonitor; // ivar: _sleepModeMonitor
@property (retain, nonatomic) MTSleepSessionManager *sleepSessionManager; // ivar: _sleepSessionManager
@property (retain, nonatomic) MTSleepSessionTracker *sleepSessionTracker; // ivar: _sleepSessionTracker
@property (readonly) Class superclass;
@property (retain, nonatomic) MTMetrics *syncMetrics; // ivar: _syncMetrics
@property (nonatomic) BOOL systemReady; // ivar: _systemReady
@property (retain, nonatomic) MTSystemStateListener *systemStateListener; // ivar: _systemStateListener
@property (retain, nonatomic) MTTimeListener *timeListener; // ivar: _timeListener
@property (retain, nonatomic) MTTimerIntentDonor *timerIntentDonor; // ivar: _timerIntentDonor
@property (retain, nonatomic) MTTimerScheduler *timerScheduler; // ivar: _timerScheduler
@property (retain, nonatomic) MTTimerServer *timerServer; // ivar: _timerServer
@property (retain, nonatomic) MTTimerSessionsCoordinator *timerSessionsCoordinator; // ivar: _timerSessionsCoordinator
@property (retain, nonatomic) MTTimerSnapshot *timerSnapshot; // ivar: _timerSnapshot
@property (retain, nonatomic) MTTimerStorage *timerStorage; // ivar: _timerStorage
@property (retain, nonatomic) MTWidgetProvider *widgetProvider; // ivar: _widgetProvider


+(id)agent;
-(id)_diagnosticProviders;
-(id)gatherDiagnostics;
-(id)init;
-(void)_removeUserDefaultsData;
-(void)_removeUserDefaultsDataIfNecessary:(id)arg0 ;
-(void)_setupAlarms;
-(void)_setupInitialListeners;
-(void)_setupNotificationCenter;
-(void)_setupSecondaryListeners;
-(void)_setupSync;
-(void)_setupTimers;
-(void)handleF5Reset;
-(void)handleMigrationFinish;
-(void)observedApplicationDidUninstallForBundleIdentifier:(id)arg0 ;
-(void)printDiagnostics;
-(void)restoreDidFinish;


@end


#endif