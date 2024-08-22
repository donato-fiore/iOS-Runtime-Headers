// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSAMPLESYNCENTITY_H
#define HDSAMPLESYNCENTITY_H



#import "HDDataSyncEntity.h"

@interface HDSampleSyncEntity : HDDataSyncEntity



+(BOOL)supportsSpeculativeNanoSyncChanges;
+(Class)_syncedSampleTypeClass;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_predicateForSampleAgeInSyncSession:(id)arg0 sampleTypeClass:(Class)arg1 ;
+(id)_predicateForSyncSession:(id)arg0 ;


@end


#endif