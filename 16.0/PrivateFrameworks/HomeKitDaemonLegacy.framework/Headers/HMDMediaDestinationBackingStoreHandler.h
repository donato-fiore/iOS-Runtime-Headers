// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIADESTINATIONBACKINGSTOREHANDLER_H
#define HMDMEDIADESTINATIONBACKINGSTOREHANDLER_H

@class HMMutableMediaDestination, HMMediaDestination;
@protocol HMDMediaDestinationBackingStoreHandlerDelegate;


#import "HMDBackingStoreHandler.h"
#import "HMDMediaDestinationManagerMetricsDispatcher.h"

@interface HMDMediaDestinationBackingStoreHandler : HMDBackingStoreHandler {
    os_unfair_lock_s _lock;
    HMMutableMediaDestination *_destination;
}


@property (weak) NSObject<HMDMediaDestinationBackingStoreHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly) HMMediaDestination *destination;
@property (readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher


+(id)backingStoreObjectForMediaDestination:(id)arg0 ;
+(id)logCategory;
-(id)initWithDestination:(id)arg0 backingStore:(id)arg1 metricsDispatcher:(id)arg2 delegate:(id)arg3 ;
-(void)mergeDestination:(id)arg0 ;
-(void)migrateWithCurrentCloudRecord:(id)arg0 home:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(id)arg4 ;
-(void)migrateWithHome:(id)arg0 cloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(id)arg3 ;
-(void)recoverDueToInvalidRecordInCloudWithHome:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)recoverDueToNoRecordInCloudWithHome:(id)arg0 migrationQueue:(id)arg1 completion:(id)arg2 ;
-(void)setAudioGroupIdentifier:(id)arg0 ;
-(void)setSupportedOptions:(NSUInteger)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;
-(void)updateAudioGroupIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateSupportedOptions:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif