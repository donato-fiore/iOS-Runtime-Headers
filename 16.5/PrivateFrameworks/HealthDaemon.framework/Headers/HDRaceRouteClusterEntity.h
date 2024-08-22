// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDRACEROUTECLUSTERENTITY_H
#define HDRACEROUTECLUSTERENTITY_H

@class NSString;
@protocol HDNanoSyncEntity;


#import "HDHealthEntity.h"

@interface HDRaceRouteClusterEntity : HDHealthEntity <HDNanoSyncEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)enumerateRoutePointsForClusterUUID:(id)arg0 workoutSelection:(NSUInteger)arg1 timestampAnchor:(CGFloat)arg2 limit:(NSUInteger)arg3 profile:(id)arg4 error:(*id)arg5 dataHandler:(id)arg6 ;
+(BOOL)generateSyncObjectsForSession:(id)arg0 syncAnchorRange:(struct HDSyncAnchorRange )arg1 profile:(id)arg2 messageHandler:(id)arg3 error:(*id)arg4 ;
+(BOOL)pruneRaceRouteClustersWithEligibleEntities:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(BOOL)supportsSyncStore:(id)arg0 ;
+(BOOL)unitTest_deleteAllClusterAndBackingDataInTransaction:(id)arg0 error:(*id)arg1 ;
+(NSInteger)nextSyncAnchorWithSession:(id)arg0 startSyncAnchor:(NSInteger)arg1 profile:(id)arg2 error:(*id)arg3 ;
+(NSInteger)protectionClass;
+(NSInteger)receiveSyncObjects:(id)arg0 version:(struct ? )arg1 syncStore:(id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(NSUInteger)supportedNanoSyncDirectionsForProtocolVersion:(int)arg0 ;
+(id)databaseTable;
+(id)decodeSyncObjectWithData:(id)arg0 ;
+(id)entityForClusterUUID:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
+(id)foreignKeys;
+(id)insertCodableCluster:(id)arg0 syncProvenance:(NSInteger)arg1 syncIdentity:(NSInteger)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(id)insertOrUpdateRacingCluster:(id)arg0 routeSnapshot:(id)arg1 syncIdentity:(NSInteger)arg2 transaction:(id)arg3 error:(*id)arg4 ;
+(id)privateSubEntities;
+(id)propertyForSyncAnchor;
+(id)propertyForSyncProvenance;
+(id)raceRouteClustersForActivityType:(NSUInteger)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg0 ;
+(id)syncEntityIdentifier;
+(id)uniquedColumns;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif