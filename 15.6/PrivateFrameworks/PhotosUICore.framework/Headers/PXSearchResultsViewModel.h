// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTSVIEWMODEL_H
#define PXSEARCHRESULTSVIEWMODEL_H

@class NSArray;
@protocol PXSearchResultsLayoutDataSource;

#import <Foundation/Foundation.h>

#import "PXSearchResultsSectionedDataSourceManager.h"
#import "PXSearchTopAssetsResult.h"

@interface PXSearchResultsViewModel : NSObject

@property (readonly, nonatomic) NSArray *attachmentURLs;
@property (nonatomic) NSUInteger configurationType; // ivar: _configurationType
@property (retain, nonatomic) PXSearchResultsSectionedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (weak, nonatomic) NSObject<PXSearchResultsLayoutDataSource> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) PXSearchTopAssetsResult *topAssetsSearchResult;
@property (readonly, nonatomic) NSArray *wordEmbeddingSubstitutions;


-(BOOL)_resultsAreWordEmbeddingsOnly;
-(BOOL)_sectionIsTopAssetsSection:(NSInteger)arg0 ;
-(BOOL)hasDisplayableSuggestions;
-(BOOL)hasNoResults;
-(BOOL)isValidSection:(NSInteger)arg0 ;
-(BOOL)sectionIsExpandable:(NSInteger)arg0 ;
-(BOOL)sectionIsExpanded:(NSInteger)arg0 ;
-(BOOL)shouldDisplayHeaderViewForSection:(NSInteger)arg0 ;
-(BOOL)shouldShowTableFooterView;
-(BOOL)topAssetsExistForSection:(NSInteger)arg0 ;
-(CGFloat)calculatedRowHeightForTopAssets;
-(CGFloat)heightForRowType:(NSUInteger)arg0 info:(id)arg1 ;
-(CGFloat)numberOfTopAssetRows;
-(NSInteger)_adjustedSectionForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSearchResultsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfVisibleSearchResultsInSection:(NSInteger)arg0 ;
-(NSInteger)startingSectionNumberForType:(NSUInteger)arg0 ;
-(NSUInteger)_displayableSuggestionCount;
-(NSUInteger)rowTypeForIndexPath:(id)arg0 ;
-(NSUInteger)sectionTypeForSection:(NSInteger)arg0 ;
-(id)_adjustedIndexPathForIndexPath:(id)arg0 ;
-(id)_selectedWordEmbeddingTextAtRow:(NSInteger)arg0 ;
-(id)_sugestionForIndexPath:(id)arg0 ;
-(id)allSearchResultsForSection:(NSInteger)arg0 ;
-(id)collapseSection:(NSInteger)arg0 ;
-(id)expandSection:(NSInteger)arg0 ;
-(id)initWithSearchSectionedDataSource:(id)arg0 configurationType:(NSUInteger)arg1 ;
-(id)initWithSectionedDataSourceManager:(id)arg0 configurationType:(NSUInteger)arg1 ;
-(id)searchResultAtIndexPath:(id)arg0 ;
-(id)suggestionItemForIndexPath:(id)arg0 ;
-(id)titleForHeaderButtonInSection:(NSInteger)arg0 ;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(id)topAssetAtIndexPath:(id)arg0 ;
-(id)wordEmbeddingForIndexPath:(id)arg0 ;
-(void)fetchImageForPerson:(id)arg0 targetSize:(struct CGSize )arg1 completion:(id)arg2 ;
-(void)searchResultDataForIndexPath:(id)arg0 completion:(id)arg1 ;


@end


#endif