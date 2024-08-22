// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDNANOSYNCDIAGNOSTICOPERATION_H
#define HDNANOSYNCDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDNanoSyncDiagnosticOperation : HDDiagnosticOperation



-(NSInteger)_countOfMessagesForDeviceIdentifier:(id)arg0 description:(id)arg1 predicateSQL:(id)arg2 date:(id)arg3 database:(id)arg4 ;
-(id)_reportDetailsForDevice:(id)arg0 database:(id)arg1 ;
-(id)_sortedPairedDevices;
-(id)nanoSyncDatabaseURL;
-(id)reportFilename;
-(void)_collectNanoSyncMessageDatabase;
-(void)_reportIDSSummaryForDeviceIdentifier:(id)arg0 database:(id)arg1 ;
-(void)_reportMostRecentMessageDateWithDeviceIdentifier:(id)arg0 description:(id)arg1 field:(id)arg2 predicateSQL:(id)arg3 database:(id)arg4 ;
-(void)_reportMostRecentMessageErrorsWithDeviceIdentifier:(id)arg0 database:(id)arg1 ;
-(void)_reportQuickSwitchSummaryWithDevicesByPairingID:(id)arg0 ;
-(void)_reportSummaryWithDevices:(id)arg0 ;
-(void)run;


@end


#endif