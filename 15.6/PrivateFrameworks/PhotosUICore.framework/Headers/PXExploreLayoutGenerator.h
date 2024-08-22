// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXEXPLORELAYOUTGENERATOR_H
#define PXEXPLORELAYOUTGENERATOR_H

@class NSString;
@protocol PXGDiagnosticsProvider, PXPresentedGridLayout;


#import "PXLayoutGenerator.h"
#import "PXExploreParsingState.h"
#import "PXExploreLayoutMetrics.h"

@interface PXExploreLayoutGenerator : PXLayoutGenerator <PXGDiagnosticsProvider, PXPresentedGridLayout>

 {
    NSInteger _count;
    NSInteger _capacity;
    *? _inputItemInfos;
    *_PXLayoutGeometry _outputGeometries;
    *NSInteger _outputItemIndexToParseLocation;
    *? _outputItemLocations;
    NSInteger _rowCount;
    NSInteger _rowCapacity;
    *NSInteger _outputNumberOfColumnsAtRow;
    BOOL _isPrepared;
    CGPoint _origin;
    NSInteger _row;
    NSInteger _localNumberOfColumns;
    NSInteger _localNumberOfRows;
    CGSize _cellSize;
    CGSize _intercellSpacing;
    CGSize _contentSize;
    _PXCornerSpriteIndexes _cornerSpriteIndexes;
    CGSize _headerItemSize;
    CGSize _minHeroItemsSize;
}


@property (readonly, nonatomic) CGSize buildingBlockSize; // ivar: _buildingBlockSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize headerItemSize;
@property (readonly, nonatomic) PXExploreParsingState *localState; // ivar: _localState
@property (copy, nonatomic) PXExploreLayoutMetrics *metrics;
@property (readonly, nonatomic) CGSize minHeroItemsSize;
@property (readonly, nonatomic) CGSize minimumItemSize; // ivar: _minimumItemSize
@property (readonly, nonatomic) NSInteger numberOfRemainingItems;
@property (readonly, nonatomic) NSInteger presentedNumberOfRows;
@property (readonly) Class superclass;


