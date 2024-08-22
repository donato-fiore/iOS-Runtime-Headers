// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPSWITCHEGRESSPROXYSTATS_H
#define NSPSWITCHEGRESSPROXYSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPSwitchEgressProxyStats : NSPProxyAnalytics

@property (nonatomic) BOOL fallbackProxy; // ivar: _fallbackProxy
@property (nonatomic) BOOL primaryProxy; // ivar: _primaryProxy
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType
@property (retain, nonatomic) NSString *vendor; // ivar: _vendor


-(id)analyticsDict;
-(id)eventName;


@end


#endif