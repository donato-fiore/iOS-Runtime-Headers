// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERMANAGEMENTOPERATION_H
#define HMDUSERMANAGEMENTOPERATION_H

@class HMFObject, NSMutableArray, NSDictionary, NSArray, HMFTimer, NSString, NSDate, NSUUID, HAPPairingIdentity;
@protocol HMFTimerDelegate, NSSecureCoding, HMFLocking, OS_dispatch_queue, HMDUserManagementOperationDelegate;


#import "HMDAccessory.h"
#import "HMDAccessoryInvitation.h"
#import "HMDUserManagementOperationManager.h"
#import "HMDUser.h"

@interface HMDUserManagementOperation : HMFObject <HMFTimerDelegate, NSSecureCoding>

 {
    id<HMFLocking> *_lock;
    NSMutableArray *_dependencies;
}


@property (retain, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) HMDAccessoryInvitation *accessoryInvitation;
@property (readonly, nonatomic) NSDictionary *accessoryInvitationInformation;
@property (readonly, nonatomic, getter=isAddOperation) BOOL addOperation;
@property (readonly, nonatomic, getter=isAuditOperation) BOOL auditOperation;
@property (retain, nonatomic) NSArray *auditUsersToBeAdded; // ivar: _auditUsersToBeAdded
@property (nonatomic, getter=isBackingOff) BOOL backingOff; // ivar: _backingOff
@property (readonly, nonatomic) CGFloat backoffInterval; // ivar: _backoffInterval
@property (retain, nonatomic) HMFTimer *backoffTimer; // ivar: _backoffTimer
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDUserManagementOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) HMFTimer *expirationTimer; // ivar: _expirationTimer
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL lastOperationFailed; // ivar: _lastOperationFailed
@property (retain, nonatomic) HMDUserManagementOperationManager *operationManager; // ivar: _operationManager
@property (readonly, nonatomic) NSUInteger operationType; // ivar: _operationType
@property (copy, nonatomic) HAPPairingIdentity *ownerPairingIdentity; // ivar: _ownerPairingIdentity
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic, getter=isRemoveOperation) BOOL removeOperation;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDUser *user; // ivar: _user


+(BOOL)supportsSecureCoding;
+(id)addUserManagementOperationForUser:(id)arg0 accessory:(id)arg1 model:(id)arg2 ;
+(id)auditUserManagementOperationAccessory:(id)arg0 model:(id)arg1 ;
+(id)operationWithDictionary:(id)arg0 home:(id)arg1 ;
+(id)removeUserManagementOperationForUser:(id)arg0 accessory:(id)arg1 model:(id)arg2 ;
+(id)shortDescription;
+(void)initialize;
-(BOOL)isValid;
-(BOOL)mergeWithOperation:(id)arg0 ;
-(CGFloat)nextBackoffInterval;
-(id)_findConflictingAccessory:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dictionaryEncoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationType:(NSUInteger)arg0 identifier:(id)arg1 user:(id)arg2 accessory:(id)arg3 expiration:(id)arg4 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 ;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 parentUUID:(id)arg1 ;
-(id)shortDescription;
-(id)transactionWithObjectChangeType:(NSUInteger)arg0 parentUUID:(id)arg1 ;
-(void)_addPairingToHAPAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)_auditPairingsForHAPAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)_endBackoffTimer;
-(void)_removePairingFromHAPAccessory:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setupExpirationTimer;
-(void)_startBackoffTimer;
-(void)addDependency:(id)arg0 ;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)populateModelObjectWithChangeType:(id)arg0 version:(NSInteger)arg1 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateDelegate:(id)arg0 ;


@end


#endif