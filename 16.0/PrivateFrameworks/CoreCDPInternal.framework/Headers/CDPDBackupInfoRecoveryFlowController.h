// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDBACKUPINFORECOVERYFLOWCONTROLLER_H
#define CDPDBACKUPINFORECOVERYFLOWCONTROLLER_H

@class NSArray;
@protocol CDPDBackupRecoveryErrorProvider, CDPDBackupRecoveryResultsParser;


#import "CDPDRecoveryFlowController.h"

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController

@property (retain, nonatomic) NSObject<CDPDBackupRecoveryErrorProvider> *errorProvider; // ivar: _errorProvider
@property (retain, nonatomic) NSArray *recoveryRecords; // ivar: _recoveryRecords
@property (retain, nonatomic) NSObject<CDPDBackupRecoveryResultsParser> *resultParser; // ivar: _resultParser


-(BOOL)secretValidator:(id)arg0 shouldContinueValidationAfterError:(id)arg1 ;
-(id)_recoveryListFromDevices:(id)arg0 ;
-(void)_updateRecordRecoveryStatusForRecordDictionary:(id)arg0 ;
-(void)beginRecoveryWithCompletion:(id)arg0 ;
-(void)retrieveInflatedDevices:(id)arg0 ;
-(void)secretValidator:(id)arg0 didFailRecoveryWithErrors:(id)arg1 completion:(id)arg2 ;


@end


#endif