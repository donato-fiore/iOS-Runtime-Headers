// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERMANAGEMENTOPERATIONMANAGER_H
#define HMDUSERMANAGEMENTOPERATIONMANAGER_H

@class HMFObject, NSMutableArray, NSString, NSHashTable, NSArray, HMFTimer;
@protocol HMFTimerDelegate, HMFLocking, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDUserManagementOperationManager : HMFObject <HMFTimerDelegate>

 {
    id<HMFLocking> *_lock;
    NSMutableArray *_operations;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSHashTable *observedAccessories; // ivar: _observedAccessories
@property (readonly, nonatomic) NSArray *operations;
@property (readonly, nonatomic) HMFTimer *saveTimer; // ivar: _saveTimer
@property (readonly) Class superclass;


+(id)sharedManager;
+(void)initialize;
+(void)setSharedManager:(id)arg0 ;
-(id)_filteredOperationsForAccessory:(id)arg0 ;
-(id)_filteredOperationsWithDependency:(id)arg0 ;
-(id)init;
-(id)initWithOperations:(id)arg0 ;
-(id)shortDescription;
-(void)__deregisterIfNeededForReachablityChangeNotificationsForAccessory:(id)arg0 ;
-(void)__executeOperation:(id)arg0 ;
-(void)__registerIfNeededForReachablityChangeNotifications;
-(void)__registerIfNeededForReachablityChangeNotificationsForAccessory:(id)arg0 ;
-(void)__removeOperationAndProcessDependantOperations:(id)arg0 ;
-(void)__save;
-(void)_cleanPriorOperations:(id)arg0 ;
-(void)_handleAccessoryIsReachable:(id)arg0 ;
-(void)_handleAddedOperation:(id)arg0 ;
-(void)_handleRemovedOperation:(id)arg0 ;
-(void)_reallySave;
-(void)addOperation:(id)arg0 ;
-(void)cancelAllOperations;
-(void)dealloc;
-(void)operationCancelled:(id)arg0 ;
-(void)operationStoppedBackingOff:(id)arg0 ;
-(void)removeOperation:(id)arg0 ;
-(void)removeOperationWithIdentifier:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif