// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFPINCODEMANAGER_H
#define HFPINCODEMANAGER_H

@class HMAccessCodeManager, NSArray, NAFuture, NSString, HMHome, NSHashTable;
@protocol HFHomeObserver, HFExecutionEnvironmentObserver, HMAccessCodeManagerObserver;

#import <Foundation/Foundation.h>

#import "HFPinCodeDataStore.h"

@interface HFPinCodeManager : NSObject <HFHomeObserver, HFExecutionEnvironmentObserver, HMAccessCodeManagerObserver>



@property (retain, nonatomic) HMAccessCodeManager *accessCodeManager; // ivar: _accessCodeManager
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) NAFuture *constraintsFuture; // ivar: _constraintsFuture
@property (retain, nonatomic) HFPinCodeDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger fetchInProgress; // ivar: _fetchInProgress
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain) NAFuture *inProgressFetchFromAccessories; // ivar: _inProgressFetchFromAccessories
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)asciiStringForLocalizedPINString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isAccessoryFetchInProgress;
-(id)_buildDataStoreWithAccessoryAccessCodeFetch:(id)arg0 ;
-(id)_fetchAccessCodesFromAccessories;
-(id)_fetchAccessoryConstraints;
-(id)_fetchCachedAccessoryAccessCodes;
-(id)_modificationCompletionHandlerForFuture:(SEL)arg0 ;
-(id)_submitModificationRequests:(id)arg0 ;
-(id)_updateGuestPinCodeWithItem:(id)arg0 withCodeValue:(id)arg1 withUserInfo:(id)arg2 ;
-(id)addGuestPinCode:(id)arg0 withLabel:(id)arg1 onAccessories:(id)arg2 ;
-(id)checkForValidationErrorsWithPINCodeValue:(id)arg0 originalPINCode:(id)arg1 ;
-(id)currentUserPinCode;
-(id)deleteGuestPinCodeWithItem:(id)arg0 ;
-(id)deleteUserPinCodeWithUser:(id)arg0 ;
-(id)enablePinCodesForAllUsersOnNewAccessory:(id)arg0 ;
-(id)enablePinCodesForNewAccessory:(id)arg0 forGuestItems:(id)arg1 ;
-(id)fetchFromAccessories;
-(id)fetchFromAccessoryCache;
-(id)generateNewCodeValue;
-(id)guestPinCodes;
-(id)hasValidConstraints;
-(id)initWithHome:(id)arg0 ;
-(id)pinCodeForCodeValue:(id)arg0 ;
-(id)refreshDataStore;
-(id)removedUserPINCodes;
-(id)restoreFullAccessForUserWithItem:(id)arg0 ;
-(id)revokeAccessForAllRemovedUsers;
-(id)setPinCodeWithItem:(id)arg0 enabled:(BOOL)arg1 onAccessories:(id)arg2 ;
-(id)setUserPinCode:(id)arg0 forUser:(id)arg1 ;
-(id)updateGuestPinCodeWithItem:(id)arg0 withCodeValue:(id)arg1 withLabel:(id)arg2 ;
-(id)updateGuestPinCodeWithItem:(id)arg0 withLabel:(id)arg1 ;
-(id)updatePinCodeWithItem:(id)arg0 withCodeValue:(id)arg1 ;
-(id)userPinCodes;
-(void)_addNewHomeAccessCode:(id)arg0 toStore:(id)arg1 ;
-(void)_fetchPinCodeConstraints:(id)arg0 ;
-(void)_kickoff;
-(void)_reloadObservers;
-(void)accessCodeManager:(id)arg0 didAddAccessoryAccessCodes:(id)arg1 ;
-(void)accessCodeManager:(id)arg0 didAddHomeAccessCodes:(id)arg1 ;
-(void)accessCodeManager:(id)arg0 didRemoveAccessoryAccessCodes:(id)arg1 ;
-(void)accessCodeManager:(id)arg0 didRemoveHomeAccessCodes:(id)arg1 ;
-(void)accessCodeManager:(id)arg0 didUpdateHomeAccessCodes:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)executionEnvironmentRunningStateDidChange:(id)arg0 ;
-(void)fetchPinCodeConstraints:(id)arg0 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif