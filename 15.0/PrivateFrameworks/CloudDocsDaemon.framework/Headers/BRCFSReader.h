// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFSREADER_H
#define BRCFSREADER_H

@class NSMutableSet, NSString;
@protocol BRCModule, BRCSuspendable, BRCFSEventsDelegate, OS_dispatch_source, OS_dispatch_group;


#import "BRCFSSchedulerBase.h"
#import "BRCCountedSet.h"
#import "BRCAsyncDirectoryEnumerator.h"
#import "BRCFairSource.h"
#import "brc_task_tracker.h"

@interface BRCFSReader : BRCFSSchedulerBase <BRCModule, BRCSuspendable, BRCFSEventsDelegate>

 {
    BRCCountedSet *_coordinatedReaders;
    BOOL _readerCountReachedMax;
    BRCAsyncDirectoryEnumerator *_currentScan;
    NSMutableSet *_lostSet;
    BRCFairSource *_lostScanSource;
    NSObject<OS_dispatch_source> *_lostScanDelay;
    NSUInteger _lostScanDelaySection;
    BOOL _resumed;
    NSUInteger _lostItemCountUnderUnknownParent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *lostScanGroup; // ivar: _lostScanGroup
@property (readonly) Class superclass;
@property (readonly, nonatomic) brc_task_tracker *taskTracker; // ivar: _taskTracker


-(BOOL)_createSharedZoneIfNecessaryWithLookup:(id)arg0 ;
-(BOOL)_fetchNextLostItemID:(*id)arg0 parentID:(*id)arg1 appLibraryRowID:(*id)arg2 tooManyScans:(*BOOL)arg3 stamp:(*NSInteger)arg4 ;
-(BOOL)_slowScanDirectoryAtPath:(id)arg0 ;
-(BOOL)canRetryJobWithID:(id)arg0 ;
-(BOOL)canScheduleMoreJobs;
-(BOOL)readUnderCoordinationWithLookup:(id)arg0 ;
-(BOOL)startReadCoordinationInAppLibrary:(id)arg0 ;
-(BOOL)thumbnailChangedForItem:(id)arg0 relpath:(id)arg1 url:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateLookupAfterHandlingPathMatchWithFSRoot:(*id)arg0 relpath:(*id)arg1 ;
-(NSUInteger)_backoffBeforeProcessingLostItemWithStamp:(NSUInteger)arg0 appLibrary:(id)arg1 ;
-(NSUInteger)_readCoordinationCount;
-(char)needsLookupReloadAfterHandlingCrossZoneMoveWithItem:(id)arg0 relpath:(id)arg1 ;
-(id)_nextLostItemIDWithBackoff:(*NSInteger)arg0 appLibrary:(*id)arg1 now:(NSInteger)arg2 ;
-(id)descriptionForItem:(id)arg0 context:(id)arg1 ;
-(id)initWithAccountSession:(id)arg0 ;
-(id)itemForCreatedDocumentsDirectory:(id)arg0 appLibrary:(id)arg1 path:(id)arg2 ;
-(id)lookupAndReadItemUnderCoordinationAtURL:(id)arg0 ;
-(unsigned int)recoverAndReportMissingJobs;
-(void)_attemptSchedulingCoordinatedReadForItem:(id)arg0 path:(id)arg1 ;
-(void)_cancelScan;
-(void)_close;
-(void)_delayJobID:(id)arg0 by:(CGFloat)arg1 ;
-(void)_didResolvedDocumentID:(unsigned int)arg0 fileID:(NSUInteger)arg1 zone:(id)arg2 ;
-(void)_finishCurrentRelpathScan;
-(void)_finishedScanWithError:(int)arg0 ;
-(void)_fseventOnDocument:(id)arg0 flags:(unsigned int)arg1 options:(NSUInteger)arg2 item:(id)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5 ;
-(void)_lostScanSchedule;
-(void)_processDeadItem:(id)arg0 ;
-(void)_processLostItem:(id)arg0 ;
-(void)_processLostItem:(id)arg0 resolvedToPath:(id)arg1 ;
-(void)_recoverFromUnknownParentLoopAtPath:(id)arg0 ;
-(void)_refaultItem:(id)arg0 withFaultPath:(id)arg1 ;
-(void)_resolveDocumentID:(unsigned int)arg0 zone:(id)arg1 ;
-(void)_scanDirectory:(id)arg0 atPath:(id)arg1 lookup:(id)arg2 ;
-(void)_scanDone:(id)arg0 atPath:(id)arg1 lookup:(id)arg2 ;
-(void)_scheduleCoordinatedReadForItem:(id)arg0 path:(id)arg1 ;
-(void)_scheduleReadJobWithID:(id)arg0 ;
-(void)_startScanOfRegularAppLibrary:(id)arg0 ;
-(void)_startScanOfRelpath:(id)arg0 ;
-(void)cancel;
-(void)createReadingJobForItem:(id)arg0 state:(int)arg1 ;
-(void)dealloc;
-(void)deleteReadingJobForItem:(id)arg0 ;
-(void)endReadCoordinationInAppLibrary:(id)arg0 ;
-(void)fseventAtPath:(id)arg0 flags:(unsigned int)arg1 ;
-(void)fseventAtPath:(id)arg0 flags:(unsigned int)arg1 options:(NSUInteger)arg2 unresolvedLastPathComponent:(id)arg3 ;
-(void)fseventAtPath:(id)arg0 flags:(unsigned int)arg1 unresolvedLastPathComponent:(id)arg2 ;
-(void)fseventOnAlias:(id)arg0 flags:(unsigned int)arg1 lookup:(id)arg2 ;
-(void)fseventOnContainer:(id)arg0 flags:(unsigned int)arg1 ;
-(void)fseventOnDeadPath:(id)arg0 item:(id)arg1 ;
-(void)fseventOnDirectory:(id)arg0 flags:(unsigned int)arg1 lookup:(id)arg2 ;
-(void)fseventOnDocument:(id)arg0 flags:(unsigned int)arg1 lookup:(id)arg2 ;
-(void)fseventOnDocument:(id)arg0 flags:(unsigned int)arg1 options:(NSUInteger)arg2 lookup:(id)arg3 ;
-(void)fseventOnDocument:(id)arg0 flags:(unsigned int)arg1 options:(NSUInteger)arg2 lookup:(id)arg3 unresolvedLastPathComponent:(id)arg4 ;
-(void)fseventOnRoot:(id)arg0 flags:(unsigned int)arg1 ;
-(void)fseventOnSymlink:(id)arg0 flags:(unsigned int)arg1 lookup:(id)arg2 ;
-(void)fseventOnURL:(id)arg0 dbFlags:(unsigned int)arg1 ;
-(void)fseventRecursiveAtRoot:(id)arg0 withReason:(id)arg1 ;
-(void)readUnderCoordinationAtURL:(id)arg0 ;
-(void)reset;
-(void)resume;
-(void)scanContainerDocumentsIfNeeded:(id)arg0 ;
-(void)schedule;
-(void)scheduleAppLibraryForLostScan:(id)arg0 ;
-(void)setState:(int)arg0 forItem:(id)arg1 ;
-(void)suspend;
-(void)unscheduleAppLibraryForLostScan:(id)arg0 ;


@end


#endif