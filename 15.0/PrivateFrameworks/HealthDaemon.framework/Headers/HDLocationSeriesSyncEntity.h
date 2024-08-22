// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDLOCATIONSERIESSYNCENTITY_H
#define HDLOCATIONSERIESSYNCENTITY_H

@class NSString;
@protocol HDNanoSyncEntity;


#import "HDSampleSyncEntity.h"

@interface HDLocationSeriesSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSpeculativeNanoSyncChanges;
+(Class)_syncedSampleTypeClass;
+(Class)healthEntityClass;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 ;
+(id)_predicateForSyncSession:(id)arg0 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;


@end


#endif