// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHACTIVESEARCH_H
#define PXSEARCHACTIVESEARCH_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PXSearchActiveSearch : NSObject

@property (readonly, nonatomic) BOOL hasSearchText;
@property (readonly, nonatomic) BOOL hasSearchTokens;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSUInteger libraryScope; // ivar: _libraryScope
@property (retain, nonatomic) NSString *priorityAssetUUID; // ivar: _priorityAssetUUID
@property (retain, nonatomic) NSArray *representedObjects; // ivar: _representedObjects
@property (readonly, nonatomic) NSUInteger searchTermCount;
@property (readonly, nonatomic) NSString *searchTermsString;
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly, nonatomic) NSUInteger searchTokenCount;
@property (retain, nonatomic) NSArray *searchTokens; // ivar: _searchTokens


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSearchText:(id)arg0 searchTokens:(id)arg1 libraryScope:(NSUInteger)arg2 ;
-(void)_generateRelatedSearchObjects;


@end


#endif