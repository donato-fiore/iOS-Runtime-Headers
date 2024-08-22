// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFITNESSFRIENDACTIVITYSNAPSHOTSYNCENTITY_H
#define HDFITNESSFRIENDACTIVITYSNAPSHOTSYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDFitnessFriendActivitySnapshotSyncEntity : HDSampleSyncEntity



+(BOOL)supportsSyncStore:(id)arg0 ;
+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)syncEntityIdentifier;


@end


#endif