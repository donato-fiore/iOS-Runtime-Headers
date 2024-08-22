// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYSTORETASKSERVER_H
#define HDONTOLOGYSTORETASKSERVER_H

@protocol HDOntologyShardDownloaderObserver, HDOntologyShardImporterObserver, HKOntologyStoreServerInterface;


#import "HDStandardTaskServer.h"

@interface HDOntologyStoreTaskServer : HDStandardTaskServer <HDOntologyShardDownloaderObserver, HDOntologyShardImporterObserver, HKOntologyStoreServerInterface>





+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)ontologyShardDownloader:(id)arg0 didStageEntry:(id)arg1 ;
-(void)ontologyShardImporter:(id)arg0 didImportEntry:(id)arg1 ;
-(void)remote_downloadRequiredShardsWithCompletion:(id)arg0 ;
-(void)remote_importRequiredShardsWithCompletion:(id)arg0 ;
-(void)remote_insertEntries:(id)arg0 completion:(id)arg1 ;
-(void)remote_markShardsWithIdentifiers:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)remote_observeOntologyStoreChanges:(BOOL)arg0 completion:(id)arg1 ;
-(void)remote_ontologyServerURLWithCompletion:(id)arg0 ;
-(void)remote_ontologyShardRegistryEntriesWithCompletion:(id)arg0 ;
-(void)remote_pruneOntologyWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_requestGatedOntologyUpdateWithCompletion:(id)arg0 ;
-(void)remote_setOntologyServerURL:(id)arg0 completion:(id)arg1 ;
-(void)remote_shardRequirementStatusesWithCompletion:(id)arg0 ;
-(void)remote_updateOntologyForReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)remote_updateShardRegistryWithCompletion:(id)arg0 ;


@end


#endif