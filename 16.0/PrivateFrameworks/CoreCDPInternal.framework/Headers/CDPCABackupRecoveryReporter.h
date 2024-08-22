// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPCABACKUPRECOVERYREPORTER_H
#define CDPCABACKUPRECOVERYREPORTER_H



#import "CDPCAReporter.h"

@interface CDPCABackupRecoveryReporter : CDPCAReporter {
    NSUInteger _attemptedMethods;
    NSUInteger _availableMethods;
    NSUInteger _escrowDeviceCount;
    NSUInteger _joinMethod;
}


@property (readonly, nonatomic) NSUInteger joinMethod;


-(id)initWithContext:(id)arg0 ;
-(void)backupRecoveryDidCancel;
-(void)backupRecoveryDidFailWithError:(id)arg0 ;
-(void)backupRecoveryDidReset;
-(void)backupRecoveryDidSucceed;
-(void)backupRecoveryDidSucceedWithoutLocalSecret;
-(void)backupRecoverySetAttemptedMethod:(NSUInteger)arg0 ;
-(void)backupRecoverySetJoinFromBundleID:(id)arg0 ;


@end


#endif