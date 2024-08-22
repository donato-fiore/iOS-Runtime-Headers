// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDLOGGER_H
#define AWDLOGGER_H

@class AWDServerConnection;


#import "CHLogger.h"

@interface AWDLogger : CHLogger

@property (retain, nonatomic) AWDServerConnection *awdServer; // ivar: _awdServer


+(id)instance;
-(id)init;
-(void)bootstrapGizmo:(NSUInteger)arg0 ;
-(void)callAddedWithNilUuid:(NSUInteger)arg0 withCallStatus:(NSUInteger)arg1 ;
-(void)commCenterMigrationResult:(BOOL)arg0 withMigratedCallCount:(NSUInteger)arg1 ;
-(void)databaseMigrationResult:(BOOL)arg0 oldVersion:(NSInteger)arg1 newVersion:(NSInteger)arg2 ;
-(void)databaseSaveError:(NSInteger)arg0 withTableName:(id)arg1 ;
-(void)deleteAll:(NSUInteger)arg0 ;
-(void)entitlementRejection:(int)arg0 ;
-(void)gizmoDatabaseMigrationFailure;
-(void)submitMetric:(id)arg0 withId:(unsigned int)arg1 ;
-(void)syncFailure:(unsigned int)arg0 ;
-(void)syncSuccess:(NSUInteger)arg0 withDownloadRecordCount:(NSUInteger)arg1 ;
-(void)uninitializedDatabaseSave;


@end


#endif