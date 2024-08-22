// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSYNCSERVICEMANAGER_H
#define MTSYNCSERVICEMANAGER_H

@class NSString;
@protocol MTSyncStatusProviderDelegate, MTSyncServiceDelegate, MTSyncManager, MTAgentDiagnosticDelegate, NAScheduler, MTSyncDataModel, MTSyncService, MTSyncStatusProvider;

#import <Foundation/Foundation.h>

#import "MTSyncChangeQueue.h"
#import "MTMetrics.h"

@interface MTSyncServiceManager : NSObject <MTSyncStatusProviderDelegate, MTSyncServiceDelegate, MTSyncManager, MTAgentDiagnosticDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (nonatomic) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (retain, nonatomic) MTSyncChangeQueue *syncChangeQueue; // ivar: _syncChangeQueue
@property (weak, nonatomic) NSObject<MTSyncDataModel> *syncDataModel; // ivar: _syncDataModel
@property (retain, nonatomic) MTMetrics *syncMetrics; // ivar: _syncMetrics
@property (retain, nonatomic) NSObject<MTSyncService> *syncService; // ivar: _syncService
@property (retain, nonatomic) NSObject<MTSyncStatusProvider> *syncStatusProvider; // ivar: _syncStatusProvider


-(id)gatherDiagnostics;
-(id)initWithSyncService:(id)arg0 syncStatusProvider:(id)arg1 syncDataModel:(id)arg2 syncMetrics:(id)arg3 ;
-(id)initWithSyncService:(id)arg0 syncStatusProvider:(id)arg1 syncDataModel:(id)arg2 syncMetrics:(id)arg3 syncChangeStore:(id)arg4 ;
-(id)pendingChanges;
-(id)requestSync:(NSUInteger)arg0 ;
-(void)applyChange:(id)arg0 ;
-(void)checkForPendingChanges;
-(void)pendingChangesSent:(id)arg0 ;
-(void)printDiagnostics;
-(void)resetDataStore;
-(void)startSyncService;
-(void)stopSyncService;
-(void)syncChange:(id)arg0 ;
-(void)syncStatusProvider:(id)arg0 didChangeSyncStatus:(NSUInteger)arg1 ;


@end


#endif