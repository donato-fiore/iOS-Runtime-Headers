// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERBACKINGSTOREHANDLER_H
#define HMDMEDIADESTINATIONCONTROLLERBACKINGSTOREHANDLER_H

@class HMMutableMediaDestinationControllerData, HMMediaDestinationControllerData, NSString;
@protocol HMFLogging, HMDMediaDestinationControllerBackingStoreHandlerDelegate;


#import "HMDBackingStoreHandler.h"
#import "HMDMediaDestinationControllerMetricsEventDispatcher.h"

@interface HMDMediaDestinationControllerBackingStoreHandler : HMDBackingStoreHandler <HMFLogging>

 {
    HMMutableMediaDestinationControllerData *_data;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) HMMediaDestinationControllerData *data;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaDestinationControllerBackingStoreHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher; // ivar: _metricsEventDispatcher
@property (readonly) Class superclass;


+(id)backingStoreObjectForData:(id)arg0 ;
+(id)logCategory;
-(id)initWithData:(id)arg0 backingStore:(id)arg1 metricsEventDispatcher:(id)arg2 delegate:(id)arg3 ;
-(id)logIdentifier;
-(void)mergeData:(id)arg0 ;
-(void)migrateWithCurrentCloudRecord:(id)arg0 home:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(id)arg4 ;
-(void)migrateWithHome:(id)arg0 cloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(id)arg3 ;
-(void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg0 ;
-(void)notifyDidUpdateDestinationIdentifier:(id)arg0 ;
-(void)recoverDueToInvalidRecordInCloudWithHome:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)recoverDueToNoRecordInCloudWithHome:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)removeControllerWithCompletion:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdatedDestinationIdentifier:(id)arg0 message:(id)arg1 ;
-(void)updateAvailableDestinationIdentifiers:(id)arg0 ;
-(void)updateAvailableDestinationIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)updateDestinationIdentifier:(id)arg0 ;
-(void)updateDestinationIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif