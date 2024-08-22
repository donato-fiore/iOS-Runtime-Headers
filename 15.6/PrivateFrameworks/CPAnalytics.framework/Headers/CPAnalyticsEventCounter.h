// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSEVENTCOUNTER_H
#define CPANALYTICSEVENTCOUNTER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CPAnalyticsEventMatcher.h"

@interface CPAnalyticsEventCounter : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSString *countKey; // ivar: _countKey
@property (readonly, nonatomic) CPAnalyticsEventMatcher *matcher; // ivar: _matcher
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)_validateAndParseEventName:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithEventName:(id)arg0 ;
-(id)initWithName:(id)arg0 matcher:(id)arg1 ;
-(void)countEvent:(id)arg0 ;


@end


#endif