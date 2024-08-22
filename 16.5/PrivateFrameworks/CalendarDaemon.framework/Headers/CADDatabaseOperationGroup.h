// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADDATABASEOPERATIONGROUP_H
#define CADDATABASEOPERATIONGROUP_H

@protocol CADDatabaseInterface;


#import "CADOperationGroup.h"

@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>





+(BOOL)requiresEventAccess;
-(?)_deleteObjectsdatabase;
-(?)_importEvents:(?)arg0 data:(?)arg1 intoCalendarWithID:(?)arg2 inDatabase:(?)arg3 optionsMask:(?)arg4 batchSize:(?)arg5 outCalendarObjectIDoutError;
-(?)_insert:(?)arg0 delete:(?)arg1 update:(?)arg2 databaseerror;
-(?)_insertObjectsWithTemporaryObjectIDs:(?)arg0 databaseerror;
-(?)_updatePropertiesAndRelations:(?)arg0 databaseinsertedObjectMap;
-(?)insert:(?)arg0 deletes:(?)arg1 updates:(?)arg2 insertedObjectIDMapinDatabase;
-(?)preflightAccessForDeletes:(?)arg0 updatesinDatabase;
-(?)preflightObjectIDinDatabase;
-(BOOL)_CADDatabaseCanModifyCalendarDatabase;
-(int)findDatabaseForObject:(id)arg0 withUpdates:(id)arg1 personas:(*id)arg2 accounts:(*id)arg3 nextTempDBID:(*int)arg4 ;
-(struct __CFArray *)_copyToIntCFArrayRef:(id)arg0 ;
-(struct __CFSet *)_copyToIntCFSetRef:(id)arg0 ;
-(void)CADDatabaseCanModifyCalendarDatabase:(id)arg0 ;
-(void)CADDatabaseCommitDeletes:(id)arg0 updatesAndInserts:(id)arg1 andFetchChangesSinceTimestamp:(id)arg2 withReply:(id)arg3 ;
-(void)CADDatabaseExportICSDataForCalendar:(id)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)CADDatabaseExportICSDataForCalendarItems:(id)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)CADDatabaseFetchChangedObjectIDs:(id)arg0 ;
-(void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg0 insideObject:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetChangesSinceSequenceToken:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetDefaultAlarmOffsetForAllDay:(BOOL)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetSequenceToken:(id)arg0 ;
-(void)CADDatabaseGetUUID:(id)arg0 ;
-(void)CADDatabaseImportEvents:(id)arg0 fromICSData:(id)arg1 intoCalendarsWithIDs:(id)arg2 optionsMask:(NSUInteger)arg3 batchSize:(int)arg4 reply:(id)arg5 ;
-(void)CADDatabaseLastConfirmedSplashScreenVersion:(id)arg0 ;
-(void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceToken:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseMarkIndividualChangesConsumed:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseMigrateSubscribedCalendar:(id)arg0 toSource:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseRebuildOccurrenceCacheWithReply:(id)arg0 ;
-(void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg0 reply:(id)arg1 ;
-(void)CADDatabaseUnregisterForDetailedChangeTracking:(id)arg0 ;


@end


#endif