// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSEARCHSUGGESTIONENTITY_H
#define SPSEARCHSUGGESTIONENTITY_H

@class NSString;


#import "SPSearchEntity.h"

@interface SPSearchSuggestionEntity : SPSearchEntity {
    NSString *_searchString;
    NSString *_queryString;
    NSString *_spotlightQueryString;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 spotlightQueryString:(id)arg1 preferredBundleIDs:(id)arg2 ;
-(id)queryString;
-(id)searchString;
-(id)spotlightQueryString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateSearchString:(id)arg0 ;


@end


#endif