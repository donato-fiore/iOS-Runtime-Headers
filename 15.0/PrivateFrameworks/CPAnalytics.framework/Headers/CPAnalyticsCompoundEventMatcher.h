// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPANALYTICSCOMPOUNDEVENTMATCHER_H
#define CPANALYTICSCOMPOUNDEVENTMATCHER_H

@class NSArray;


#import "CPAnalyticsEventMatcher.h"

@interface CPAnalyticsCompoundEventMatcher : CPAnalyticsEventMatcher

@property (readonly, copy, nonatomic) NSArray *subEventMatchers; // ivar: _subEventMatchers
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)andEventMatcherWithSubEventMatchers:(id)arg0 ;
+(id)notEventMatcherWithSubEventMatcher:(id)arg0 ;
+(id)orEventMatcherWithSubEventMatchers:(id)arg0 ;
-(BOOL)doesMatch:(id)arg0 ;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 subEventMatchers:(id)arg1 ;


@end


#endif