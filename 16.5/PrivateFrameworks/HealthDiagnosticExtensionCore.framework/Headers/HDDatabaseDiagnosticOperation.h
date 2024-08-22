// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATABASEDIAGNOSTICOPERATION_H
#define HDDATABASEDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDDatabaseDiagnosticOperation : HDDiagnosticOperation



-(BOOL)_captureUnprotectedDatabaseAtURL:(id)arg0 protectedDatabaseAtURL:(id)arg1 reason:(id)arg2 ;
-(BOOL)_reportStatisticsForUnprotectedDatabaseAtURL:(id)arg0 protectedDatabaseAtURL:(id)arg1 ;
-(BOOL)allowsSensitiveAttachments;
-(id)reportFilename;
-(void)_reportJournalStatisticsInSubdirectory:(id)arg0 profileDirectory:(id)arg1 ;
-(void)_reportMedicalIDStatistics;
-(void)_reportMissingSourceOrderEntriesWithUnprotectedDatabase:(id)arg0 protectedDatabase:(id)arg1 ;
-(void)_reportSizeForHFDAtURL:(id)arg0 ;
-(void)run;


@end


#endif