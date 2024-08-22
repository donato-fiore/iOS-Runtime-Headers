// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPIPADDRESSLOCATIONPREFERENCESTATS_H
#define NSPIPADDRESSLOCATIONPREFERENCESTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPIPAddressLocationPreferenceStats : NSPProxyAnalytics

@property (nonatomic) NSUInteger locationPreference; // ivar: _locationPreference
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType


-(id)analyticsDict;
-(id)eventName;


@end


#endif