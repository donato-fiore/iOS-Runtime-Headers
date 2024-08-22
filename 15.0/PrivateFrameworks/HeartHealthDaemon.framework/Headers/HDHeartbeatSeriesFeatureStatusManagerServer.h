// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEARTBEATSERIESFEATURESTATUSMANAGERSERVER_H
#define HDHEARTBEATSERIESFEATURESTATUSMANAGERSERVER_H

@class HDStandardTaskServer, NSString;
@protocol HKHeartbeatSeriesFeatureStatusManagerServer, HDHeartbeatSeriesFeatureStatusManagerDelegate;


#import "HDHeartbeatSeriesFeatureStatusManager.h"

@interface HDHeartbeatSeriesFeatureStatusManagerServer : HDStandardTaskServer <HKHeartbeatSeriesFeatureStatusManagerServer, HDHeartbeatSeriesFeatureStatusManagerDelegate>

 {
    HDHeartbeatSeriesFeatureStatusManager *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)_clientRemoteObjectProxy;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)heartbeatSeriesFeatureStatusManager:(id)arg0 didFailToUpdateWithError:(id)arg1 ;
-(void)heartbeatSeriesFeatureStatusManager:(id)arg0 didUpdatePredominantFeature:(NSInteger)arg1 ;
-(void)remote_startObservingChangesWithCompletion:(id)arg0 ;
-(void)remote_stopObservingChanges;
-(void)remote_updateAndNotifyAllObservers;


@end


#endif