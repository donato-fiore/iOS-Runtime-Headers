// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICLOUDDRIVECELLULARSWITCHSPECIFIER_H
#define PSUICLOUDDRIVECELLULARSWITCHSPECIFIER_H

@class PSAppDataUsagePolicySwitchSpecifier;



@interface PSUICloudDriveCellularSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier



+(BOOL)shouldShowCloudDrive;
+(id)_appleAccount;
+(id)accountStore;
+(id)cloudDriveGroupSpecifier;
-(id)cellularUsagePolicy;
-(id)initDefault;
-(void)setCellularUsagePolicy:(id)arg0 ;


@end


#endif