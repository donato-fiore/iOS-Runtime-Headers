// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADDATABASEOPERATIONGROUP_H
#define CADDATABASEOPERATIONGROUP_H

@protocol CADDatabaseInterface;


#import "CADOperationGroup.h"

@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(?)_deleteObjectsdatabase;
-(?)_insert:(?)arg0 delete:(?)arg1 update:(?)arg2 databaseerror;
-(?)_insertObjectsWithTemporaryObjectIDs:(?)arg0 databaseerror;
-(?)_updatePropertiesAndRelations:(?)arg0 databaseinsertedObjectMap;
-(BOOL)_CADDatabaseCanModifyCalendarDatabase;
-(id)_importEvents:(id)arg0 data:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(NSUInteger)arg3 batchSize:(int)arg4 outError:(*int)arg5 ;
-(int)preflightAccessForDeletes:(id)arg0 updates:(id)arg1 ;
-(int)preflightObjectID:(id)arg0 ;
-(struct __CFArray *)_copyToIntCFArrayRef:(id)arg0 ;
-(struct __CFSet *)_copyToIntCFSetRef:(id)arg0 ;
-(void)CADDatabaseCanModifyCalendarDatabase:(id)arg0 ;
-(void)CADDatabaseExportICSDataForCalendar:(id)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)CADDatabaseExportICSDataForCalendarItems:(id)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(NSInteger)arg0 reply:(id)arg1 ;
-(void)CADDatabaseFetchObjectChangesForEntityTypes:(id)arg0 insideObject:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(CGFloat)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetNextAssignableColorWithReply:(id)arg0 ;
-(void)CADDatabaseGetSequenceNumber:(id)arg0 ;
-(void)CADDatabaseGetUUID:(id)arg0 ;
-(void)CADDatabaseImportEvents:(id)arg0 fromICSData:(id)arg1 intoCalendarsWithIDs:(id)arg2 optionsMask:(NSUInteger)arg3 batchSize:(int)arg4 reply:(id)arg5 ;
-(void)CADDatabaseInsert:(id)arg0 delete:(id)arg1 update:(id)arg2 andCommit:(id)arg3 ;
-(void)CADDatabaseLastConfirmedSplashScreenVersion:(id)arg0 ;
-(void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(NSInteger)arg0 reply:(id)arg1 ;
-(void)CADDatabaseMarkIndividualChangesConsumed:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseMigrateSubscribedCalendar:(id)arg0 toSource:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseRebuildOccurrenceCacheWithReply:(id)arg0 ;
-(void)CADDatabaseRegisterForDetailedChangeTrackingInSource:(id)arg0 reply:(id)arg1 ;
-(void)CADDatabaseRollbackWithReply:(id)arg0 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg0 reply:(id)arg1 ;
-(void)CADDatabaseUnregisterForDetailedChangeTracking:(id)arg0 ;


@end


#endif