// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATASYNCENTITY_H
#define HDDATASYNCENTITY_H

@class NSString;
@protocol HDSyncEntity;

#import <Foundation/Foundation.h>


@interface HDDataSyncEntity : NSObject <HDSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_insertObjectsFromCodableObjectCollection:(id)arg0 syncStore:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)supportsDateBasedSharding;
+(Class)healthEntityClass;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 startSyncAnchor:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)receiveSyncObjects:(id)arg0 version:(struct ? )arg1 syncStore:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)_basePruningPredicateForDate:(id)arg0 profile:(id)arg1 ;
+(id)_objectWithCodable:(id)arg0 collection:(id)arg1 ;
+(id)_predicateForSyncSession:(id)arg0 ;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)objectsFromCodableObjectsInCollection:(id)arg0 ;
+(id)pruneSyncedObjectsThroughAnchor:(id)arg0 limit:(NSUInteger)arg1 nowDate:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(id)unitTest_predicateForSyncSession:(id)arg0 ;
+(id)unitTest_pruningPredicateForDate:(id)arg0 profile:(id)arg1 ;


@end


#endif