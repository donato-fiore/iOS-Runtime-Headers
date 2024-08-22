// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPFILECONTAINERPERSISTER_H
#define MSPFILECONTAINERPERSISTER_H

@class NSURL;
@protocol OS_dispatch_queue;


#import "MSPContainerPersister.h"

@interface MSPFileContainerPersister : MSPContainerPersister

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // ivar: _ioQueue
@property (readonly, nonatomic) NSURL *persistenceFileURL; // ivar: _persistenceFileURL


-(BOOL)getSnapshot:(*id)arg0 data:(*id)arg1 forNewContents:(id)arg2 edits:(id)arg3 appliedToOldContents:(id)arg4 error:(*id)arg5 ;
-(BOOL)getSnapshot:(*id)arg0 data:(*id)arg1 mergingCurrentState:(id)arg2 withState:(id)arg3 mergeOptions:(id)arg4 error:(*id)arg5 ;
// -(id)commitByCreatingStateSnapshotAndDataWithCreationHandler:(id)arg0 error:(unk)arg1  ;
-(id)init;
-(id)initWithPersistenceFileAtURL:(id)arg0 ;
-(id)newStateSnapshot;
-(id)stateSnapshotFromData:(id)arg0 ;
-(void)commitByMergingWithStateSnapshot:(id)arg0 mergeOptions:(id)arg1 completion:(id)arg2 ;
-(void)commitEditWithNewContents:(id)arg0 edits:(id)arg1 appliedToOldContents:(id)arg2 completion:(id)arg3 ;
-(void)eraseWithCompletion:(id)arg0 ;
-(void)fetchStateSnapshotWithCompletion:(id)arg0 ;


@end


#endif