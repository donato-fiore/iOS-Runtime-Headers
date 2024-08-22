// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCOBSERVERTASKSERVER_H
#define HDCLOUDSYNCOBSERVERTASKSERVER_H

@class HKCloudSyncObserverStatus, NSObservation, NSString;
@protocol HKCloudSyncObserverServerInterface, HDCloudSyncManagerObserver, OS_dispatch_queue;


#import "HDStandardTaskServer.h"

@interface HDCloudSyncObserverTaskServer : HDStandardTaskServer <HKCloudSyncObserverServerInterface, HDCloudSyncManagerObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HKCloudSyncObserverStatus *_status;
    NSObservation *_waitForSyncObservations;
    BOOL _observingSyncStatus;
    BOOL _hasRestoreCompleted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateClient:(id)arg0 error:(*id)arg1 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(id)remote_startSyncIfRestoreNotCompletedWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)_cloudKitIdentityUpdated:(id)arg0 ;
-(void)cloudSyncManager:(id)arg0 didUpdateDataUploadRequestStatus:(NSInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)cloudSyncManager:(id)arg0 didUpdateErrorRequiringUserAction:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateLastPullDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateLastPulledUpdateDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateLastPushDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateRestoreCompletionDate:(id)arg1 ;
-(void)cloudSyncManager:(id)arg0 didUpdateSyncEnabled:(BOOL)arg1 ;
-(void)connectionInvalidated;
-(void)remote_startObservingSyncStatusWithCompletion:(id)arg0 ;


@end


#endif