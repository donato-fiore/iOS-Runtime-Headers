// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPANALYTICSEVENTMATCHER_H
#define CPANALYTICSEVENTMATCHER_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CPAnalyticsEventMatcher : NSObject

@property (readonly, nonatomic) NSArray *conditionalChecks; // ivar: _conditionalChecks
@property (readonly, nonatomic) NSString *eventKeyToMatch; // ivar: _eventKeyToMatch
@property (readonly, nonatomic) NSDictionary *eventPropertiesToMatch; // ivar: _eventPropertiesToMatch


+(id)eventMatcherWithConfiguration:(id)arg0 ;
+(id)eventMatcherWithEventName:(id)arg0 ;
+(id)eventMatcherWithEventName:(id)arg0 properties:(id)arg1 ;
-(BOOL)doesMatch:(id)arg0 ;
-(id)_validateAndParseConditionalChecks:(id)arg0 ;
-(id)_validateAndParseEventKey:(id)arg0 ;
-(id)_validateAndParseEventProperties:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;


@end


#endif