// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELINKSESSION_H
#define WIFIUSAGELINKSESSION_H

@class NSDate;


#import "WiFiUsageSession.h"

@interface WiFiUsageLinkSession : WiFiUsageSession {
    BOOL _linkUp;
    NSDate *_lastLinkTest;
    NSDate *_lastFaultIndicationTime;
}




-(id)initWithInterfaceName:(id)arg0 ;
-(id)metricName;
-(void)applicationStateDidChange:(id)arg0 withAttributes:(id)arg1 ;
-(void)displayStateDidChange:(BOOL)arg0 ;
-(void)faultEventDetected:(NSUInteger)arg0 ;
-(void)linkStateDidChange:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 ;
-(void)lockStateDidChange:(BOOL)arg0 ;
-(void)performLinkTestFor:(id)arg0 ;
-(void)processDHCPChanges:(id)arg0 ;
-(void)processDriverAvailability:(id)arg0 available:(NSUInteger)arg1 version:(NSUInteger)arg2 flags:(NSUInteger)arg3 eventID:(NSUInteger)arg4 reason:(NSUInteger)arg5 subReason:(NSUInteger)arg6 minorReason:(NSUInteger)arg7 reasonString:(id)arg8 ;
-(void)processIPv4Changes:(id)arg0 ;
-(void)processIPv6Changes:(id)arg0 ;
-(void)rangingCompleted;
-(void)systemWakeStateDidChange:(BOOL)arg0 wokenByWiFi:(BOOL)arg1 ;


@end


#endif