// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTMTLREPLAYSERVICEXPCPROXY_H
#define GTMTLREPLAYSERVICEXPCPROXY_H

@class NSSet;
@protocol GTMTLReplayService, GTXPCConnection, GTDataProviderService, OS_os_log;

#import <Foundation/Foundation.h>


@interface GTMTLReplayServiceXPCProxy : NSObject <GTMTLReplayService>

 {
    id<GTXPCConnection> *_connection;
    NSSet *_ignoreMethods;
    id *_accelerationDataReceivedHandler;
    id *_queryShaderInfoDataReceivedHandler;
    id *_derivedCounterDataDataReceivedHandler;
    id *_connectionhandler;
    id<GTDataProviderService> *_dataProvider;
    NSObject<OS_os_log> *_log;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 dataProvider:(id)arg2 ;
-(void)accelerationStructureData;
-(void)addBatchFilteringRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginAccelerationStructureSession;
// -(void)beginAccelerationStructureSessionWithObjectID:(NSUInteger)arg0 functionIndex:(unsigned int)arg1 dataReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)beginDebugArchive:(id)arg0 extensionToken:(id)arg1 debugFiles:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)debugFuncStop:(NSUInteger)arg0 ;
-(void)deleteAllArchivesWithCompletionHandler:(id)arg0 ;
// -(void)derivedCounterData:(id)arg0 attributes:(id)arg1 dataReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)dispatchMessage:(id)arg0 replyConnection:(id)arg1 ;
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
-(void)overridesConfiguration:(id)arg0 ;
-(void)queryInducedGPUPerfStateWithCompletionHandler:(id)arg0 ;
// -(void)queryShaderInfo:(id)arg0 timelineInfo:(BOOL)arg1 dataReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)replayArchive;
-(void)resourcesUsedForFunctionIndex:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendAccelerationStructureDataWithSessionID:(NSUInteger)arg0 data:(id)arg1 ;
-(void)sendAccelerationStructureDataWithSessionID_data_:(id)arg0 replyConnection:(id)arg1 ;
-(void)sendDebuggingFiles:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendDerivedCounterDataData:(id)arg0 ;
-(void)sendDerivedCounterDataData_:(id)arg0 replyConnection:(id)arg1 ;
-(void)sendQueryShaderInfoData:(id)arg0 ;
-(void)sendQueryShaderInfoData_:(id)arg0 replyConnection:(id)arg1 ;
-(void)signalInterposeSemaphore;
-(void)teardownAccelerationStructureSession;
-(void)teardownAccelerationStructureSession:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)traceConfiguration:(id)arg0 ;
-(void)updateLibraries:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateResourceObject:(id)arg0 completionHandler:(id)arg1 ;
-(void)wireframeLineWidth:(float)arg0 ;


@end


#endif