// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCDASAMPLESYNCENTITY_H
#define HDCDASAMPLESYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDCDASampleSyncEntity : HDSampleSyncEntity



+(BOOL)supportsSpeculativeNanoSyncChanges;
+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 collection:(id)arg1 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif