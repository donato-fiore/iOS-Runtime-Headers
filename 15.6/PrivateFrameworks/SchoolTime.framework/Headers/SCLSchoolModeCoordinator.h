// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLSCHOOLMODECOORDINATOR_H
#define SCLSCHOOLMODECOORDINATOR_H

@class NSMutableSet, NSString, NSURL;
@protocol SCLTransportControllerDelegate, SCLSchoolModeServerObserver;

#import <Foundation/Foundation.h>

#import "SCLActiveDurationAnalyticsSource.h"
#import "SCLSchoolModeCoordinatorConfiguration.h"
#import "SCLState.h"
#import "SCLUnlockHistoryItem.h"
#import "SCLPersistentSettings.h"
#import "SCLScheduleSettings.h"
#import "SCLSettingsSyncCoordinator.h"

@interface SCLSchoolModeCoordinator : NSObject <SCLTransportControllerDelegate, SCLSchoolModeServerObserver>

 {
    int _firstUnlockToken;
    BOOL _hasReceivedFirstUnlock;
}


@property (readonly, nonatomic) SCLActiveDurationAnalyticsSource *activeDurationAnalyticsSource; // ivar: _activeDurationAnalyticsSource
@property (readonly, nonatomic) NSMutableSet *clients; // ivar: _clients
@property (readonly, copy, nonatomic) SCLSchoolModeCoordinatorConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) SCLState *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SCLUnlockHistoryItem *pendingUnlockItem; // ivar: _pendingUnlockItem
@property (retain, nonatomic) SCLPersistentSettings *persistentSettings; // ivar: _persistentSettings
@property (readonly, nonatomic, getter=isReady) BOOL ready; // ivar: _ready
@property (retain, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly, nonatomic) NSURL *scheduleURL; // ivar: _scheduleURL
@property (retain, nonatomic) SCLSettingsSyncCoordinator *settingsSyncCoordinator; // ivar: _settingsSyncCoordinator
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;


-(BOOL)applySchedule:(id)arg0 error:(*id)arg1 ;
-(BOOL)applySchedule:(id)arg0 forInitialSync:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)setActive:(BOOL)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)currentScheduleSettingsForTransportController:(id)arg0 ;
-(id)historyStore;
-(id)idsDevice;
-(id)initWithConfiguration:(id)arg0 ;
-(id)nrDevice;
-(id)server;
-(id)transportController;
-(struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg0 ;
-(void)_checkIfClassCDataIsAvailable;
-(void)_classCDataIsAvailable;
-(void)_createSchoolTimeDirectoryIfNeeded;
-(void)_lock_loadPersistentSchedule;
-(void)_lock_updatePersistentSettingsWithBlock:(id)arg0 ;
-(void)_noteHistoryDidUpdate;
-(void)_persistSettings:(id)arg0 ;
-(void)_registerForFirstUnlockIfNeeded;
-(void)_requestRemoteScheduleSettingsIfNeeded;
-(void)_updateClientsWithSchedule:(id)arg0 notify:(BOOL)arg1 ;
-(void)activateSettingsSyncCoordinatorWithSettings:(id)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)addUnlockHistoryItem:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteHistoryWithCompletion:(id)arg0 ;
-(void)fetchRecentUnlockHistoryItemsWithCompletion:(id)arg0 ;
-(void)purgeOldHistoryItems;
-(void)removeClient:(id)arg0 ;
-(void)server:(id)arg0 didUpdateState:(id)arg1 fromState:(id)arg2 ;
-(void)transportController:(id)arg0 didReceiveSchedule:(id)arg1 forInitialSync:(BOOL)arg2 ;
-(void)transportController:(id)arg0 didReceiveUnlockHistoryItem:(id)arg1 ;


@end


#endif