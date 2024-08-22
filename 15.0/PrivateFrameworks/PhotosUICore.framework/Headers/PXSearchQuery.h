// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSEARCHQUERY_H
#define PXSEARCHQUERY_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXSearchQueryOptions.h"

@interface PXSearchQuery : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL hasSearchText;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSString *localizedQueryString;
@property (readonly, copy, nonatomic) PXSearchQueryOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *priorityAssetUUID; // ivar: _priorityAssetUUID
@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, nonatomic) NSUInteger searchTermCount;
@property (readonly, copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly, copy, nonatomic) NSArray *searchTokens; // ivar: _searchTokens
@property (readonly, nonatomic) BOOL supportsRecentSearch;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToRecentSearchQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSearchText:(id)arg0 searchTokens:(id)arg1 options:(id)arg2 ;


@end


#endif