// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLREPLAYSERVICEXPCDISPATCHER_H
#define GTMTLREPLAYSERVICEXPCDISPATCHER_H

@protocol GTMTLReplayServiceXPCDispatcher, GTMTLReplayService, OS_os_log;


#import "GTXPCDispatcher.h"
#import "GTBulkDataService.h"
#import "GTServiceProperties.h"

@interface GTMTLReplayServiceXPCDispatcher : GTXPCDispatcher <GTMTLReplayServiceXPCDispatcher>

 {
    id<GTMTLReplayService> *_implInstance;
    GTBulkDataService *_bulkDataService;
    GTServiceProperties *_bulkDataServiceProperties;
    NSObject<OS_os_log> *_log;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 bulkDataService:(id)arg2 bulkDataServiceProperties:(id)arg3 ;
-(void)addBatchFilteringRequest_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)beginAccelerationStructureSessionWithObjectID_functionIndex_dataReceivedHandler_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)beginDebugArchive_extensionToken_debugFiles_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)bulkDataService:(id)arg0 replyConnection:(id)arg1 ;
-(void)debugFuncStop_:(id)arg0 replyConnection:(id)arg1 ;
-(void)deleteAllArchives:(id)arg0 replyConnection:(id)arg1 ;
-(void)deleteAllArchivesWithCompletionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)deregisterObserver_:(id)arg0 replyConnection:(id)arg1 ;
-(void)derivedCounterData_attributes_dataReceivedHandler_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)enableDrawCallPresent_:(id)arg0 replyConnection:(id)arg1 ;
-(void)enableOutlinePresent_:(id)arg0 replyConnection:(id)arg1 ;
-(void)enableWireframePresent_:(id)arg0 replyConnection:(id)arg1 ;
-(void)endDebugArchive:(id)arg0 replyConnection:(id)arg1 ;
-(void)fetchResourceObjectBatch_compressionKey_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)fetchResourceObject_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)generateDependencyGraphThumbnails_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)generateListOfDebugFilesInCacheWithCompletionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)generateShaderDebuggerTrace_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)generateThumbnails_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)invalidateSavePointerAliases:(id)arg0 replyConnection:(id)arg1 ;
-(void)loadAnalysis_:(id)arg0 replyConnection:(id)arg1 ;
-(void)loadArchives:(id)arg0 replyConnection:(id)arg1 ;
-(void)loadDataSource_:(id)arg0 replyConnection:(id)arg1 ;
-(void)overridesConfiguration_:(id)arg0 replyConnection:(id)arg1 ;
-(void)queryInducedGPUPerfStateWithCompletionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)queryShaderInfo_timelineInfo_dataReceivedHandler_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)registerObserver_:(id)arg0 replyConnection:(id)arg1 ;
-(void)replayArchive:(id)arg0 replyConnection:(id)arg1 ;
-(void)resourcesUsedForFunctionIndex_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)sendAccelerationStructureDataWithSessionID_data_:(id)arg0 replyConnection:(id)arg1 ;
-(void)sendDebuggingFiles_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)signalInterposeSemaphore:(id)arg0 replyConnection:(id)arg1 ;
-(void)teardownAccelerationStructureSession_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)terminateProcess:(id)arg0 replyConnection:(id)arg1 ;
-(void)traceConfiguration_:(id)arg0 replyConnection:(id)arg1 ;
-(void)updateLibraries_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)updateResourceObject_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)wireframeLineWidth_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif