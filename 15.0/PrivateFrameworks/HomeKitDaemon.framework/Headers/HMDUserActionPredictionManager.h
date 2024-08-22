// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERACTIONPREDICTIONMANAGER_H
#define HMDUSERACTIONPREDICTIONMANAGER_H

@class HMFObject, NSUUID, NSString, HMBLocalZone;
@protocol HMBLocalZoneModelObserver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDUserActionPredictionDataSource, HMFLocking, HMDUserActionPredictionDataReceiver, OS_dispatch_queue;


#import "HMDUserActionPredictionContainer.h"
#import "HMDDatabaseZoneManager.h"

@interface HMDUserActionPredictionManager : HMFObject <HMBLocalZoneModelObserver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDUserActionPredictionDataSource>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, getter=isDataAvailableForUserActionPredictionDataSource) BOOL dataAvailableForUserActionPredictionDataSource;
@property (readonly) NSObject<HMDUserActionPredictionDataReceiver> *dataReceiver; // ivar: _dataReceiver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly) HMDUserActionPredictionContainer *predictionContainer; // ivar: _predictionContainer
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMDDatabaseZoneManager *zoneManager; // ivar: _zoneManager


-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(id)_addOrUpdateUserActionPredictions:(id)arg0 ;
-(id)_addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)arg0 ;
-(id)_removeUserActionPredictions:(id)arg0 ;
-(id)_removeZones;
-(id)addOrUpdateUserActionPredictions:(id)arg0 ;
-(id)addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(id)arg0 ;
-(id)fetchPredictionsWithLimitForUserActionPredictionDataSource:(NSUInteger)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithUUID:(id)arg0 zoneManager:(id)arg1 dataReceiver:(id)arg2 workQueue:(id)arg3 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)removeUserActionPredictions:(id)arg0 ;
-(void)_handleCreatedOrUpdatedModel:(id)arg0 ;
-(void)_handleDeletedModel:(id)arg0 ;
-(void)_removeMediaSystemFromPredictions:(id)arg0 ;
-(void)_removePredictionsWithPredictionTargetUUID:(id)arg0 ;
-(void)_removePredictionsWithTargetServiceUUID:(id)arg0 ;
-(void)_removeServiceGroupFromPredictions:(id)arg0 ;
-(void)_updatePredictionsWithMediaSystem:(id)arg0 ;
-(void)_updatePredictionsWithServiceGroup:(id)arg0 ;
-(void)configureWithHome:(id)arg0 notificationCenter:(id)arg1 ;
-(void)encodePredictionsWithCoder:(id)arg0 ;
-(void)handleAccessoryRemovedNotification:(id)arg0 ;
-(void)handleActionSetEmptiedNotification:(id)arg0 ;
-(void)handleMediaSystemAddedNotification:(id)arg0 ;
-(void)handleMediaSystemRemovedNotification:(id)arg0 ;
-(void)handleServiceGroupRemovedNotification:(id)arg0 ;
-(void)handleServiceGroupUpdatedNotification:(id)arg0 ;
-(void)handleServiceRemovedNotification:(id)arg0 ;
-(void)removeZones;
-(void)zoneManagerDidStart:(id)arg0 ;
-(void)zoneManagerDidStop:(id)arg0 ;


@end


#endif