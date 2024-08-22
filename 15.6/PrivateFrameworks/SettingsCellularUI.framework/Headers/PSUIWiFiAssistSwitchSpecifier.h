// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIWIFIASSISTSWITCHSPECIFIER_H
#define PSUIWIFIASSISTSWITCHSPECIFIER_H

@class PSAppDataUsagePolicySwitchSpecifier, Logger;



@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier {
    *__CTServerConnection _serverConnection;
    Logger *_logger;
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