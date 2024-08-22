// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINERESOURCESTORAGE_H
#define CPLENGINERESOURCESTORAGE_H

@class NSMutableDictionary, NSString, NSURL;
@protocol CPLAbstractObject, OS_dispatch_queue;


#import "CPLEngineStorage.h"
#import "_CPLPruneRequestCounter.h"
#import "CPLEngineFileStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject>

 {
    NSMutableDictionary *_identitiesToCommit;
    NSMutableDictionary *_identitiesToDelete;
    NSObject<OS_dispatch_queue> *_pruneStatsQueue;
    _CPLPruneRequestCounter *_pruneRequests;
    _CPLPruneRequestCounter *_purgeabilityCheckRequests;
    BOOL _shouldCreateTempFolder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CPLEngineFileStorage *fileStorage; // ivar: _fileStorage
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (nonatomic) BOOL shouldCheckFilesForUpload; // ivar: _shouldCheckFilesForUpload
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *tempFolderURL; // ivar: _tempFolderURL


-(BOOL)_clearAndCreateTempFolderIfNecessaryWithError:(*id)arg0 ;
-(BOOL)checkIsEmpty;
-(BOOL)compactWithError:(*id)arg0 ;
-(BOOL)dropResourceForUpload:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasResource:(id)arg0 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)releaseFileURL:(id)arg0 forResource:(id)arg1 error:(*id)arg2 ;
-(BOOL)resetWithError:(*id)arg0 ;
-(BOOL)storeDownloadedResource:(id)arg0 atURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)storeResourceCopyForUpload:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeResourceForUpload:(id)arg0 shouldCheckResource:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)scopeType;
-(NSUInteger)sizeOfOriginalResourcesToUpload;
-(NSUInteger)sizeOfResourcesToUpload;
-(id)createTempDestinationURLForResource:(id)arg0 error:(*id)arg1 ;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)retainFileURLForResource:(id)arg0 error:(*id)arg1 ;
-(id)status;
-(id)statusDictionary;
-(void)notePruningRequestForResource:(id)arg0 realPrune:(BOOL)arg1 successful:(BOOL)arg2 ;
-(void)notePruningRequestForResource:(id)arg0 realPrune:(BOOL)arg1 successful:(BOOL)arg2 prunedSize:(NSUInteger)arg3 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif