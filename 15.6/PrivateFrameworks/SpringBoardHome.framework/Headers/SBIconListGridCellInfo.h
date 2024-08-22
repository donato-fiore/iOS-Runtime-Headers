// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBICONLISTGRIDCELLINFO_H
#define SBICONLISTGRIDCELLINFO_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBIconListGridCellInfo : NSObject <NSCopying, BSDescriptionProviding>

 {
    unsigned short _indexes;
    *unsigned short _extraGridCellIndexes;
    NSUInteger _extraGridCellIndexesSize;
    *unsigned short _extraIconIndexes;
    NSUInteger _extraIconIndexesSize;
    unsigned short _maxGridCellIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger firstEmptyGridCellIndex; // ivar: _firstEmptyGridCellIndex
@property (nonatomic) NSUInteger firstTrailingEmptyGridCellIndex; // ivar: _firstTrailingEmptyGridCellIndex
@property (nonatomic) SBHIconGridSize gridSize; // ivar: _gridSize
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastUsedGridCellIndex; // ivar: _lastUsedGridCellIndex
@property (readonly, copy, nonatomic) NSString *layoutDescription;
@property (readonly, nonatomic, getter=isLayoutOutOfBounds) BOOL layoutOutOfBounds;
@property (readonly, nonatomic) NSUInteger numberOfUsedColumns;
@property (readonly, nonatomic) NSUInteger numberOfUsedRows;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBHIconGridSize usedGridSize;


-(BOOL)isOutOfBoundsAtIconIndex:(NSUInteger)arg0 ;
-(NSUInteger)countOfIconsOfSize:(struct SBHIconGridSize )arg0 ;
-(NSUInteger)getIconIndexes:(*NSUInteger)arg0 inGridRange:(struct SBHIconGridRange )arg1 ;
-(NSUInteger)getUniqueIconIndexes:(*NSUInteger)arg0 inGridRange:(struct SBHIconGridRange )arg1 ;
-(NSUInteger)gridCellIndexForCoordinate:(struct SBIconCoordinate )arg0 ;
-(NSUInteger)gridCellIndexForIconIndex:(NSUInteger)arg0 ;
-(NSUInteger)iconIndexForCoordinate:(struct SBIconCoordinate )arg0 ;
-(NSUInteger)iconIndexForGridCellIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfFirstEmptyGridCellRangeOfSize:(struct SBHIconGridSize )arg0 ;
-(NSUInteger)indexOfFirstGridCellRangeOfSize:(struct SBHIconGridSize )arg0 inGridCellIndexRange:(struct _NSRange )arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfFirstGridCellRangeOfSize:(struct SBHIconGridSize )arg0 inGridRange:(struct SBHIconGridRange )arg1 passingTest:(id)arg2 ;
-(NSUInteger)indexOfOutOfBoundsIconInRange:(struct _NSRange )arg0 ;
-(NSUInteger)maxGridCellIndexForIconIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfUsedGridCellsInColumn:(NSUInteger)arg0 ;
-(NSUInteger)numberOfUsedGridCellsInColumn:(NSUInteger)arg0 rowRange:(struct _NSRange )arg1 ;
-(NSUInteger)numberOfUsedGridCellsInRow:(NSUInteger)arg0 ;
-(NSUInteger)numberOfUsedGridCellsInRow:(NSUInteger)arg0 columnRange:(struct _NSRange )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct SBHIconGridRange )gridRangeForGridCellIndex:(NSUInteger)arg0 ;
-(struct SBHIconGridSize )gridSizeForGridCellIndex:(NSUInteger)arg0 ;
-(struct SBIconApproximateLayoutPosition )approximateLayoutPositionForCoordinate:(struct SBIconCoordinate )arg0 ;
-(struct SBIconApproximateLayoutPosition )approximateLayoutPositionForGridCellIndex:(NSUInteger)arg0 ;
-(struct SBIconCoordinate )coordinateForGridCellIndex:(NSUInteger)arg0 ;
-(void)addEmptyColumns:(NSUInteger)arg0 ;
-(void)addEmptyRows:(NSUInteger)arg0 ;
-(void)clearAllIconAndGridCellIndexes;
-(void)dealloc;
-(void)setGridCellIndex:(NSUInteger)arg0 forIconIndex:(NSUInteger)arg1 ;
-(void)setIconIndex:(NSUInteger)arg0 forGridCellIndex:(NSUInteger)arg1 ;
-(void)setIconIndexes:(*NSUInteger)arg0 inGridRange:(struct SBHIconGridRange )arg1 ;


@end


#endif