// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPASSSYNCSERVICE_H
#define NPKPASSSYNCSERVICE_H

@class NSString, IDSService;
@protocol IDSServiceDelegate, NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKPassSyncEngine.h"
#import "NPKPassSyncServiceSyncStatus.h"

@interface NPKPassSyncService : NSObject <IDSServiceDelegate, NPKPassSyncEngineDelegate, NPKPassSyncEngineDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dropAllMessages; // ivar: _dropAllMessages
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NPKPassSyncEngine *passSyncEngine; // ivar: _passSyncEngine
@property (retain, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineArchiveTimer; // ivar: _passSyncEngineArchiveTimer
@property (retain, nonatomic) NSObject<OS_dispatch_source> *passSyncEngineSyncTimer; // ivar: _passSyncEngineSyncTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *passSyncQueue; // ivar: _passSyncQueue
@property (retain, nonatomic) IDSService *passSyncService; // ivar: _passSyncService
@property (retain, nonatomic) NPKPassSyncServiceSyncStatus *passSyncStatus; // ivar: _passSyncStatus
@property (readonly) Class superclass;


-(NSUInteger)settingsForPassWithUniqueID:(id)arg0 ;
-(id)_archivedPassSyncEngine;
-(id)companionCatalogToSendWithStateChange;
-(id)currentLibraryPassSyncStateWithReconciledState:(id)arg0 ;
-(id)initWithPassSyncEngineRole:(NSUInteger)arg0 ;
-(id)passSyncEngine:(id)arg0 dataForPassWithUniqueID:(id)arg1 ;
-(id)passSyncEngine:(id)arg0 partialDataForPassWithUniqueID:(id)arg1 baseManifest:(id)arg2 outRemoteAssets:(*id)arg3 ;
-(id)passSyncEngineNeedsUpdatedPassLibraryState:(id)arg0 ;
-(id)watchCatalogToSendWithStateChange;
-(void)_archiveTimerFired;
-(void)_ensureSyncTimerIsSet;
-(void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(BOOL)arg0 ;
-(void)_syncNow;
-(void)_syncTimerFired;
-(void)_syncWhenAppropriate;
-(void)associatedPassDataRequested:(id)arg0 ;
-(void)catalogChanged:(id)arg0 ;
-(void)handleCatalogChangeWithCompanionCatalog:(id)arg0 watchCatalog:(id)arg1 ;
-(void)handleIncomingCompanionCatalog:(id)arg0 watchCatalog:(id)arg1 ;
-(void)handleIncomingPassSettings:(NSUInteger)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)handlePassLibraryChanged;
-(void)handleRequestedAssociatedData:(NSUInteger)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)handleSettingsChanged:(NSUInteger)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)passSettingsChanged:(id)arg0 ;
-(void)passSyncEngine:(id)arg0 finishedProcessingChange:(id)arg1 ;
-(void)passSyncEngine:(id)arg0 receivedStateChangeProcessed:(id)arg1 changeAccepted:(BOOL)arg2 ;
-(void)passSyncEngine:(id)arg0 requestsAddPassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(id)arg3 ;
-(void)passSyncEngine:(id)arg0 requestsRemovePassWithUniqueID:(id)arg1 completion:(id)arg2 ;
-(void)passSyncEngine:(id)arg0 requestsUpdatePassData:(id)arg1 forSyncStateItem:(id)arg2 baseManifestHashForPartialUpdate:(id)arg3 remoteAssetsForPartialUpdate:(id)arg4 completion:(id)arg5 ;
-(void)passSyncEngine:(id)arg0 sendProposedReconciledState:(id)arg1 ;
-(void)passSyncEngine:(id)arg0 sendReconciledStateAcceptedWithHash:(id)arg1 ;
-(void)passSyncEngine:(id)arg0 sendReconciledStateUnrecognizedWithHash:(id)arg1 version:(NSUInteger)arg2 currentPassSyncState:(id)arg3 ;
-(void)passSyncEngine:(id)arg0 sendStateChange:(id)arg1 ;
-(void)passSyncEngine:(id)arg0 sendStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(BOOL)arg2 fullPassRequired:(BOOL)arg3 ;
-(void)passSyncEngineStateChanged:(id)arg0 ;
-(void)proposedReconciledState:(id)arg0 ;
-(void)reconciledStateAccepted:(id)arg0 ;
-(void)reconciledStateUnrecognized:(id)arg0 ;
-(void)requestAssociatedData:(NSUInteger)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)start;
-(void)suggestSync;
-(void)syncStateChangeProcessed:(id)arg0 ;
-(void)syncStateChanged:(id)arg0 ;
-(void)teardownSync;
-(void)updatePassLibrary;


@end


#endif