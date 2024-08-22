// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDMOVEWRITER_H
#define FPDMOVEWRITER_H

@class NSMutableArray, NSMutableDictionary, NSError, NSObservation, NSArray, FPMoveInfo;
@protocol FPCancellable, FPDMoveWriterExecutor, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDActionOperationQueue.h"
#import "FPDCoordinator.h"
#import "FPDMoveOperation.h"

@interface FPDMoveWriter : NSObject <FPCancellable>

 {
    FPDActionOperationQueue *_moveQueue;
    id<FPDMoveWriterExecutor> *_providerWriter;
    FPDCoordinator *_preemptiveDownloadCoordinator;
    NSMutableArray *_sourceFoldersStack;
    NSMutableArray *_destinationFoldersStack;
    NSMutableDictionary *_errorsByRoot;
    NSMutableDictionary *_progressByRoot;
    id *_waitedOnID;
    id *_waiterBlock;
    BOOL _cancelled;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSUInteger _logSection;
    NSObservation *_importProgressObservation;
    NSArray *_accessTokens;
}


@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) FPDCoordinator *coordinator; // ivar: _coordinator
@property (retain, nonatomic) NSObject<FPDMoveWriterExecutor> *diskWriter; // ivar: _diskWriter
@property (readonly, nonatomic) FPMoveInfo *info; // ivar: _info
@property (copy, nonatomic) id *itemCompletionBlock; // ivar: _itemCompletionBlock
@property (copy, nonatomic) id *itemCopyProgressBlock; // ivar: _itemCopyProgressBlock
@property (readonly, weak, nonatomic) FPDMoveOperation *operation; // ivar: _operation
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *rootCompletionBlock; // ivar: _rootCompletionBlock
@property (copy, nonatomic) id *rootCreatedBlock; // ivar: _rootCreatedBlock


+(id)acquireDownloadSlotForItem:(id)arg0 ;
+(void)initialize;
+(void)releaseDownloadSlot:(id)arg0 ;
-(id)defaultExecutor;
-(id)initWithOperation:(id)arg0 queue:(id)arg1 ;
-(id)waitForResultOfSourceID:(id)arg0 root:(id)arg1 error:(*id)arg2 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_handleCompletionOfAtom:(id)arg0 source:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(void)_handleFolder:(id)arg0 completion:(id)arg1 ;
-(void)_handleItem:(id)arg0 completion:(id)arg1 ;
-(void)_handlePostFolder:(id)arg0 completion:(id)arg1 ;
-(void)_performCopyOrMoveOfFolder:(id)arg0 completion:(id)arg1 ;
-(void)_performCopyOrMoveOfItem:(id)arg0 completion:(id)arg1 ;
-(void)_removeRoot:(id)arg0 ;
-(void)_step;
-(void)_unblockWaiterForSourceID:(id)arg0 withResult:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)cancelRoot:(id)arg0 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)handleAtom:(id)arg0 completion:(id)arg1 ;
-(void)handleCreationForAtom:(id)arg0 result:(id)arg1 ;
-(void)performCopyOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)performCopyOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 useDiskWriter:(BOOL)arg5 completion:(id)arg6 ;
-(void)performCreateFolder:(id)arg0 inside:(id)arg1 as:(id)arg2 useDiskWriter:(BOOL)arg3 completion:(id)arg4 ;
-(void)performMoveOfFolder:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 atomically:(BOOL)arg5 useDiskWriter:(BOOL)arg6 completion:(id)arg7 ;
-(void)performMoveOfItem:(id)arg0 to:(id)arg1 as:(id)arg2 sourceMaterializeOption:(NSUInteger)arg3 targetMaterializeOption:(NSUInteger)arg4 useDiskWriter:(BOOL)arg5 completion:(id)arg6 ;
-(void)setProgress:(id)arg0 forRoot:(id)arg1 ;
-(void)start;
-(void)startDownloadOfItem:(id)arg0 shouldMaterializeRecursively:(BOOL)arg1 ;


@end


#endif