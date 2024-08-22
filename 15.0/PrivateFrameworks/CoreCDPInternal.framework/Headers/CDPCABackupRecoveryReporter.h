// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPCABACKUPRECOVERYREPORTER_H
#define CDPCABACKUPRECOVERYREPORTER_H



#import "CDPCAReporter.h"

@interface CDPCABackupRecoveryReporter : CDPCAReporter



-(id)init;
-(void)backupRecoveryDidCancel;
-(void)backupRecoveryDidFailWithError:(id)arg0 ;
-(void)backupRecoveryDidReset;
-(void)backupRecoveryDidSucceed;
-(void)backupRecoveryDidSucceedWithoutLocalSecret;


@end


#endif