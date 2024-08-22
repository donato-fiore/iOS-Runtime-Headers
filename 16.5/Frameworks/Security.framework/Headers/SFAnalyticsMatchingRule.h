// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFANALYTICSMATCHINGRULE_H
#define SFANALYTICSMATCHINGRULE_H

@class NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "SECSFARule.h"

@interface SFAnalyticsMatchingRule : NSObject

@property (retain) NSString *eventName; // ivar: _eventName
@property (retain) NSDate *lastMatch; // ivar: _lastMatch
@property (retain) NSDictionary *matchingDictionary; // ivar: _matchingDictionary
@property (retain) SECSFARule *rule; // ivar: _rule


-(BOOL)isSubsetMatch:(id)arg0 target:(id)arg1 ;
-(BOOL)matchAttributes:(id)arg0 logger:(id)arg1 ;
-(BOOL)shouldRatelimit:(id)arg0 ;
-(BOOL)valueMatch:(id)arg0 target:(id)arg1 ;
-(id)initWithSFARule:(id)arg0 logger:(id)arg1 ;
-(unsigned int)doAction:(id)arg0 logger:(id)arg1 ;


@end


#endif