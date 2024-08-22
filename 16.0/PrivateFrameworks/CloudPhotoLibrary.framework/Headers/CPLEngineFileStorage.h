// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINEFILESTORAGE_H
#define CPLENGINEFILESTORAGE_H

@class NSString, NSURL, NSMutableArray;
@protocol CPLAbstractObject, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CPLPlatformObject.h"

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject>

 {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_logDomain;
    NSURL *_crashMarkerURL;
    NSMutableArray *_uncommittedFiles;
    BOOL _trackAllStoresAndDeletesUntilEndOfTransaction;
    BOOL _shouldResetPlatformTrackAllStoresAndDeletes;
}


@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleteImmediately; // ivar: _deleteImmediately
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL keepOriginals; // ivar: _keepOriginals
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly) Class superclass;
@property (nonatomic) BOOL trackAllStoresAndDeletes;
@property (nonatomic) BOOL trackAllStoresAndDeletesUntilEndOfTransaction;


+(id)platformImplementationProtocol;
-(BOOL)_compactStorageIncludeOriginals:(BOOL)arg0 desiredFreeSpace:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_fixupIdentity:(id)arg0 fileURL:(id)arg1 data:(id)arg2 error:(*id)arg3 ;
// -(BOOL)_recoverFromCrashWithRecoveryHandler:(id)arg0 error:(unk)arg1  ;
-(BOOL)addDeleteFlagToFileAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkIsEmpty;
-(BOOL)closeWithError:(*id)arg0 ;
-(BOOL)commitFileWithIdentity:(id)arg0 error:(*id)arg1 ;
-(BOOL)compactStorage:(*id)arg0 ;
-(BOOL)compactStorageIncludeOriginals:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)deleteFileWithIdentity:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteFileWithIdentity:(id)arg0 includingOriginal:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)discardAllRetainedFileURLsWithError:(*id)arg0 ;
-(BOOL)discardUncommittedFileWithIdentity:(id)arg0 error:(*id)arg1 ;
// -(BOOL)doWrite:(id)arg0 error:(unk)arg1  ;
-(BOOL)hasCrashMarker;
-(BOOL)hasFileWithIdentity:(id)arg0 ;
// -(BOOL)openWithRecoveryHandler:(id)arg0 error:(unk)arg1  ;
-(BOOL)releaseFileURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetWithError:(*id)arg0 ;
-(BOOL)storeData:(id)arg0 identity:(id)arg1 isOriginal:(BOOL)arg2 needsCommit:(*BOOL)arg3 error:(*id)arg4 ;
-(BOOL)storeFileAtURL:(id)arg0 identity:(id)arg1 isOriginal:(BOOL)arg2 moveIfPossible:(BOOL)arg3 needsCommit:(*BOOL)arg4 error:(*id)arg5 ;
-(BOOL)storeUnretainedData:(id)arg0 identity:(id)arg1 isOriginal:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)storeUnretainedFileAtURL:(id)arg0 identity:(id)arg1 isOriginal:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)tryToFreeDiskSpace:(NSUInteger)arg0 actuallyFreedSpace:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)tryToFreeDiskSpace:(NSUInteger)arg0 actuallyFreedSpace:(*NSUInteger)arg1 includeOriginals:(BOOL)arg2 error:(*id)arg3 ;
-(NSUInteger)countOfUncommittedFiles;
-(id)_markerURLForTrackAllStoresAndDeletes;
-(id)fileEnumerator;
-(id)fileEnumeratorIncludingPropertiesForKeys:(id)arg0 errorHandler:(id)arg1 ;
-(id)initWithBaseURL:(id)arg0 ;
-(id)retainFileURLForIdentity:(id)arg0 resourceType:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)_addIdentityToUncommittedFiles:(id)arg0 ;
-(void)_removeIdentityFromUncommittedFiles:(id)arg0 ;
-(void)checkFileSizeForIdentity:(id)arg0 ;
-(void)doRead:(id)arg0 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif