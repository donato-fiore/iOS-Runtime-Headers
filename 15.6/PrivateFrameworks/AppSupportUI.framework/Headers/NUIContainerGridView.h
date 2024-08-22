// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUICONTAINERGRIDVIEW_H
#define NUICONTAINERGRIDVIEW_H

@class NSMutableArray, NSArray, NSString;
@protocol _NUIGridArrangementContainer;


#import "NUIContainerView.h"

@interface NUIContainerGridView : NUIContainerView <_NUIGridArrangementContainer>

 {
    NSMutableArray *_viewRows;
    _NUIGridArrangement _arrangement;
    ? _visibleCount;
    map<UIView *, const std::pair<_NSRange, _NSRange>, std::less<UIView *>, std::allocator<std::pair<UIView *const, const std::pair<_NSRange, _NSRange>>>> _viewRanges;
    CGSize _spacing;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
    ? _gridViewFlags;
}


@property (copy, nonatomic) NSArray *arrangedSubviewRows;
@property (nonatomic) CGFloat columnSpacing;
@property (nonatomic) CGFloat columnWidth; // ivar: _columnWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger horizontalAlignment;
@property (nonatomic) NSInteger horizontalDistribution;
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (readonly, nonatomic) NSInteger numberOfRows;
@property (nonatomic) CGFloat rowHeight; // ivar: _rowHeight
@property (nonatomic) CGFloat rowSpacing;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger verticalAlignment;
@property (nonatomic) NSInteger verticalDistribution;


+(id)containerGridViewWithArrangedSubviewRows:(id)arg0 ;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg0 ;
-(BOOL)setNeedsInvalidation:(NSInteger)arg0 ;
-(NSInteger)columnIndexForArrangedSubview:(id)arg0 ;
-(NSInteger)rowIndexForArrangedSubview:(id)arg0 ;
-(id)addColumnWithArrangedSubviews:(id)arg0 ;
-(id)addRowWithArrangedSubviews:(id)arg0 ;
-(id)arrangedDebugDescription;
-(id)arrangedSubviewInColumnAtIndex:(NSInteger)arg0 rowAtIndex:(NSInteger)arg1 ;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)columnAtIndex:(NSInteger)arg0 ;
-(id)debugDictionary;
-(id)debugDictionaryForVisibleArrangedSubview:(id)arg0 ;
-(id)initWithArrangedSubviewRows:(id)arg0 ;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)insertColumnAtIndex:(NSInteger)arg0 withArrangedSubviews:(id)arg1 ;
-(id)insertRowAtIndex:(NSInteger)arg0 withArrangedSubviews:(id)arg1 ;
-(id)rowAtIndex:(NSInteger)arg0 ;
-(id)viewForFirstBaselineLayoutInRowAtIndex:(NSInteger)arg0 ;
-(id)viewForLastBaselineLayoutInRowAtIndex:(NSInteger)arg0 ;
-(struct CGSize )calculateArrangedSizeFittingSize:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)didInsertArrangedSubview:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)ensureArrangedSubviewsAreValid;
-(void)getColumnRange:(struct _NSRange *)arg0 rowRange:(struct _NSRange *)arg1 forArrangedSubview:(id)arg2 ;
-(void)layoutArrangedSubviewsInBounds:(struct CGRect )arg0 ;
-(void)moveColumnAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)moveRowAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)populateGridArrangementCells:(*void)arg0 ;
-(void)populateGridArrangementDimension:(*void)arg0 withCells:(*void)arg1 axis:(NSInteger)arg2 ;
-(void)removeColumnAtIndex:(NSInteger)arg0 ;
-(void)removeRowAtIndex:(NSInteger)arg0 ;
-(void)replaceArrangedSubview:(id)arg0 inColumnAtIndex:(NSInteger)arg1 rowAtIndex:(NSInteger)arg2 ;
-(void)replaceArrangedSubviewAtIndex:(NSUInteger)arg0 withView:(id)arg1 ;
-(void)setBaselineRelativeArrangement:(BOOL)arg0 ;


@end


#endif