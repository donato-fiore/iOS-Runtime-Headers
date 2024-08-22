// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSIGROUPRESULT_H
#define PSIGROUPRESULT_H

@class NSString, NSMutableArray, NSMutableSet, NSArray;
@protocol NSCopying, OS_dispatch_queue, PSIGroupResultDelegate;

#import <Foundation/Foundation.h>


@interface PSIGroupResult : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    NSMutableArray *_collectionResults;
    BOOL _didFetchOwningContentString;
    NSMutableSet *_sceneGroupsIds;
}


@property (retain, nonatomic) *__CFArray assetIds; // ivar: _assetIds
@property (readonly, nonatomic) NSUInteger assetMatchCount;
@property (readonly, weak) NSArray *assetUUIDs;
@property (retain, nonatomic) *__CFArray collectionIds; // ivar: _collectionIds
@property (readonly, nonatomic) NSUInteger collectionMatchCount;
@property (readonly, weak) NSArray *collectionResults;
@property (readonly, nonatomic) BOOL containsFilterSearchTokens;
@property (readonly, nonatomic) NSArray *contentStrings;
@property (copy, nonatomic) NSArray *contentStringsOverride; // ivar: _contentStringsOverride
@property (nonatomic) short dedupingSkippedCategory; // ivar: _dedupingSkippedCategory
@property (weak, nonatomic) NSObject<PSIGroupResultDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly, nonatomic) NSArray *groupsMatchRanges;
@property (readonly, nonatomic) NSArray *groupsSearchTokens;
@property (readonly, nonatomic) BOOL hasDateFilterFromImplicitToken;
@property (readonly, nonatomic) BOOL isDateFilterPartiallyFromFullSearchText;
@property (nonatomic) BOOL isMergedOCRResult; // ivar: _isMergedOCRResult
@property (readonly, nonatomic) NSArray *lookupIdentifiers;
@property (readonly, nonatomic) NSUInteger matchCount;
@property (readonly, weak) NSString *owningContentString;
@property (readonly) NSMutableSet *sceneGroupsIds;
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) BOOL selectedForOCRCompletion; // ivar: _selectedForOCRCompletion
@property (copy, nonatomic) NSString *transientToken; // ivar: _transientToken


-(BOOL)exclusivelyContainsOCRGroups;
-(BOOL)isContentStringTextSearchableAtIndex:(NSInteger)arg0 ;
-(BOOL)isMatchedByIdentifierAtIndex:(NSInteger)arg0 ;
-(NSInteger)categoryAtIndex:(NSInteger)arg0 ;
-(NSUInteger)_calculateOCRGroupsCount;
-(NSUInteger)groupCount;
-(id)_prepareForFetchWithAssetCountLimit:(NSUInteger)arg0 collectionCountLimit:(NSUInteger)arg1 outAssetRange:(struct _NSRange *)arg2 outCollectionRange:(struct _NSRange *)arg3 outFetchOwningContentString:(*BOOL)arg4 ;
-(id)contentStringAtIndex:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateFilterGroupSnapshot;
-(id)debugDescription;
-(id)description;
-(id)firstSearchTextGroupSnapshot;
-(id)fullSearchTextGroupSnapshot;
-(id)groupRangesAtIndex:(NSInteger)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)lookupIdentifiersForSearchIndexCategories:(id)arg0 ;
-(id)matchRangesAtIndex:(NSInteger)arg0 ;
-(id)normalizedStringAtIndex:(NSInteger)arg0 ;
-(id)normalizedUnitTestDescription;
-(id)tokensAtIndex:(NSInteger)arg0 ;
-(id)unitTestDescription;
-(void)dealloc;
-(void)fetchNextAssetUUIDs:(BOOL)arg0 collectionResults:(BOOL)arg1 assetCountLimit:(NSUInteger)arg2 collectionCountLimit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)fetchNextAssetUUIDs:(BOOL)arg0 collectionResults:(BOOL)arg1 count:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)fetchNextAssetUUIDs:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)resolveObjectsWithAssetCache:(id)arg0 collectionCache:(id)arg1 ;


@end


#endif