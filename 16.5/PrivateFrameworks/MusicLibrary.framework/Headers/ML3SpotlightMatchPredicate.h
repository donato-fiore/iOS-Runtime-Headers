// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3SPOTLIGHTMATCHPREDICATE_H
#define ML3SPOTLIGHTMATCHPREDICATE_H

@class NSArray, NSString;


#import "ML3Predicate.h"
#import "ML3SpotlightNameCache.h"

@interface ML3SpotlightMatchPredicate : ML3Predicate {
    ML3SpotlightNameCache *_names;
    NSArray *_searchProperties;
}


@property (readonly, nonatomic) NSString *searchString; // ivar: _searchString


+(id)predicateWithProperties:(id)arg0 searchString:(id)arg1 ;
-(id)SQLJoinClausesForClass:(Class)arg0 ;
-(id)initWithSearchString:(id)arg0 matchingProperties:(id)arg1 ;
-(id)spotlightPredicate;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)dealloc;


@end


#endif