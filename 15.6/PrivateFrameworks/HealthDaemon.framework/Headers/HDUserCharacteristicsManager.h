// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUSERCHARACTERISTICSMANAGER_H
#define HDUSERCHARACTERISTICSMANAGER_H

@class HKObserverSet<HDUserCharacteristicsProfileObserver>, NSDate, NSDictionary, _HKDelayedOperation, NSString;
@protocol HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDUserCharacteristicsManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver, HDDataObserver, HDDiagnosticObject>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet<HDUserCharacteristicsProfileObserver> *_observers;
    BOOL _shouldUpdateQuantityCharacteristics;
    int _significantTimeChangeNotificationToken;
    NSDate *_userProfileLastUpdated;
    NSDictionary *_lastUserProfile;
    BOOL _needsUpdateAfterUnlock;
    _HKDelayedOperation *_updateOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)setUserCharacteristic:(id)arg0 forType:(id)arg1 error:(*id)arg2 ;
-(CGFloat)restingCaloriesFromTotalCalories:(CGFloat)arg0 timeInterval:(CGFloat)arg1 authorizedToRead:(BOOL)arg2 ;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(id)modificationDateForCharacteristicWithType:(id)arg0 error:(*id)arg1 ;
-(id)userCharacteristicForType:(id)arg0 error:(*id)arg1 ;
-(void)addProfileObserver:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)didRecieveDayChangeNotification:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)removeProfileObserver:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;
-(void)unitTest_updateCharacteristicsAndUserProfileWithDate:(id)arg0 completion:(id)arg1 ;


@end


#endif