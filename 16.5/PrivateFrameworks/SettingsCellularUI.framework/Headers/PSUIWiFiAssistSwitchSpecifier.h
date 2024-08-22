// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIWIFIASSISTSWITCHSPECIFIER_H
#define PSUIWIFIASSISTSWITCHSPECIFIER_H

@class PSAppDataUsagePolicySwitchSpecifier;



@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    *__CTServerConnection _serverConnection;
}




+(BOOL)shouldShowWifiAssist;
+(id)wifiAssistGroupSpecifier;
-(NSUInteger)dataUsage;
-(id)cellularUsagePolicy;
-(id)getLogger;
-(id)initDefault;
-(void)dealloc;
-(void)setCellularUsagePolicy:(id)arg0 ;


@end


#endif