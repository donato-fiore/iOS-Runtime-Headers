// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSCODEDATAMANAGER_H
#define HMDACCESSCODEDATAMANAGER_H

@class HMFObject, NSSet, NSArray, HMFTimer, NSString;
@protocol HMFLogging, HMFTimerDelegate, HMDAccessCodeDataManagerDelegate;


#import "HMDAccessCodeManagerContext.h"

@interface HMDAccessCodeDataManager : HMFObject <HMFLogging, HMFTimerDelegate>



@property (readonly, copy) NSSet *accessCodeValuesWithRemovedUserInfo;
@property (readonly, copy) NSSet *accessCodeValuesWithSimpleLabel;
@property (readonly, copy) NSSet *accessCodeValuesWithUserLabel;
@property (readonly, copy) NSArray *cachedAccessCodes;
@property (readonly) HMDAccessCodeManagerContext *context; // ivar: _context
@property (retain) HMFTimer *dataCleanUpTimer; // ivar: _dataCleanUpTimer
@property (copy) id *dataCleanUpTimerFactory; // ivar: _dataCleanUpTimerFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDAccessCodeDataManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *homeAccessCodeValues;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithRemovedUserInfo;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithSimpleLabels;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithUserLabels;
@property (readonly) Class superclass;


+(id)_accessCodeInHome:(id)arg0 forHomeAccessCodeModel:(id)arg1 ;
+(id)_accessCodeInHome:(id)arg0 forRemovedUserAccessCodeModel:(id)arg1 ;
+(id)createHomeAccessCodeModelsFromLabelsByAccessCode:(id)arg0 forHome:(id)arg1 ;
+(id)createRemovedUserInfoModelsFromRemovedUserInfoByAccessCode:(id)arg0 forHome:(id)arg1 ;
+(id)createUserAccessCodeModelFromAccessCode:(id)arg0 forUser:(id)arg1 changedByUserUUID:(id)arg2 ;
+(id)logCategory;
+(id)userWithAccessCode:(id)arg0 inHome:(id)arg1 ;
-(id)_removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg0 ;
-(id)_removeSimpleLabelAccessCodeValue:(id)arg0 ;
-(id)_removeUserAccessCodeValue:(id)arg0 ;
-(id)_setSimpleLabel:(id)arg0 forAccessCodeValue:(id)arg1 ;
-(id)_setUserWithUUID:(id)arg0 forAccessCodeValue:(id)arg1 changedByUserUUID:(id)arg2 ;
-(id)addOrUpdateHMDRemovedUserAccessCodeModel:(id)arg0 ;
-(id)addOrUpdateHomeAccessCodeModel:(id)arg0 ;
-(id)addOrUpdateUserAccessCodeModel:(id)arg0 ;
-(id)cachedAccessCodeForIdentifier:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)homeAccessCodeWithRemovedUserInfoWithUUID:(id)arg0 ;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)logIdentifier;
-(id)removeAllHomeAccessCodes;
-(id)removeHMDRemovedUserAccessCodeModel:(id)arg0 ;
-(id)removeHMDRemovedUserAccessCodeWithCode:(id)arg0 removedUserInfo:(id)arg1 ;
-(id)removeHomeAccessCodeModel:(id)arg0 ;
-(id)removeHomeAccessCodeWithValue:(id)arg0 ;
-(id)removeUserAccessCodeModel:(id)arg0 ;
-(id)saveRemovedUserAccessCode:(id)arg0 withRemovedUserInfo:(id)arg1 ;
-(id)setUserInformation:(id)arg0 forHomeAccessCodeWithValue:(id)arg1 changedByUserUUID:(id)arg2 ;
-(id)updateUserInformation:(id)arg0 forHomeAccessCodeWithOldValue:(id)arg1 newAccessCodeValue:(id)arg2 ;
-(void)_cleanUpOldRemovedUserData;
-(void)_setUpAndStartTimer;
-(void)configure;
-(void)handleRemovedHMDRemovedUserAccessCodeModel:(id)arg0 message:(id)arg1 ;
-(void)handleRemovedHomeAccessCodeModel:(id)arg0 message:(id)arg1 ;
-(void)handleRemovedUserAccessCodeModel:(id)arg0 forUser:(id)arg1 message:(id)arg2 ;
-(void)handleUpdatedHMDRemovedUserAccessCodeModel:(id)arg0 message:(id)arg1 ;
-(void)handleUpdatedHomeAccessCodeModel:(id)arg0 message:(id)arg1 ;
-(void)handleUpdatedUserAccessCodeModel:(id)arg0 forUser:(id)arg1 message:(id)arg2 ;
-(void)removeHMDRemovedUserAccessCodeWithAccessCode:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateCacheWithAddedAccessCodes:(id)arg0 ;
-(void)updateCacheWithFetchResponses:(id)arg0 ;
-(void)updateCacheWithRemovedAccessCodes:(id)arg0 ;
-(void)updateCacheWithUpdatedAccessCodes:(id)arg0 ;


@end


#endif