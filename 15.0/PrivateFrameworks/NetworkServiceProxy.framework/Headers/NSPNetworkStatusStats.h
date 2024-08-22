// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPNETWORKSTATUSSTATS_H
#define NSPNETWORKSTATUSSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPNetworkStatusStats : NSPProxyAnalytics

@property (nonatomic) NSUInteger cellStatusActiveCount; // ivar: _cellStatusActiveCount
@property (nonatomic) NSUInteger cellStatusBlockedCount; // ivar: _cellStatusBlockedCount
@property (nonatomic) NSUInteger cellStatusDisabledCount; // ivar: _cellStatusDisabledCount
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType
@property (nonatomic) NSUInteger wifiStatusActiveCount; // ivar: _wifiStatusActiveCount
@property (nonatomic) NSUInteger wifiStatusBlockedCount; // ivar: _wifiStatusBlockedCount
@property (nonatomic) NSUInteger wifiStatusDisabledCount; // ivar: _wifiStatusDisabledCount
@property (nonatomic) NSUInteger wiredStatusActiveCount; // ivar: _wiredStatusActiveCount
@property (nonatomic) NSUInteger wiredStatusBlockedCount; // ivar: _wiredStatusBlockedCount
@property (nonatomic) NSUInteger wiredStatusDisabledCount; // ivar: _wiredStatusDisabledCount


-(id)analyticsDict;
-(id)eventName;


@end


#endif