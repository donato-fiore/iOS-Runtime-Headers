// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINESYSTEMMONITOR_H
#define CPLENGINESYSTEMMONITOR_H

@class NSURL, NSMutableDictionary, NSString;
@protocol CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLBatteryMonitorDelegate, CPLEngineComponent, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPLNetworkWatcher.h"
#import "CPLEngineLibrary.h"

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLBatteryMonitorDelegate, CPLEngineComponent>

 {
    BOOL _closed;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    BOOL _modifyingBudgetOverride;
    NSUInteger _newBudgetsToOverride;
    NSUInteger _newBudgetsToStopOverriding;
    NSMutableDictionary *_reasonsToOverrideSystemBudget;
    NSMutableDictionary *_scheduledOverrides;
    BOOL _overrideDataSystemBudgetPermanently;
    BOOL _allowOperationsBoost;
    BOOL _allowBackgroundOperationsBoost;
    BOOL _hasSetupBatteryMonitor;
}


@property (readonly) BOOL canBoostBackgroundOperations;
@property (readonly) BOOL canBoostOperations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger diskPressureState;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly) NSUInteger freeDiskSpaceSize;
@property (readonly) BOOL hasEnoughPowerForAutomaticOverride;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDataBudgetOverriden;
@property (readonly) BOOL isNetworkConnected;
@property (readonly) BOOL isNetworkConstrained;
@property (readonly) BOOL isOnCellularOrUnknown;
@property (readonly) Class superclass;


+(CGFloat)nextOverrideTimeIntervalForSystemBudgets:(NSUInteger)arg0 ;
+(id)descriptionForBudget:(NSUInteger)arg0 ;
+(id)descriptionForBudgets:(NSUInteger)arg0 ;
+(void)enumerateSystemBudgets:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(BOOL)_hasPermanentDataOverride;
-(CGFloat)_minimumBatteryLevelForAutoOverrideEnergyBudget;
-(id)componentName;
-(id)initWithEngineLibrary:(id)arg0 ;
-(void)_attemptScheduleRecoveryOverride:(NSUInteger)arg0 withReason:(NSUInteger)arg1 ;
-(void)_permanentDataOverrideHasChanged;
-(void)_startOverridingBudget:(NSUInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)_startWatchingPermanentDataOverride;
-(void)_stopOverridingBudget:(NSUInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)_stopWatchingPermanentDataOverride;
-(void)_withSystemBudgetOverride:(id)arg0 ;
-(void)batteryLevelDidChangeWithLevel:(CGFloat)arg0 ;
-(void)closeAndDeactivate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(id)arg0 ;
-(void)getStatusWithCompletionHandler:(id)arg0 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)scheduledOverrideDidEnd:(id)arg0 ;
-(void)startAutomaticOverridingSystemBudgets:(NSUInteger)arg0 ;
-(void)startOverridingSystemBudgets:(NSUInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)startOverridingSystemBudgetsForClient:(NSUInteger)arg0 ;
-(void)stopAutomaticOverridingSystemBudgets:(NSUInteger)arg0 ;
-(void)stopOverridingSystemBudgets:(NSUInteger)arg0 reason:(NSUInteger)arg1 ;
-(void)stopOverridingSystemBudgetsForClient:(NSUInteger)arg0 ;
-(void)updateDiskPressureState;
-(void)watcher:(id)arg0 stateDidChangeToNetworkState:(id)arg1 ;


@end


#endif