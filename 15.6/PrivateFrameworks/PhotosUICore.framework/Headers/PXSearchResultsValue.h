// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTSVALUE_H
#define PXSEARCHRESULTSVALUE_H

@class NSAttributedString, NSString, PSIDate, NSArray, NSDate, NSDictionary, PHPerson, PLSearchResult, NSMutableDictionary;
@protocol PXSearchResultsValueSorting, PXSearchResultItem, OS_dispatch_queue, PXSearchResultsValueDelegate;

#import <Foundation/Foundation.h>


@interface PXSearchResultsValue : NSObject <PXSearchResultsValueSorting, PXSearchResultItem>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _score;
    NSUInteger _searchCategories;
    NSAttributedString *_attributedDisplayTitle;
    NSString *_displaySubtitle;
    PSIDate *_startDate;
    PSIDate *_endDate;
}


@property (setter=_setApproximateCount:) NSUInteger approximateCount; // ivar: _approximateCount
@property (retain, setter=_setAssetUUIDs:) NSArray *assetUUIDs; // ivar: _assetUUIDs
@property (readonly, copy) NSArray *assets;
@property (readonly) NSString *collectionSubtitle; // ivar: _collectionSubtitle
@property (readonly) NSString *collectionTitle; // ivar: _collectionTitle
@property (readonly) NSUInteger collectionType; // ivar: _collectionType
@property (readonly) NSString *collectionUUID; // ivar: _collectionUUID
@property (retain, nonatomic, setter=_setDate:) NSDate *date; // ivar: _date
@property (retain, setter=_setDateFilterString:) NSString *dateFilterString; // ivar: _dateFilterString
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugDictionary;
@property (weak, nonatomic) NSObject<PXSearchResultsValueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *displaySubtitle;
@property (readonly, copy) NSString *displayTitle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSingletonPersonResult;
@property (readonly, nonatomic) NSUInteger itemType;
@property (readonly, nonatomic) NSUInteger numberOfAssets;
@property (retain, nonatomic, setter=_setPerson:) PHPerson *person; // ivar: _person
@property (readonly) CGFloat score;
@property (readonly) NSUInteger searchCategories;
@property (retain, setter=_setSearchResult:) PLSearchResult *searchResult; // ivar: _searchResult
@property (readonly, copy) NSString *searchString;
@property (readonly, nonatomic) NSArray *searchTokens;
@property (retain, setter=_setSelectedDisplayTitle:) NSString *selectedDisplayTitle; // ivar: _selectedDisplayTitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transientToken; // ivar: _transientToken
@property (readonly) NSMutableDictionary *uuidToAssetMap; // ivar: _uuidToAssetMap


-(BOOL)isAssetResult;
-(BOOL)isFinished;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)categoryAtIndex:(NSUInteger)arg0 ;
-(id)_startDateForAssetCollection:(id)arg0 ;
-(id)assetLocalIdentifiersForPreview;
-(id)displayTitleWithDefaultAttributes:(id)arg0 dimmedAttributes:(id)arg1 selectedDisplayTitle:(*id)arg2 ;
-(id)groupsMatchRanges;
-(id)init;
-(void)_computeScoreWithMaxGroupedResultsCount:(NSUInteger)arg0 ;
-(void)_setAsset:(id)arg0 forUUID:(id)arg1 ;
-(void)enumerateSearchIndexCategoriesUsingBlock:(id)arg0 ;
-(void)fetchAllUUIDs:(id)arg0 ;
-(void)fetchRemainingUUIDs:(id)arg0 ;
-(void)setStartDate:(id)arg0 endDate:(id)arg1 ;


@end


#endif