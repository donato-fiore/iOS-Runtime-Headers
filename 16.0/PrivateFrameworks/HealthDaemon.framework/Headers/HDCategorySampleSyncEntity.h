// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCATEGORYSAMPLESYNCENTITY_H
#define HDCATEGORYSAMPLESYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDCategorySampleSyncEntity : HDSampleSyncEntity



+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 collection:(id)arg1 ;
+(id)_predicateForCategoryTypesToSync;
+(id)_predicateForSyncSession:(id)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif