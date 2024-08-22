// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPPRIOREPORTER_H
#define _DPPRIOREPORTER_H

@class DPReportGenerator;



@interface _DPPrioReporter : DPReportGenerator



-(id)defaultRecordsWithValues:(id)arg0 key:(id)arg1 properties:(id)arg2 ;
-(id)jsonReportFromObject:(id)arg0 ;
-(id)keysWithDefaultValues;
-(id)reportPrioKeys:(id)arg0 storage:(id)arg1 ;
-(id)reportPrioRecords:(id)arg0 ;
-(id)reportToPrioRecords:(id)arg0 forKey:(id)arg1 parameters:(id)arg2 storage:(id)arg3 ;
-(void)deleteRecordsForKey:(id)arg0 storage:(id)arg1 ;
-(void)scheduleMaintenanceWithName:(id)arg0 database:(id)arg1 ;


@end


#endif