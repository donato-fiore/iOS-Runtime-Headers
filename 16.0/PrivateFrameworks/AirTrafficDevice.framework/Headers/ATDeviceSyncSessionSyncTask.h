// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATDEVICESYNCSESSIONSYNCTASK_H
#define ATDEVICESYNCSESSIONSYNCTASK_H

@class NSMutableArray;
@protocol ATSyncClient;


#import "ATDeviceSyncSessionTask.h"
#import "ATDeviceSettings.h"

@interface ATDeviceSyncSessionSyncTask : ATDeviceSyncSessionTask {
    id<ATSyncClient> *_pluginClient;
    ATDeviceSettings *_settings;
    NSMutableArray *_streamReaders;
    BOOL _addedTransportUpgradeException;
    BOOL _isFinishing;
    CGFloat _taskStartTime;
    NSUInteger _syncIterationCount;
    NSUInteger _totalItemsSyncedCount;
    NSUInteger _clientCurrentItemCount;
    NSUInteger _clientTotalItemCount;
    NSUInteger _serverCurrentItemCount;
    NSUInteger _serverTotalItemCount;
}


@property (nonatomic) BOOL startAssetTaskWhenFinished; // ivar: _startAssetTaskWhenFinished


-(id)initWithDataClass:(id)arg0 onMessageLink:(id)arg1 ;
-(id)sessionGroupingKey;
-(void)_applyChangesForSyncResponse:(id)arg0 toCurrentRevision:(NSUInteger)arg1 versionToken:(id)arg2 onMessageLink:(id)arg3 ;
-(void)_drainInputStream:(id)arg0 withCompletion:(id)arg1 ;
-(void)_finishSyncWithError:(id)arg0 ;
-(void)_finishTaskWithError:(id)arg0 ;
-(void)_processSyncRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_processSyncResponse:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_resetSyncDataForLibrary:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_sendSyncRequestOnMessageLink:(id)arg0 ;
-(void)_sendSyncRequestWithChangesAfterRevision:(NSUInteger)arg0 toRevision:(NSUInteger)arg1 withNewRevision:(NSUInteger)arg2 withSyncType:(unsigned int)arg3 onMessageLink:(id)arg4 ;
-(void)_sendSyncRequestWithParams:(id)arg0 withSyncType:(unsigned int)arg1 syncState:(id)arg2 newRevision:(NSUInteger)arg3 versionToken:(id)arg4 inputStream:(id)arg5 onMessageLink:(id)arg6 ;
-(void)_sendSyncResponseToRequest:(id)arg0 withChangesAfterRevision:(NSUInteger)arg1 toRevision:(NSUInteger)arg2 withNewRevision:(NSUInteger)arg3 withSyncType:(unsigned int)arg4 onMessageLink:(id)arg5 ;
-(void)_sendSyncResponseToRequest:(id)arg0 withParams:(id)arg1 withNewRevision:(NSUInteger)arg2 withSyncType:(unsigned int)arg3 inputStream:(id)arg4 onMessageLink:(id)arg5 ;
-(void)_updateProgressWithCount:(NSUInteger)arg0 totalItemCount:(NSUInteger)arg1 forEndpointType:(int)arg2 ;
-(void)cancel;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)start;


@end


#endif