// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATABASEDIAGNOSTICOPERATION_H
#define HDDATABASEDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDDatabaseDiagnosticOperation : HDDiagnosticOperation



-(BOOL)_captureUnprotectedDatabaseAtURL:(id)arg0 protectedDatabaseAtURL:(id)arg1 reason:(id)arg2 ;
-(BOOL)_reportStatisticsForUnprotectedDatabaseAtURL:(id)arg0 protectedDatabaseAtURL:(id)arg1 ;
-(BOOL)allowsSensitiveAttachments;
-(NSInteger)_reportCountOfObjectsForEntityClass:(Class)arg0 database:(id)arg1 ;
-(NSInteger)_reportCountOfObjectsInTable:(id)arg0 database:(id)arg1 ;
-(id)reportFilename;
-(void)_checkSchemaVersionForDatabase:(id)arg0 currentSchema:(int)arg1 futureSchema:(int)arg2 ;
-(void)_reportCountsForDatabase:(id)arg0 entityClasses:(id)arg1 ;
-(void)_reportIntegrityForDatabase:(id)arg0 ;
-(void)_reportJournalStatisticsInSubdirectory:(id)arg0 profileDirectory:(id)arg1 ;
-(void)_reportMedicalIDStatistics;
-(void)_reportMissingSourceOrderEntriesWithUnprotectedDatabase:(id)arg0 protectedDatabase:(id)arg1 ;
-(void)_reportSizeForHFDAtURL:(id)arg0 ;
-(void)_reportStatsForDatabaseAtURL:(id)arg0 ;
-(void)_verifyPermissionsForFileAtURL:(id)arg0 ;
-(void)run;


@end


#endif