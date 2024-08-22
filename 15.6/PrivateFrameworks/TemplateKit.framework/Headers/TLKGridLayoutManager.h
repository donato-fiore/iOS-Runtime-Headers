// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKGRIDLAYOUTMANAGER_H
#define TLKGRIDLAYOUTMANAGER_H

@class NSArray, NSString, NUIGridArrangement, NSMapTable, NSDictionary;
@protocol NUIGridArrangementDataSource, NUIArrangementContainer;

#import <Foundation/Foundation.h>


@interface TLKGridLayoutManager : NSObject <NUIGridArrangementDataSource, NUIArrangementContainer>



@property (retain, nonatomic) NSArray *alignments; // ivar: _alignments
@property (nonatomic) CGSize cachedFittingSize; // ivar: _cachedFittingSize
@property (nonatomic) CGSize cachedGridSize; // ivar: _cachedGridSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NUIGridArrangement *gridArrangement; // ivar: _gridArrangement
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indexForFirstTrailingColumn; // ivar: _indexForFirstTrailingColumn
@property (retain, nonatomic) NSMapTable *itemToRowMapping; // ivar: _itemToRowMapping
@property (retain, nonatomic) NSDictionary *itemsForIndex; // ivar: _itemsForIndex
@property (retain, nonatomic) NSArray *itemsForRows; // ivar: _itemsForRows
@property (retain, nonatomic) NSArray *spacings; // ivar: _spacings
@property (readonly) Class superclass;
@property (nonatomic) BOOL tableContainsRowHeaders; // ivar: _tableContainsRowHeaders
@property (nonatomic) NSInteger totalEqualColumns; // ivar: _totalEqualColumns
@property (retain, nonatomic) NSArray *verticalRowAlignments; // ivar: _verticalRowAlignments
@property (nonatomic) CGFloat widthOfEqualFillColumns; // ivar: _widthOfEqualFillColumns


+(CGFloat)leadingSectionSpacingForView:(id)arg0 view2:(id)arg1 index:(NSUInteger)arg2 alignmentSchema:(id)arg3 allEqual:(BOOL)arg4 ;
+(id)arrayOfItemsForSection:(id)arg0 ;
+(id)computeTruncationForAlignments:(id)arg0 indexForFirstTrailingColumn:(NSUInteger)arg1 totalEqualColumns:(NSUInteger)arg2 ;
+(id)font;
+(id)gridManagerWithAlignments:(id)arg0 rows:(id)arg1 ;
+(id)verticalAlignmentsForItems:(id)arg0 ;
-(BOOL)allEqualColumns;
-(BOOL)hasManyTrailingColumns;
-(CGFloat)gridArrangement:(id)arg0 widthOfColumnAtIndex:(NSInteger)arg1 spacingAfter:(*CGFloat)arg2 ;
-(CGFloat)trailingSectionSpacingBasedOnTotalViewsInSection:(NSInteger)arg0 ;
-(NSInteger)effectiveUserInterfaceLayoutDirection;
-(NSInteger)numberOfColumns;
-(NSInteger)numberOfItemsInGridArrangement:(id)arg0 ;
-(id)addItemsToDictionary:(id)arg0 forSection:(id)arg1 row:(NSUInteger)arg2 truncationPriorities:(id)arg3 ;
-(id)gridArrangement:(id)arg0 itemAtIndex:(NSInteger)arg1 columns:(struct _NSRange *)arg2 rows:(struct _NSRange *)arg3 horizontalAlignment:(*NSInteger)arg4 verticalAlignment:(*NSInteger)arg5 ;
-(id)initWithWithAlignments:(id)arg0 rows:(id)arg1 ;
-(id)spacingsForAlignments:(id)arg0 firstValidDataRow:(id)arg1 ;
-(struct CGRect )layoutFrameForArrangedSubview:(id)arg0 withProposedContentFrame:(struct CGRect )arg1 ;
-(struct CGSize )contentLayoutSizeFittingSize:(struct CGSize )arg0 forArrangedSubview:(id)arg1 ;
-(struct CGSize )sizeForFittingSize:(struct CGSize )arg0 forRow:(id)arg1 ;
-(void)placeViewsForSize:(struct CGSize )arg0 forRow:(id)arg1 completion:(id)arg2 ;


@end


#endif