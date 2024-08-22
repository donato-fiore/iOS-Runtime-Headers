// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPHISTORYFILECONTAINERPERSISTER_H
#define MSPHISTORYFILECONTAINERPERSISTER_H



#import "MSPFileContainerPersister.h"

@interface MSPHistoryFileContainerPersister : MSPFileContainerPersister



-(BOOL)getSnapshot:(*id)arg0 data:(*id)arg1 forNewContents:(id)arg2 edits:(id)arg3 appliedToOldContents:(id)arg4 error:(*id)arg5 ;
-(BOOL)getSnapshot:(*id)arg0 data:(*id)arg1 mergingCurrentState:(id)arg2 withState:(id)arg3 mergeOptions:(id)arg4 error:(*id)arg5 ;
-(id)stateSnapshotFromData:(id)arg0 ;


@end


#endif