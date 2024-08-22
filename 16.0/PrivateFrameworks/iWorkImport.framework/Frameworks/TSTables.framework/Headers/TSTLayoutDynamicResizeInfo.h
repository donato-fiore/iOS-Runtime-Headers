// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTLAYOUTDYNAMICRESIZEINFO_H
#define TSTLAYOUTDYNAMICRESIZEINFO_H

@class NSString;
@protocol TSTLayoutDynamicResizeInfoProtocol;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>

 {
    vector<double, std::allocator<double>> _capturedRowHeights;
    vector<double, std::allocator<double>> _currentRowHeights;
    vector<double, std::allocator<double>> _minimumRowHeights;
    vector<double, std::allocator<double>> _capturedColumnWidths;
    vector<double, std::allocator<double>> _currentColumnWidths;
    vector<double, std::allocator<double>> _minimumColumnWidths;
}


@property (readonly, nonatomic) CGFloat capturedColumnWidthTotal; // ivar: _capturedColumnWidthTotal
@property (readonly, nonatomic) CGFloat capturedRowHeightTotal; // ivar: _capturedRowHeightTotal
@property (retain, nonatomic) TSTCellRegion *columnRegion; // ivar: _columnRegion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) unsigned int numberOfResizableColumns; // ivar: _numberOfResizableColumns
@property (readonly, nonatomic) unsigned int numberOfResizableRows; // ivar: _numberOfResizableRows
@property (readonly, nonatomic) unsigned int numberOfRows; // ivar: _numberOfRows
@property (retain, nonatomic) TSTCellRegion *rowRegion; // ivar: _rowRegion
@property (readonly, nonatomic) unsigned short startColumnIndex; // ivar: _startColumnIndex
@property (readonly, nonatomic) unsigned int startRowIndex; // ivar: _startRowIndex
@property (readonly) Class superclass;
@property (readonly, nonatomic) int tableRowsBehavior; // ivar: _tableRowsBehavior
@property (readonly, nonatomic) BOOL valid; // ivar: _valid


-(BOOL)hasHeightForRow:(unsigned int)arg0 ;
-(BOOL)hasWidthForColumn:(unsigned short)arg0 ;
-(CGFloat)applyColumnTotalWidth:(CGFloat)arg0 ;
-(CGFloat)applyResizeHeightFactor:(CGFloat)arg0 ;
-(CGFloat)applyResizeWidthFactor:(CGFloat)arg0 ;
-(CGFloat)applyRowTotalHeight:(CGFloat)arg0 ;
-(CGFloat)getColumnInitialWidth:(unsigned short)arg0 ;
-(CGFloat)getColumnWidth:(unsigned short)arg0 ;
-(CGFloat)getColumnWidthResize:(unsigned short)arg0 ;
-(CGFloat)getMinimumColumnWidth:(unsigned short)arg0 ;
-(CGFloat)getMinimumRowHeight:(unsigned int)arg0 ;
-(CGFloat)getRowHeight:(unsigned int)arg0 ;
-(CGFloat)getRowHeightResize:(unsigned int)arg0 ;
-(CGFloat)getRowInitialHeight:(unsigned int)arg0 ;
-(CGFloat)totalCapturedColumnWidths;
-(CGFloat)totalCapturedRowHeights;
-(CGFloat)totalCurrentColumnWidths;
-(CGFloat)totalCurrentRowHeights;
-(CGFloat)totalMinimumColumnWidths;
-(CGFloat)totalMinimumRowHeights;
-(id)columnWidths;
-(id)initWithDynamicResizeInfo:(id)arg0 ;
-(id)initWithLayoutEngine:(id)arg0 ;
-(id)initWithLayoutEngine:(id)arg0 columnRegion:(id)arg1 ;
-(id)initWithLayoutEngine:(id)arg0 columnRegion:(id)arg1 rowRegion:(id)arg2 ;
-(id)initWithLayoutEngine:(id)arg0 rowRegion:(id)arg1 ;
-(id)rowHeights;
-(struct CGSize )capturedTableSize;
-(void)captureNewMinimumRowHeights:(id)arg0 ;
-(void)enumerateColumnWidthsUsingBlock:(id)arg0 ;
-(void)enumerateRowHeightsUsingBlock:(id)arg0 ;
-(void)p_captureRowColumnInformation:(id)arg0 columnRegion:(id)arg1 rowRegion:(id)arg2 ;


@end


#endif