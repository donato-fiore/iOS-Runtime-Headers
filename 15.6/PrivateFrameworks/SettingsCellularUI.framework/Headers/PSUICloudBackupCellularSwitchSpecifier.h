// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICLOUDBACKUPCELLULARSWITCHSPECIFIER_H
#define PSUICLOUDBACKUPCELLULARSWITCHSPECIFIER_H

@class PSAppDataUsagePolicySwitchSpecifier, Logger, MBManager;



@interface PSUICloudBackupCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    Logger *_logger;
    MBManager *_backupManager;
}




+(BOOL)_backupOnCellularCarrierBundleKeyEnabledCarrierBundleCache:(id)arg0 context:(id)arg1 ;
+(BOOL)shouldShowCloudBackupCarrierBundleCache:(id)arg0 context:(id)arg1 capabilitiesCache:(id)arg2 ;
+(id)_accountStore;
+(id)_appleAccount;
+(id)cloudBackupGroupSpecifier;
-(id)cellularUsagePolicy;
-(id)getLogger;
-(id)init;
-(void)setCellularUsagePolicy:(id)arg0 ;


@end


#endif