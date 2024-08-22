// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCORRELATIONSAMPLESYNCENTITY_H
#define HDCORRELATIONSAMPLESYNCENTITY_H



#import "HDSampleSyncEntity.h"

@interface HDCorrelationSampleSyncEntity : HDSampleSyncEntity



+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 ;
+(id)_predicateForSyncSession:(id)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif