// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGEDEVICESESSION_H
#define WIFIUSAGEDEVICESESSION_H



#import "WiFiUsageSession.h"

@interface WiFiUsageDeviceSession : WiFiUsageSession {
    BOOL _firstDisplayOn;
}




-(id)initWithInterfaceName:(id)arg0 ;
-(id)metricName;
-(void)displayStateDidChange:(BOOL)arg0 ;
-(void)systemWakeStateDidChange:(BOOL)arg0 wokenByWiFi:(BOOL)arg1 ;


@end


#endif