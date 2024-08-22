// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICLOUDBACKUPCELLULARSWITCHSPECIFIER_H
#define PSUICLOUDBACKUPCELLULARSWITCHSPECIFIER_H

@class PSAppDataUsagePolicySwitchSpecifier, ACAccountStore, MBManager;



@interface PSUICloudBackupCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    ACAccountStore *_accountStore;
    MBManager *_backupManager;
}




+(id)accountStore;
-(BOOL)shouldShowCloudBackupCarrier;
-(id)appleAccount;
-(id)cellularUsagePolicy;
-(id)cloudBackupGroupSpecifier;
-(id)getLogger;
-(id)init;
-(id)initWithAppleAccountStore:(id)arg0 ;
-(void)setCellularUsagePolicy:(id)arg0 ;


@end


#endif