// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDUSERCHARACTERISTICSMANAGER_H
#define HDUSERCHARACTERISTICSMANAGER_H

@class HKObserverSet<HDUserCharacteristicsProfileObserver>, NSDate, NSDictionary, NSNumber, _HKDelayedOperation, NSString;
@protocol HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject, HDNanoSyncManagerObserver, HDCloudSyncManagerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDUserCharacteristicsManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject, HDNanoSyncManagerObserver, HDCloudSyncManagerObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDUserCharacteristicsProfileObserver> *_observers;
    BOOL _shouldUpdateQuantityCharacteristics;
    int _significantTimeChangeNotificationToken;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
    BOOL _needsUpdateAfterUnlock;
    NSNumber *_hasWatchOnAccount;
    BOOL _isCloudSyncEnabled;
    _HKDelayedOperation *_updateOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_setUserCharacteristic:(id)arg0 forType:(id)arg1 shouldInsertSample:(BOOL)arg2 updateProfileAndSync:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)setUserCharacteristic:(id)arg0 forType:(id)arg1 error:(*id)arg2 ;
-(CGFloat)restingCaloriesFromTotalCalories:(CGFloat)arg0 timeInterval:(CGFloat)arg1 authorizedToRead:(BOOL)arg2 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(id)modificationDateForCharacteristicWithType:(id)arg0 error:(*id)arg1 ;
-(id)userCharacteristicForType:(id)arg0 error:(*id)arg1 ;
-(void)addProfileObserver:(id)arg0 ;
-(void)cloudSyncManager:(id)arg0 didUpdateDataUploadRequestStatus:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)cloudSyncManager:(id)arg0 didUpdateErrorRequiringUserAction:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateLastPullDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateLastPulledUpdateDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateLastPushDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateRestoreCompletionDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateSyncEnabled:(BOOL)arg1 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)didReceiveAuthKitDeviceListChangeNotification:(id)arg0 ;
-(void)didReceiveDayChangeNotification:(id)arg0 ;
-(void)nanoSyncManager:(id)arg0 pairedDevicesChanged:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeProfileObserver:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;
-(void)unitTest_updateCharacteristicsAndUserProfileWithDate:(id)arg0 completion:(id)arg1 ;


@end


#endif