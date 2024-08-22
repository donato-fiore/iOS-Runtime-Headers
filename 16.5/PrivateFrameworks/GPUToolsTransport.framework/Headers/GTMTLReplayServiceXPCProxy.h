// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLREPLAYSERVICEXPCPROXY_H
#define GTMTLREPLAYSERVICEXPCPROXY_H

@class NSSet, NSMutableDictionary;
@protocol GTMTLReplayService, GTXPCConnection, OS_os_log;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"
#import "GTBulkDataServiceXPCProxy.h"

@interface GTMTLReplayServiceXPCProxy : NSObject <GTMTLReplayService>

 {
    id<GTXPCConnection> *_gtXPCConnection;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    id *_connectionhandler;
    NSObject<OS_os_log> *_log;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    NSMutableDictionary *_acceleratorStructureSessionToDispatcherId;
    NSMutableDictionary *_observerIdToPort;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)registerObserver:(id)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)addBatchFilteringRequest:(id)arg0 completionHandler:(id)arg1 ;
// -(void)beginAccelerationStructureSessionWithObjectID:(NSUInteger)arg0 functionIndex:(unsigned int)arg1 dataReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)beginDebugArchive:(id)arg0 extensionToken:(id)arg1 debugFiles:(id)arg2 completionHandler:(id)arg3 ;
-(void)debugFuncStop:(NSUInteger)arg0 ;
-(void)deleteAllArchives;
-(void)deleteAllArchivesWithCompletionHandler:(id)arg0 ;
-(void)deregisterObserver:(NSUInteger)arg0 ;
// -(void)derivedCounterData:(id)arg0 attributes:(id)arg1 dataReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)enableDrawCallPresent:(BOOL)arg0 ;
-(void)enableOutlinePresent:(BOOL)arg0 ;
-(void)enableWireframePresent:(BOOL)arg0 ;
-(void)endDebugArchive;
-(void)fetchResourceObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchResourceObjectBatch:(id)arg0 compressionKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateDependencyGraphThumbnails:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateListOfDebugFilesInCacheWithCompletionHandler:(id)arg0 ;
-(void)generateShaderDebuggerTrace:(id)arg0 completionHandler:(id)arg1 ;
-(void)generateThumbnails:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateSavePointerAliases;
-(void)loadAnalysis:(id)arg0 ;
-(void)loadArchives;
-(void)loadDataSource:(id)arg0 ;
-(void)overridesConfiguration:(id)arg0 ;
-(void)queryInducedGPUPerfStateWithCompletionHandler:(id)arg0 ;
// -(void)queryShaderInfo:(id)arg0 timelineInfo:(BOOL)arg1 dataReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)replayArchive;
-(void)resourcesUsedForFunctionIndex:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendAccelerationStructureDataWithSessionID:(NSUInteger)arg0 data:(id)arg1 ;
-(void)sendDebuggingFiles:(id)arg0 completionHandler:(id)arg1 ;
-(void)signalInterposeSemaphore;
-(void)teardownAccelerationStructureSession:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)terminateProcess;
-(void)traceConfiguration:(id)arg0 ;
-(void)updateLibraries:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateResourceObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)wireframeLineWidth:(float)arg0 ;


@end


#endif