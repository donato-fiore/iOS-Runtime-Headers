// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADVITEXTLOOKUPREQUEST_H
#define MADVITEXTLOOKUPREQUEST_H

@class NSString, NSArray, NSNumber;


#import "MADRequest.h"

@interface MADVITextLookupRequest : MADRequest

@property (copy, nonatomic) NSString *hintDomain; // ivar: _hintDomain
@property (copy, nonatomic) NSArray *normalizedBoundingBoxes; // ivar: _normalizedBoundingBoxes
@property (copy, nonatomic) NSNumber *queryID; // ivar: _queryID
@property (readonly, copy, nonatomic) NSString *queryTerm; // ivar: _queryTerm
@property (copy, nonatomic) NSString *surroundingText; // ivar: _surroundingText
@property (copy, nonatomic) NSNumber *uiScale; // ivar: _uiScale


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueryTerm:(id)arg0 ;
-(id)initWithQueryTerm:(id)arg0 domain:(id)arg1 textContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif