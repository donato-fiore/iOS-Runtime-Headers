// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNHEALTHSTOREMANAGER_H
#define CNHEALTHSTOREMANAGER_H

@class HKHealthStore, _HKMedicalIDData, NSMutableDictionary, HKMedicalIDStore;
@protocol CNScheduler;

#import <Foundation/Foundation.h>

#import "CNUIContactsEnvironment.h"

@interface CNHealthStoreManager : NSObject {
    int _healthNotificationToken;
}


@property (retain, nonatomic) CNUIContactsEnvironment *environment; // ivar: _environment
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (nonatomic) BOOL isListeningToChanges; // ivar: _isListeningToChanges
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (readonly, nonatomic) NSMutableDictionary *medicalIDDataHandlers; // ivar: _medicalIDDataHandlers
@property (retain, nonatomic) HKMedicalIDStore *medicalIDStore; // ivar: _medicalIDStore
@property (nonatomic) BOOL needsFetching; // ivar: _needsFetching
@property (readonly, nonatomic) NSObject<CNScheduler> *stateLock; // ivar: _stateLock
@property (readonly, nonatomic) NSObject<CNScheduler> *workQueue; // ivar: _workQueue


+(BOOL)shouldShowEmergencyContacts;
+(id)descriptorForRequiredKeys;
+(id)emergencyContactMatchingContact:(SEL)arg0 ;
+(id)identifiersForContactMatchingEmergencyContacts:(id)arg0 contactStore:(id)arg1 ;
+(id)log;
-(id)createMedicalIDFromContact:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 healthStore:(id)arg1 medicalIDStore:(id)arg2 ;
-(id)nts_lazyHealthStore;
-(id)nts_lazyMedicalIDStore;
-(id)registerMedicalIDDataHandler:(id)arg0 ;
-(void)dealloc;
-(void)notifyHandlersWithMedicalIDData:(id)arg0 ;
-(void)startListeningForChanges;
-(void)unregisterHandlerForToken:(id)arg0 ;
-(void)updateAndDispatchMedicalIDData;


@end


#endif