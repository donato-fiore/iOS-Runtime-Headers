// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSEARCHRESULT_H
#define ATXSEARCHRESULT_H

@class SFSearchResult, ATXProactiveSuggestion;
@protocol NSSecureCoding;


#import "ATXResponse.h"
#import "ATXScoredPrediction.h"

@interface ATXSearchResult : SFSearchResult <NSSecureCoding>



@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion; // ivar: _proactiveSuggestion
@property (readonly, nonatomic) ATXResponse *response; // ivar: _response
@property (readonly, nonatomic) ATXScoredPrediction *scoredBundleId; // ivar: _scoredBundleId


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScoredBundleId:(id)arg0 response:(id)arg1 proactiveSuggestion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif