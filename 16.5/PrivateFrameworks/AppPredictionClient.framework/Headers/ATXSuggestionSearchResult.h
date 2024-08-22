// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTIONSEARCHRESULT_H
#define ATXSUGGESTIONSEARCHRESULT_H

@class SFSearchResult, NSUUID, NSString, ATXProactiveSuggestion;
@protocol ATXSuggestionSearchResultProtocol, NSSecureCoding, NSCopying;



@interface ATXSuggestionSearchResult : SFSearchResult <ATXSuggestionSearchResultProtocol, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSUUID *blendingModelUICacheUpdateUUID; // ivar: _blendingModelUICacheUpdateUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ATXProactiveSuggestion *proactiveSuggestion; // ivar: _proactiveSuggestion
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setRequestedTopic:(id)arg0 ;


@end


#endif