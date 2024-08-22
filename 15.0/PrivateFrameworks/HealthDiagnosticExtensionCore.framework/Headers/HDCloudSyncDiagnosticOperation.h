// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCDIAGNOSTICOPERATION_H
#define HDCLOUDSYNCDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDCloudSyncDiagnosticOperation : HDDiagnosticOperation



-(BOOL)_reportCloudSyncStatusWithHealthStore:(id)arg0 ;
-(id)reportFilename;
-(void)_reportCloudSyncDescriptionWithHealthStore:(id)arg0 ;
-(void)_reportCloudSyncErrors;
-(void)_reportCloudSyncJournalStats;
-(void)_reportCloudSyncKeyValuesWithDatabase:(id)arg0 ;
-(void)_reportCloudSyncStoreDetailsWithDatabase:(id)arg0 ;
-(void)_reportCloudSyncStoreDetailsWithSyncProvenance:(NSInteger)arg0 storeUUID:(id)arg1 database:(id)arg2 ;
-(void)run;


@end


#endif