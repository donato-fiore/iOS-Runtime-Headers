// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATAEXTERNALSYNCIDENTIFIERENTITY_H
#define HDDATAEXTERNALSYNCIDENTIFIERENTITY_H



#import "HDHealthEntity.h"

@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity



+(BOOL)enumerateValuesWithProfile:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
+(BOOL)insertSyncIdentifierWithProfile:(id)arg0 database:(id)arg1 objectID:(NSInteger)arg2 localSourceID:(NSInteger)arg3 externalSyncObjectCode:(NSInteger)arg4 syncIdentifier:(id)arg5 syncVersion:(id)arg6 deleted:(BOOL)arg7 errorOut:(*id)arg8 ;
+(BOOL)populateSyncInfoForLocalSourceID:(NSInteger)arg0 externalSyncObjectCode:(NSInteger)arg1 syncIdentifier:(id)arg2 deleted:(BOOL)arg3 database:(id)arg4 objectIDOut:(*id)arg5 errorOut:(*id)arg6 ;
+(BOOL)populateSyncInfoForObjectID:(NSInteger)arg0 database:(id)arg1 localSourceIDOut:(*NSInteger)arg2 externalSyncObjectCodeOut:(*NSInteger)arg3 syncIdentifierOut:(*id)arg4 syncVersionOut:(*id)arg5 deletedOut:(*BOOL)arg6 errorOut:(*id)arg7 ;
+(NSInteger)protectionClass;
+(id)databaseTable;
+(id)foreignKeys;
+(id)indices;
+(struct ? *)columnDefinitionsWithCount:(*NSUInteger)arg0 ;


@end


#endif