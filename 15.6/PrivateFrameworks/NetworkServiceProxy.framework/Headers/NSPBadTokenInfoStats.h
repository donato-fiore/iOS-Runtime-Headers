// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPBADTOKENINFOSTATS_H
#define NSPBADTOKENINFOSTATS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPBadTokenInfoStats : NSPProxyAnalytics

@property (nonatomic) NSUInteger configAgeHours; // ivar: _configAgeHours
@property (retain, nonatomic) NSString *configTag; // ivar: _configTag
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType
@property (retain, nonatomic) NSString *tokenProxy; // ivar: _tokenProxy


-(id)analyticsDict;
-(id)eventName;


@end


#endif