// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONUIFEEDBACKRESULT_H
#define ATXPROACTIVESUGGESTIONUIFEEDBACKRESULT_H

@class NSArray;
@protocol NSSecureCoding;


#import "ATXProactiveSuggestionFeedbackResult.h"
#import "ATXProactiveSuggestionUIFeedbackSession.h"

@interface ATXProactiveSuggestionUIFeedbackResult : ATXProactiveSuggestionFeedbackResult <NSSecureCoding>



@property (readonly, nonatomic) NSArray *engagedSuggestions; // ivar: _engagedSuggestions
@property (readonly, nonatomic) NSInteger engagementType; // ivar: _engagementType
@property (readonly, nonatomic) NSArray *rejectedSuggestions; // ivar: _rejectedSuggestions
@property (readonly, nonatomic) ATXProactiveSuggestionUIFeedbackSession *session; // ivar: _session
@property (readonly, nonatomic) NSArray *shownSuggestions; // ivar: _shownSuggestions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionUIFeedbackResult:(id)arg0 ;
-(NSInteger)uiEngagementTypeFromShownSuggestions:(id)arg0 engagedSuggestions:(id)arg1 rejectedSuggestions:(id)arg2 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEngagementType:(NSInteger)arg0 shownSuggestions:(id)arg1 engagedSuggestions:(id)arg2 rejectedSuggestions:(id)arg3 session:(id)arg4 consumerSubType:(unsigned char)arg5 clientCacheUpdate:(id)arg6 uiCacheUpdate:(id)arg7 context:(id)arg8 ;
-(id)initWithShownSuggestions:(id)arg0 engagedSuggestions:(id)arg1 rejectedSuggestions:(id)arg2 session:(id)arg3 consumerSubType:(unsigned char)arg4 clientCacheUpdate:(id)arg5 uiCacheUpdate:(id)arg6 context:(id)arg7 ;
-(id)suggestionExecutableObjectListFromSuggestions:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif