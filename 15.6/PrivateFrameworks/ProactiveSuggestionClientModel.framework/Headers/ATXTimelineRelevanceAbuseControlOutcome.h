// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXTIMELINERELEVANCEABUSECONTROLOUTCOME_H
#define ATXTIMELINERELEVANCEABUSECONTROLOUTCOME_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXInfoSuggestion.h"

@interface ATXTimelineRelevanceAbuseControlOutcome : NSObject

@property (readonly, nonatomic) NSInteger abuseControlOutcome; // ivar: _abuseControlOutcome
@property (readonly, nonatomic) ATXInfoSuggestion *suggestion; // ivar: _suggestion
@property (readonly, nonatomic) NSString *suggestionId; // ivar: _suggestionId
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(id)descriptionForOutcome:(NSInteger)arg0 ;
+(id)outcomeWithSuggestion:(id)arg0 timestamp:(CGFloat)arg1 abuseControlOutcome:(NSInteger)arg2 ;
+(id)outcomeWithSuggestionId:(id)arg0 timestamp:(CGFloat)arg1 abuseControlOutcome:(NSInteger)arg2 ;
-(id)init;
-(id)initWithSuggestion:(id)arg0 suggestionId:(id)arg1 timestamp:(CGFloat)arg2 abuseControlOutcome:(NSInteger)arg3 ;
-(id)initWithSuggestion:(id)arg0 timestamp:(CGFloat)arg1 abuseControlOutcome:(NSInteger)arg2 ;


@end


#endif