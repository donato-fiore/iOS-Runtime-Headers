// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSLEEPSCHEDULESYNCENTITY_H
#define HDSLEEPSCHEDULESYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDSleepScheduleSyncEntity : HDSampleSyncEntity



+(BOOL)supportsDateBasedSharding;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 collection:(id)arg1 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif