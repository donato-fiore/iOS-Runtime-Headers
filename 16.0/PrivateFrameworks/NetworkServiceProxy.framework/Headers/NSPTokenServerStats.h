// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPTOKENSERVERSTATS_H
#define NSPTOKENSERVERSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPTokenServerStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType; // ivar: _tierType
@property (retain, nonatomic) NSString *tokenServerAddress; // ivar: _tokenServerAddress


-(id)analyticsDict;
-(id)eventName;


@end


#endif