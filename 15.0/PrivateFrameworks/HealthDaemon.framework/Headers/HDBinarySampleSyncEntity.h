// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDBINARYSAMPLESYNCENTITY_H
#define HDBINARYSAMPLESYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDBinarySampleSyncEntity : HDSampleSyncEntity



+(BOOL)_insertObjectsFromCodableObjectCollection:(id)arg0 syncStore:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif