// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDPERIODICCOUNTRYMONITOR_H
#define HDPERIODICCOUNTRYMONITOR_H

@class HKObserverSet, HKMobileCountryCodeManager, NSString, NSDate, NSUserDefaults;
@protocol HDDiagnosticObject, HDNanoSyncManagerObserver, _HDPeriodicCountryMonitorNanoSyncManagerProviding;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDPeriodicCountryMonitor : NSObject <HDDiagnosticObject, HDNanoSyncManagerObserver>

 {
    HDProfile *_profile;
    id<_HDPeriodicCountryMonitorNanoSyncManagerProviding> *_nanoSyncManager;
    id *_mobileCountryCodeManagerProvider;
    HKObserverSet *_observers;
    os_unfair_lock_s _lock;
    NSUInteger _state;
    HKMobileCountryCodeManager *_mobileCountryCodeManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastCheckAttemptDate;
@property (readonly, copy, nonatomic) NSString *lastFetchAttemptBuild;
@property (readonly, copy, nonatomic) NSDate *lastFetchAttemptDate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *unitTest_currentDate; // ivar: _unitTest_currentDate
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 nanoSyncManager:(id)arg1 ;
// -(id)initWithProfile:(id)arg0 nanoSyncManager:(id)arg1 mobileCountryCodeManagerProvider:(id)arg2 userDefaults:(unk)arg3  ;
-(void)_recordSuccessfulFetchForCurrentPairedBuilds;
-(void)fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id)arg0 ;
-(void)nanoSyncManager:(id)arg0 pairedDevicesChanged:(id)arg1 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif