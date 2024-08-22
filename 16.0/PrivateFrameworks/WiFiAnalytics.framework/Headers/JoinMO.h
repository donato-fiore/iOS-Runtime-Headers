// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JOINMO_H
#define JOINMO_H

@class NSManagedObject, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "BSSMO.h"

@interface JoinMO : NSManagedObject

@property (nonatomic) short autojoinPhase;
@property (retain, nonatomic) BSSMO *bss;
@property (nonatomic) short cca;
@property (retain, nonatomic) NSObject *channelsScanned;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) int dhcpLatencyMs;
@property (nonatomic) int dhcpLeaseMins;
@property (nonatomic) BOOL dhcpSuccess;
@property (nonatomic) int ipv4Addr;
@property (nonatomic) int ipv4routerAddr;
@property (nonatomic) BOOL isAutojoin;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *routerMAC;
@property (nonatomic) short rssi;
@property (nonatomic) short snr;
@property (nonatomic) int status;
@property (nonatomic) int subreason;
@property (nonatomic) BOOL success;


+(NSUInteger)joinCount:(id)arg0 bssid:(id)arg1 maxAgeInDays:(NSUInteger)arg2 success:(BOOL)arg3 moc:(id)arg4 ;
+(id)earliestJoinDate:(id)arg0 moc:(id)arg1 ;
+(id)entityName;
+(id)fetchRequest;
+(id)generateInstance:(id)arg0 ;
+(id)mostRecentJoin:(id)arg0 ssid:(id)arg1 moc:(id)arg2 ;
+(id)mostRecentJoinsWithBatchSize:(NSUInteger)arg0 bssid:(id)arg1 ssid:(id)arg2 moc:(id)arg3 ;
+(id)ssidsWithRouterMAC:(id)arg0 moc:(id)arg1 ;


@end


#endif