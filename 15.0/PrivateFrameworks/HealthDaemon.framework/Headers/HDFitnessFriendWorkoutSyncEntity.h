// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFITNESSFRIENDWORKOUTSYNCENTITY_H
#define HDFITNESSFRIENDWORKOUTSYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDFitnessFriendWorkoutSyncEntity : HDSampleSyncEntity



+(BOOL)supportsSyncStore:(id)arg0 ;
+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)syncEntityIdentifier;


@end


#endif