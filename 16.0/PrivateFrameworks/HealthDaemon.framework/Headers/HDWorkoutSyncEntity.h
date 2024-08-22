// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTSYNCENTITY_H
#define HDWORKOUTSYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDWorkoutSyncEntity : HDSampleSyncEntity



+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 collection:(id)arg1 ;
+(id)_predicateForSampleAgeInSyncSession:(id)arg0 sampleTypeClass:(Class)arg1 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif