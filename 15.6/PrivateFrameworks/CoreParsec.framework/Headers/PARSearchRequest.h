// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PARSEARCHREQUEST_H
#define PARSEARCHREQUEST_H

@class NSArray, SFSearchSuggestion, NSString, NSDictionary;
@protocol NSSecureCoding;


#import "PARRequest.h"

@interface PARSearchRequest : PARRequest <NSSecureCoding>



@property (retain, nonatomic) NSArray *completionCacheSuggestions; // ivar: _completionCacheSuggestions
@property (retain, nonatomic) SFSearchSuggestion *engagedSuggestion; // ivar: _engagedSuggestion
@property (nonatomic) NSInteger exp; // ivar: _exp
@property (copy, nonatomic) NSString *l2version; // ivar: _l2version
@property (copy, nonatomic) NSString *l3version; // ivar: _l3version
@property (copy, nonatomic) NSArray *localContextualSuggestions; // ivar: _localContextualSuggestions
@property (copy, nonatomic) NSString *previouslyEngagedQuery; // ivar: _previouslyEngagedQuery
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (copy, nonatomic) NSDictionary *topics; // ivar: _topics
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)nwActivityLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif