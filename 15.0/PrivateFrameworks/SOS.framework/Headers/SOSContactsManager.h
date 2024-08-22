// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOSCONTACTSMANAGER_H
#define SOSCONTACTSMANAGER_H

@class HKHealthStore, NSArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "SOSLegacyContactsManager.h"

@interface SOSContactsManager : NSObject {
    int _healthContactsNotificationToken;
    SOSLegacyContactsManager *_legacyContactsManager;
}


@property (readonly, nonatomic) BOOL SOSContactsExist;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) SOSLegacyContactsManager *legacyContactsManager;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *medicalIDContactsInitialStateSemaphore; // ivar: _medicalIDContactsInitialStateSemaphore
@property (retain, nonatomic) NSArray *medicalIDEmergencyContacts; // ivar: _medicalIDEmergencyContacts
@property (nonatomic) _opaque_pthread_mutex_t medicalIDEmergencyContactsMutex; // ivar: _medicalIDEmergencyContactsMutex


+(BOOL)authorizedToUseContactStore;
+(id)contactStore;
+(void)preloadContactStoreIfNecessary;
-(BOOL)_isEmergencyNumber:(id)arg0 ;
-(BOOL)hasValidContactsToMessage;
-(id)SOSContactDestinations;
-(id)_userDefaults;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)phoneNumbersToMessage;
-(void)SOSContactsWithTimeout:(CGFloat)arg0 andCompletion:(id)arg1 ;
-(void)_medicalContactsDidChange;
-(void)_medicalIDEmergencyContactsWithCompletion:(id)arg0 ;
-(void)_waitForMedicalIDInitialState;
-(void)dealloc;
-(void)fetchMedicalIDEmergencyContacts;


@end


#endif