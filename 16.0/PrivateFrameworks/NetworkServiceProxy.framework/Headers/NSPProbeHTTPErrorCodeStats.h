// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPPROBEHTTPERRORCODESTATS_H
#define NSPPROBEHTTPERRORCODESTATS_H

@class NSNumber, NSString;


#import "NSPProxyAnalytics.h"

@interface NSPProbeHTTPErrorCodeStats : NSPProxyAnalytics

@property (retain, nonatomic) NSNumber *HTTPErrorCode; // ivar: _HTTPErrorCode
@property (nonatomic) BOOL directPath; // ivar: _directPath
@property (retain, nonatomic) NSString *interfaceType; // ivar: _interfaceType


-(id)analyticsDict;
-(id)eventName;


@end


#endif