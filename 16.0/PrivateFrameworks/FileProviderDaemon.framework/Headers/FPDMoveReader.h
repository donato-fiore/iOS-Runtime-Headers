// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDMOVEREADER_H
#define FPDMOVEREADER_H

@class FPMoveInfo, NSMutableSet, NSError;
@protocol FPCancellable, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "FPDMoveOperation.h"
#import "FPDActionOperationQueue.h"
#import "FPDMoveWriter.h"

@interface FPDMoveReader : NSObject <FPCancellable>

 {
    FPDMoveOperation *_operation;
    FPMoveInfo *_info;
    FPDActionOperationQueue *_moveQueue;
    FPDMoveWriter *_writer;
    BOOL _startedPreflight;
    BOOL _finishedPreflight;
    BOOL _willMaterializeTargetFolder;
    BOOL _isTargetFolderMaterialized;
    NSUInteger _depth;
    NSMutableSet *_cancelledRoots;
    BOOL __cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _logSection;
    NSObject<OS_dispatch_semaphore> *_clientUnblockSema;
}


@property (copy, nonatomic) id *errorBlock; // ivar: _errorBlock
@property (copy, nonatomic) id *preflightCompletionBlock; // ivar: _preflightCompletionBlock
@property (copy, nonatomic) id *rootPreflightCompletionBlock; // ivar: _rootPreflightCompletionBlock
@property (copy, nonatomic) id *startDownloadBlock; // ivar: _startDownloadBlock


+(BOOL)_hasDiskWriterSupportForDomain:(id)arg0 ;
-(BOOL)_enqueueItem:(id)arg0 forRoot:(id)arg1 atomically:(BOOL)arg2 useDiskWriter:(BOOL)arg3 ;
-(BOOL)_isCancelled;
-(BOOL)_isRootCancelled:(id)arg0 ;
-(BOOL)_isSingleMoveForRoot:(id)arg0 ;
-(BOOL)_isSinglePkgCopyForRoot:(id)arg0 ;
-(BOOL)_shouldCheckFileSystemBitsForRoot:(id)arg0 targetFolderURL:(id)arg1 ;
-(BOOL)_shouldCheckSpaceForRoot:(id)arg0 targetFolderURL:(id)arg1 ;
-(BOOL)_shouldUseDiskWriterToPerformMoveForItem:(id)arg0 ;
-(NSInteger)_fileSizeBitsSupportAtPath:(id)arg0 ;
-(id)_getTargetFolderFor:(id)arg0 root:(id)arg1 error:(*id)arg2 ;
-(id)_iteratorForRoot:(id)arg0 enforceFPItem:(BOOL)arg1 error:(*id)arg2 ;
-(id)_targetNameForSource:(id)arg0 ;
-(id)init;
-(id)initWithMoveWriter:(id)arg0 operation:(id)arg1 queue:(id)arg2 ;
-(void)_bailOutOfRoot:(id)arg0 ;
-(void)_enqueueAtomsForRoot:(id)arg0 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_getSpaceForWriteSize:(NSInteger)arg0 atTargetPath:(id)arg1 completion:(id)arg2 ;
-(void)_progressComputationPreflight:(id)arg0 completion:(id)arg1 ;
-(void)_run;
-(void)_runWithDownloadedTarget:(id)arg0 ;
-(void)_t_unblock;
-(void)_t_waitForUnblock;
-(void)cancel;
-(void)cancelRoot:(id)arg0 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)start;
-(void)verifyTargetURL:(id)arg0 ;


@end


#endif