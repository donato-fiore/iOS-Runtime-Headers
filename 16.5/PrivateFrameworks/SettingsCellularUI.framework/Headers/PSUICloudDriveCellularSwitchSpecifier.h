// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICLOUDDRIVECELLULARSWITCHSPECIFIER_H
#define PSUICLOUDDRIVECELLULARSWITCHSPECIFIER_H

@class PSAppDataUsagePolicySwitchSpecifier, ACAccountStore;



@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    ACAccountStore *_accountStore;
}




+(id)accountStore;
-(BOOL)shouldShowCloudDrive;
-(id)appleAccount;
-(id)cellularUsagePolicy;
-(id)cloudDriveGroupSpecifier;
-(id)getLogger;
-(id)initDefault;
-(id)initWithAppleAccountStore:(id)arg0 ;
-(void)setCellularUsagePolicy:(id)arg0 ;


@end


#endif