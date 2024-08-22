// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSTATICSYNCEXPORTTASK_H
#define HDSTATICSYNCEXPORTTASK_H

@class NSProgress, NSMutableSet, _HKArchiveCreator, NSString, NSURL;
@protocol HDSyncSessionDelegate, OS_dispatch_queue;


#import "HDStaticSyncTask.h"

@interface HDStaticSyncExportTask : HDStaticSyncTask <HDSyncSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_exportQueue;
    BOOL _exportToDisk;
    NSUInteger _batchSize;
    NSProgress *_exportProgress;
    NSProgress *_syncSessionProgress;
    NSMutableSet *_syncEntityIdentifiersWithProcessedChanges;
    _HKArchiveCreator *_archiveCreator;
    NSUInteger _changesetCount;
    NSUInteger _archiveCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *exportDirectoryURL; // ivar: _exportDirectoryURL
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)syncSession:(id)arg0 didEndTransactionWithError:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 options:(NSUInteger)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(NSUInteger)arg4 ;
-(id)runWithCompletion:(id)arg0 ;
-(void)syncSession:(id)arg0 didFinishSuccessfully:(BOOL)arg1 error:(id)arg2 ;
-(void)syncSession:(id)arg0 sendChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSessionWillBegin:(id)arg0 ;


@end


#endif