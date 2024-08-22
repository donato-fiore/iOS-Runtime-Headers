// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGEUSERSESSION_H
#define WIFIUSAGEUSERSESSION_H



#import "WiFiUsageSession.h"

@interface WiFiUsageUserSession : WiFiUsageSession {
    BOOL _userInactive;
    BOOL _deviceLocked;
}




-(id)initWithInterfaceName:(id)arg0 ;
-(id)metricName;
-(void)displayStateDidChange:(BOOL)arg0 ;
-(void)linkQualityDidChange:(id)arg0 ;
-(void)lockStateDidChange:(BOOL)arg0 ;


@end


#endif