-(BOOL)_isShortRowNextFollowedByLargeHero;
-(BOOL)_parseFourColumnLayoutWithOptions:(NSUInteger)arg0 ;
-(BOOL)_parseSixColumnLayoutWithOptions:(NSUInteger)arg0 ;
-(BOOL)_parseThreeColumnLayoutWithOptions:(NSUInteger)arg0 ;
-(BOOL)isAcceptableLargeHeroNextItemAtIndex:(NSInteger)arg0 ;
-(BOOL)nextInputItems:(NSUInteger)arg0 ;
-(BOOL)nextItems:(NSInteger)arg0 areAll:(NSUInteger)arg1 ;
-(BOOL)nextItems:(NSInteger)arg0 isAny:(NSUInteger)arg1 ;
-(BOOL)parseFourColumnGroupWithShortRowFollowedByLargeHero;
-(BOOL)parseFourColumnRowWithType:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(BOOL)parseMacLayout;
-(BOOL)parsePadLandscapeLayout;
-(BOOL)parsePadPortraitLayout;
-(BOOL)parsePhoneLandscapeLayout;
-(BOOL)parsePhonePortraitLayout;
-(BOOL)parseSixColumnRowWithType:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 options:(NSUInteger)arg2 ;
-(BOOL)parseSixColumnRowWithType:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 subsequentShortRowItems:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(BOOL)parseThreeColumnGroupWithFiveItems;
-(BOOL)parseThreeColumnGroupWithShortRowFollowedByLargeHero;
-(BOOL)parseThreeColumnGroupWithThreeItemsFollowedByOneItemAllowingLargeHeroAtEnd:(BOOL)arg0 ;
-(BOOL)parseThreeColumnMediumHeroRowWithPano;
-(BOOL)parseThreeColumnRowWithType:(NSInteger)arg0 numberOfItems:(NSInteger)arg1 ;
-(BOOL)parseThreeColumnShortRowWithPano;
-(BOOL)prepareNextItems:(NSInteger)arg0 withLargeHeroIndex:(NSInteger)arg1 ;
-(CGFloat)_buildingBlockAspectRatioForNumberOfColumns:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(CGFloat)score:(NSInteger)arg0 forNextItemAtIndex:(NSInteger)arg1 ;
-(NSInteger)indexWithinNextItems:(NSInteger)arg0 having:(NSInteger)arg1 keyIndex:(NSInteger)arg2 ;
-(NSInteger)itemIndexForItem:(NSInteger)arg0 inDirection:(NSUInteger)arg1 ;
-(NSInteger)itemIndexForPresentedItemIndex:(NSInteger)arg0 ;
-(NSInteger)numberOf:(NSUInteger)arg0 withinNextItems:(NSInteger)arg1 ;
-(NSInteger)numberOfItemsInFourColumnMediumHeroRowForNumberOfRemainingItems:(NSInteger)arg0 ;
-(NSInteger)numberOfItemsInSixColumnHeroRowForNumberOfRemainingItems:(NSInteger)arg0 rowOptions:(*NSUInteger)arg1 ;
-(NSInteger)numberOfItemsInSixColumnShortRowForNumberOfRemainingItems:(NSInteger)arg0 ;
-(NSInteger)preferredRowTypeAfterRowWithType:(NSInteger)arg0 ;
-(NSInteger)presentedNumberOfColumnsAtRow:(NSInteger)arg0 ;
-(NSUInteger)attributesForNextItemAtIndex:(NSInteger)arg0 ;
-(id)initWithMetrics:(id)arg0 ;
-(id)presentedItemsBetweenItem:(NSInteger)arg0 andItem:(NSInteger)arg1 ;
-(id)presentedItemsInRect:(struct CGRect )arg0 ;
-(struct ? )presentedItemLocationForItemAtIndex:(NSInteger)arg0 ;
-(struct CGRect )presentedRectForItemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )_cellSizeForNumberOfColumns:(NSInteger)arg0 ;
-(struct CGSize )_estimatedSizeForColumns:(NSInteger)arg0 headerRows:(NSInteger)arg1 averageItemsPerBlock:(CGFloat)arg2 averageRowsPerBlock:(CGFloat)arg3 withOptions:(NSUInteger)arg4 ;
-(struct CGSize )_estimatedSizeForFourColumnLayoutWithOptions:(NSUInteger)arg0 ;
-(struct CGSize )_estimatedSizeForSixColumnLayoutWithOptions:(NSUInteger)arg0 ;
-(struct CGSize )_estimatedSizeForThreeColumnLayoutWithOptions:(NSUInteger)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )estimatedSizeForPadLandscape;
-(struct CGSize )estimatedSizeForPadPortrait;
-(struct CGSize )estimatedSizeForPhoneLandscape;
-(struct CGSize )estimatedSizeForPhonePortrait;
-(struct CGSize )size;
-(struct _PXCornerSpriteIndexes )cornerSpriteIndexes;
-(void)_addThreeItemsToSixColumnRowWithHeroItemType:(NSInteger)arg0 options:(NSUInteger)arg1 rowType:(*NSInteger)arg2 ;
-(void)_addTwoItemsForThreeColumnRowPreferringTallVariant:(BOOL)arg0 ;
-(void)_parseFourColumnHeroRowWithType:(NSInteger)arg0 heroItemType:(NSInteger)arg1 numberOfItems:(NSInteger)arg2 ;
-(void)_parseFourColumnShortRowWithNumberOfItems:(NSInteger)arg0 ;
-(void)_parseSixColumnHeroRowWithNumberOfItems:(NSInteger)arg0 heroItemType:(NSInteger)arg1 subsequentShortRowItems:(NSInteger)arg2 options:(NSUInteger)arg3 ;
-(void)_parseSixColumnShortRowWithNumberOfItems:(NSInteger)arg0 ;
-(void)_parseThreeColumnHeaderRowWithNumberOfItems:(NSInteger)arg0 ;
-(void)_parseThreeColumnMediumHeroRowWithNumberOfItems:(NSInteger)arg0 ;
-(void)_parseThreeColumnShortRowWithNumberOfItems:(NSInteger)arg0 ;
-(void)_prepareIfNeeded;
-(void)addLocalItemWithType:(NSInteger)arg0 atColumn:(NSInteger)arg1 row:(NSInteger)arg2 columnSpan:(NSInteger)arg3 rowSpan:(NSInteger)arg4 ;
-(void)beginRowWithNumberOfColumns:(NSInteger)arg0 ;
-(void)dealloc;
-(void)endRowWithType:(NSInteger)arg0 ;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)getLowestAspectRatio:(*CGFloat)arg0 highestAspectRatio:(*CGFloat)arg1 forNextItems:(NSInteger)arg2 ;
-(void)invalidate;
-(void)moveNextItemAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)reorderNextItems:(NSInteger)arg0 usingMapping:(id)arg1 ;
-(void)setBuildingBlockColumnSpan:(NSInteger)arg0 rowSpan:(NSInteger)arg1 withNumberOfColumns:(NSInteger)arg2 ;
-(void)sortNextItems:(NSInteger)arg0 withItemAtIndex:(NSInteger)arg1 having:(NSInteger)arg2 ;


@end


#endif