// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLETEXTVIEWMANAGER_H
#define ICTABLETEXTVIEWMANAGER_H

@class NSMutableDictionary, ICDimensionSumCache, NSArray, NSMutableArray, NSMutableSet, NSSet;
@protocol ICTableTextViewManagerDelegate;

#import <Foundation/Foundation.h>

#import "ICTableContentView.h"
#import "ICTableLayoutManager.h"

@interface ICTableTextViewManager : NSObject

@property (nonatomic) NSUInteger anchorColumn; // ivar: _anchorColumn
@property (nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (nonatomic) NSUInteger anchorRow; // ivar: _anchorRow
@property (readonly, nonatomic) CGRect boundingRect;
@property (readonly, nonatomic) NSMutableDictionary *cachedCellHeights; // ivar: _cachedCellHeights
@property (readonly, nonatomic) ICDimensionSumCache *cachedColumnWidths; // ivar: _cachedColumnWidths
@property (readonly, nonatomic) ICDimensionSumCache *cachedRowHeights; // ivar: _cachedRowHeights
@property (readonly, nonatomic) NSArray *columnIDs;
@property (readonly, nonatomic) NSMutableArray *columnIdentifiers; // ivar: _columnIdentifiers
@property (readonly, nonatomic) NSMutableDictionary *columnTextViews; // ivar: _columnTextViews
@property (retain, nonatomic) NSMutableSet *columnsNeedingRestyle; // ivar: _columnsNeedingRestyle
@property (readonly, weak, nonatomic) ICTableContentView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<ICTableTextViewManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSSet *draggedColumns; // ivar: _draggedColumns
@property (retain, nonatomic) NSSet *draggedRows; // ivar: _draggedRows
@property (readonly, nonatomic) NSMutableSet *prepopulatedColumns; // ivar: _prepopulatedColumns
@property (retain, nonatomic) NSArray *previousRowIdentifiers; // ivar: _previousRowIdentifiers
@property (readonly, nonatomic) NSArray *rowIDs;
@property (readonly, nonatomic) NSMutableArray *rowIdentifiers; // ivar: _rowIdentifiers
@property (readonly, nonatomic) ICTableLayoutManager *tableLayoutManager; // ivar: _tableLayoutManager
@property (nonatomic, getter=isUpdatingTiles) BOOL updatingTiles; // ivar: _updatingTiles


-(BOOL)cellContainingPoint:(struct CGPoint )arg0 columnID:(*id)arg1 rowID:(*id)arg2 ;
-(CGFloat)addColumn:(id)arg0 atEnd:(BOOL)arg1 ;
-(CGFloat)addRow:(id)arg0 atEnd:(BOOL)arg1 ;
-(CGFloat)ensureChunkOfPopulatedColumnsForColumn:(id)arg0 ;
-(CGFloat)ensureChunkOfPopulatedRowsForRow:(id)arg0 shouldForce:(BOOL)arg1 ;
-(CGFloat)preAddColumn:(id)arg0 ;
-(CGFloat)preAddRow:(id)arg0 atYPosition:(CGFloat)arg1 ;
-(id)columnContainingX:(CGFloat)arg0 ;
-(id)init;
-(id)initWithTableLayoutManager:(id)arg0 view:(id)arg1 cachedWidths:(id)arg2 cachedRowHeights:(id)arg3 cachedCellHeights:(id)arg4 ;
-(id)rowContainingY:(CGFloat)arg0 ;
-(id)textViewForColumn:(id)arg0 ;
-(id)textViewForColumn:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(struct CGPoint )initialScrollPointForViewport:(struct CGRect )arg0 ;
-(struct CGPoint )redrawAllWithViewport:(struct CGRect )arg0 ;
-(struct CGPoint )updateTilesWithViewport:(struct CGRect )arg0 redrawAll:(BOOL)arg1 ;
-(struct CGRect )frameOfCellAtColumn:(id)arg0 row:(id)arg1 ;
-(struct CGRect )frameOfColumn:(id)arg0 ;
-(struct CGRect )frameOfRow:(id)arg0 ;
-(void)adjustOnscreenPositions;
-(void)clearColumn:(id)arg0 ;
-(void)clearColumnsOutsideFrame:(struct CGRect )arg0 ;
-(void)clearRow:(id)arg0 ;
-(void)clearRowsOutsideFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)ensureCellPositionForColumn:(id)arg0 andRow:(id)arg1 ;
-(void)enumerateTextViewsWithBlock:(id)arg0 ;
-(void)heightChangedForRow:(id)arg0 by:(CGFloat)arg1 ;
-(void)moveColumnAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)moveRowAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)parentViewDidChange;
-(void)removeColumn:(id)arg0 ;
-(void)restyleCells;
-(void)restyleTextView:(id)arg0 ;
-(void)updateAuthorHighlights;
-(void)validateRowHeightsForColumn:(id)arg0 ;


@end


#endif