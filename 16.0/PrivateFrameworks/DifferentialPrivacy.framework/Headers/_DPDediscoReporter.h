// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPDEDISCOREPORTER_H
#define _DPDEDISCOREPORTER_H

@class DPReportGenerator;



@interface _DPDediscoReporter : DPReportGenerator



+(id)filterNonConformingDediscoRecordsFrom:(id)arg0 ;
-(BOOL)_isCommSafetyEnabled;
-(BOOL)markSubmitted:(id)arg0 storage:(id)arg1 ;
-(BOOL)reportDediscoKeys:(id)arg0 storage:(id)arg1 ;
-(BOOL)reportDediscoRecords:(id)arg0 ;
-(id)_commSafetyAccountCountryCode;
-(id)_commSafetyAgeGroup;
-(id)defaultRecordsWithValues:(id)arg0 key:(id)arg1 properties:(id)arg2 ;
-(id)directlyUploadDediscoRecords:(id)arg0 forKey:(id)arg1 keyProperties:(id)arg2 storage:(id)arg3 ;
-(id)extendCommSafetyKey:(id)arg0 ;
-(id)keysWithDefaultValues;
-(id)reportToDediscoRecords:(id)arg0 forKey:(id)arg1 keyProperties:(id)arg2 storage:(id)arg3 ;
-(void)scheduleMaintenanceWithName:(id)arg0 database:(id)arg1 ;


@end


#endif