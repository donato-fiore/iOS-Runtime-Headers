// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCECOORDMAPPER_H
#define TSCECOORDMAPPER_H

@class NSIndexSet;
@protocol TSCECoordMappingProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface TSCECoordMapper : NSObject <TSCECoordMappingProtocol, NSCopying>

 {
    TSKUIDStruct _tableUID;
    unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _baseRowToViewRow;
    unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _viewRowToBaseRow;
    NSIndexSet *_summaryRowIndexes;
    NSIndexSet *_summaryColumnIndexes;
    NSIndexSet *_labelRowIndexes;
    NSIndexSet *_summaryAndLabelRowIndexes;
    unordered_map<unsigned short, unsigned short, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, unsigned short>>> _baseColumnToViewColumn;
    unordered_map<unsigned short, unsigned short, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, unsigned short>>> _viewColumnToBaseColumn;
    unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _summaryRowToViewRow;
    unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _viewRowToSummaryRow;
    unordered_map<unsigned short, unsigned short, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, unsigned short>>> _summaryColumnToViewColumn;
    unordered_map<unsigned short, unsigned short, std::hash<unsigned short>, std::equal_to<unsigned short>, std::allocator<std::pair<const unsigned short, unsigned short>>> _viewColumnToSummaryColumn;
}


@property (nonatomic) BOOL chromeCoordsAreViewCoords; // ivar: _chromeCoordsAreViewCoords
@property (readonly, nonatomic) BOOL isIdentityMapping; // ivar: _isIdentityMapping


-(id)baseColumnIndexesForViewColumnIndexes:(id)arg0 ;
-(id)baseRowIndexesForViewRowIndexes:(id)arg0 ;
-(id)baseShuffleMapForViewShuffleMap:(id)arg0 ;
-(id)baseTractRefForChromeTractRef:(id)arg0 ;
-(id)baseTractRefForViewTractRef:(id)arg0 ;
-(id)chromeColumnIndexesForViewColumnIndexes:(id)arg0 ;
-(id)chromeRowIndexesForViewRowIndexes:(id)arg0 ;
-(id)chromeTractRefForBaseTractRef:(id)arg0 ;
-(id)chromeTractRefForViewTractRef:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 summaryColumns:(id)arg1 summaryRows:(id)arg2 labelRows:(id)arg3 ;
-(id)initWithTableUID:(struct TSKUIDStruct *)arg0 summaryRows:(id)arg1 labelRows:(id)arg2 ;
-(id)viewColumnIndexesForBaseColumnIndexes:(id)arg0 ;
-(id)viewColumnIndexesForChromeColumnIndexes:(id)arg0 ;
-(id)viewRowIndexesForBaseRowIndexes:(id)arg0 ;
-(id)viewRowIndexesForChromeRowIndexes:(id)arg0 ;
-(id)viewTractRefForBaseTractRef:(id)arg0 ;
-(id)viewTractRefForChromeTractRef:(id)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 0> )baseCellRefForChromeCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 0> )baseCellRefForViewCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 1> )viewCellRefForBaseCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 1> )viewCellRefForChromeCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 2> )chromeCellRefForBaseCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCECellRef, 2> )chromeCellRefForViewCellRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCERangeRef, 1> )viewRangeRefForChromeRangeRef:(*void)arg0 ;
-(struct RefTypeHolder<TSCERangeRef, 2> )chromeRangeRefForViewRangeRef:(*void)arg0 ;
-(struct TSKUIDStruct *)tableUID;
-(struct TSUChromeCellCoord )chromeCellCoordForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUChromeCellCoord )chromeCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUChromeColumnIndex )chromeColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSUChromeColumnIndex )chromeColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUChromeRowIndex )chromeRowIndexForBaseRowIndex:(struct TSUModelRowIndex )arg0 ;
-(struct TSUChromeRowIndex )chromeRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForChromeCellCoord:(struct TSUChromeCellCoord )arg0 ;
-(struct TSUModelCellCoord )baseCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUModelCellCoord )summaryCellCoordForViewCellCoord:(struct TSUViewCellCoord )arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex )arg0 ;
-(struct TSUModelColumnIndex )baseColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUModelColumnIndex )summaryColumnIndexForViewColumnIndex:(struct TSUViewColumnIndex )arg0 ;
-(struct TSUModelRowIndex )baseRowIndexForChromeRowIndex:(struct TSUChromeRowIndex )arg0 ;
-(struct TSUModelRowIndex )baseRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUModelRowIndex )summaryRowIndexForViewRowIndex:(struct TSUViewRowIndex )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForBaseCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForChromeCellCoord:(struct TSUChromeCellCoord )arg0 ;
-(struct TSUViewCellCoord )viewCellCoordForSummaryCellCoord:(struct TSUModelCellCoord )arg0 ;
-(struct TSUViewColumnIndex )viewColumnIndexForBaseColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSUViewColumnIndex )viewColumnIndexForChromeColumnIndex:(struct TSUChromeColumnIndex )arg0 ;
-(struct TSUViewColumnIndex )viewColumnIndexForSummaryColumnIndex:(struct TSUModelColumnIndex )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForBaseRowIndex:(struct TSUModelRowIndex )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForChromeRowIndex:(struct TSUChromeRowIndex )arg0 ;
-(struct TSUViewRowIndex )viewRowIndexForSummaryRowIndex:(struct TSUModelRowIndex )arg0 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)mapBaseColumn:(unsigned short)arg0 toViewColumn:(unsigned short)arg1 ;
-(void)mapBaseRow:(unsigned int)arg0 toViewRow:(unsigned int)arg1 ;
-(void)mapSummaryColumn:(unsigned short)arg0 toViewColumn:(unsigned short)arg1 ;
-(void)mapSummaryRow:(unsigned int)arg0 toViewRow:(unsigned int)arg1 ;


@end


#endif