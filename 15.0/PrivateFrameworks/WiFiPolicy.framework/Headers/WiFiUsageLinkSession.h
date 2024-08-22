// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)performLinkTest;


@end


#endif