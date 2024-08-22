// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSCODEMANAGER_H
#define HMACCESSCODEMANAGER_H

@class NSUUID, NSArray, NSString, NSNotificationCenter, NSHashTable;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"
#import "HMHome.h"

@interface HMAccessCodeManager : NSObject <HMFLogging, HMFMessageReceiver>

 {
    hmf_unfair_data_lock_s _lock;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSArray *accessoriesSupportingAccessCodes;
@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(BOOL)doesAccessCode:(id)arg0 conflictWithExistingAccessCodes:(id)arg1 ;
+(BOOL)isWeakAccessCode:(id)arg0 ;
+(NSInteger)_accessCodeLengthFromLowerBound:(NSInteger)arg0 upperBound:(NSInteger)arg1 ;
+(NSInteger)greatestLowerBoundForAccessCodeLengthFromConstraints:(id)arg0 ;
+(NSInteger)leastUpperBoundForAccessCodeLengthFromConstraints:(id)arg0 ;
+(id)_createAccessCodeWithLength:(NSInteger)arg0 ;
+(id)accessCodeConstraints;
+(id)accessCodeManagerUUIDFromHomeUUID:(id)arg0 ;
+(id)convertPotentialUniqueIdentifier:(id)arg0 toUUIDForUserInHome:(id)arg1 ;
+(id)generateAccessCodeValueFromConstraints:(id)arg0 accessoryAccessCodes:(id)arg1 homeAccessCodes:(id)arg2 ;
+(id)generateAccessCodeValueFromConstraints:(id)arg0 existingAccessCodes:(id)arg1 ;
+(id)logCategory;
+(id)valueObjectsForAccessCodeModificationRequests:(id)arg0 home:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 context:(id)arg1 UUID:(id)arg2 notificationCenter:(id)arg3 ;
-(id)logIdentifier;
-(void)_sendMessageWithName:(id)arg0 payload:(id)arg1 responseHandler:(id)arg2 ;
-(void)_subscribe;
-(void)_unsubscribe;
-(void)addObserver:(id)arg0 ;
-(void)configure;
-(void)fetchAccessCodeConstraintsFromAccessories:(id)arg0 completion:(id)arg1 ;
-(void)fetchAccessCodesFromAccessories:(id)arg0 completion:(id)arg1 ;
-(void)fetchCachedAccessoryAccessCodesWithCompletion:(id)arg0 ;
-(void)fetchHomeAccessCodesWithCompletion:(id)arg0 ;
-(void)generateAccessCodeForUser:(id)arg0 completion:(id)arg1 ;
-(void)handleDaemonReconnectedNotification:(id)arg0 ;
-(void)handleDidAddAccessoryAccessCodesMessage:(id)arg0 ;
-(void)handleDidAddHomeAccessCodesMessage:(id)arg0 ;
-(void)handleDidRemoveAccessoryAccessCodesMessage:(id)arg0 ;
-(void)handleDidRemoveHomeAccessCodesMessage:(id)arg0 ;
-(void)handleDidUpdateAccessoryAccessCodesMessage:(id)arg0 ;
-(void)handleDidUpdateHomeAccessCodesMessage:(id)arg0 ;
-(void)removeHomeAccessCodeWithValue:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeSimpleLabelAccessCode:(id)arg0 completion:(id)arg1 ;
-(void)resetAccessoryAccessCodesWithValueMatchingHomeAccessCode:(id)arg0 completion:(id)arg1 ;
-(void)setAccessCode:(id)arg0 forUser:(id)arg1 completion:(id)arg2 ;
-(void)setAccessCode:(id)arg0 forUserWithUUID:(id)arg1 completion:(id)arg2 ;
-(void)setUserInformation:(id)arg0 forHomeAccessCodeWithValue:(id)arg1 completion:(id)arg2 ;
-(void)submitAccessCodeModificationRequests:(id)arg0 completion:(id)arg1 ;


@end


#endif