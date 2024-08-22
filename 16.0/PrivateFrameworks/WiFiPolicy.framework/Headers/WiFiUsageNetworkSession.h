// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGENETWORKSESSION_H
#define WIFIUSAGENETWORKSESSION_H

@class NSDate, NSMutableSet;


#import "WiFiUsageSession.h"
#import "WiFiUsageNetworkDetails.h"

@interface WiFiUsageNetworkSession : WiFiUsageSession {
    WiFiUsageNetworkDetails *_lastNetworkDetails;
    BOOL _linkUp;
    NSDate *_lastLinkUpTime;
    NSDate *_lastLinkDownTime;
    CGFloat _networkUsageDuration;
    BOOL _dnuEnabled;
    NSMutableSet *_neighborBssList;
    NSMutableSet *_otherBssList;
}




-(BOOL)isSessionHarvestable;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)metricName;
-(void)displayStateDidChange:(BOOL)arg0 ;
-(void)joinStateDidChange:(id)arg0 withReason:(NSUInteger)arg1 lastDisconnectReason:(NSInteger)arg2 lastJoinFailure:(NSInteger)arg3 andNetworkDetails:(id)arg4 ;
-(void)linkStateDidChange:(BOOL)arg0 isInvoluntary:(BOOL)arg1 linkChangeReason:(NSInteger)arg2 linkChangeSubreason:(NSInteger)arg3 withNetworkDetails:(id)arg4 ;
-(void)scanningStateDidChange:(BOOL)arg0 client:(NSUInteger)arg1 neighborBSS:(id)arg2 otherBSS:(id)arg3 ;
-(void)sessionDidEnd;
-(void)sessionDidStart;


@end


#endif