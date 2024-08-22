// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPOUTAGEDURATIONSTATS_H
#define NSPOUTAGEDURATIONSTATS_H



#import "NSPProxyAnalytics.h"

@interface NSPOutageDurationStats : NSPProxyAnalytics

@property (nonatomic) NSUInteger outageDurationSec; // ivar: _outageDurationSec
@property (nonatomic) NSUInteger outageType; // ivar: _outageType


-(id)analyticsDict;
-(id)eventName;


@end


#endif