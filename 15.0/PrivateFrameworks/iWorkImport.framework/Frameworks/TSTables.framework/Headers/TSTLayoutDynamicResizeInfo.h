// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTDYNAMICRESIZEINFO_H
#define TSTLAYOUTDYNAMICRESIZEINFO_H

@class NSString;
@protocol TSTLayoutDynamicResizeInfoProtocol;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>

 {
    BOOL mValid;
    int mTableRowsBehavior;
    TSTCellRegion *mRowRegion;
    unsigned int mStartRowIndex;
    unsigned int mNumberOfRows;
    unsigned int mNumberOfResizableRows;
    *CGFloat mCapturedRowHeights;
    *CGFloat mCurrentRowHeights;
    *CGFloat mMinimumRowHeights;
    CGFloat mCapturedRowHeightTotal;
    TSTCellRegion *mColumnRegion;
    unsigned short mStartColumnIndex;
    unsigned int mNumberOfColumns;
    unsigned int mNumberOfResizableColumns;
    *CGFloat mCapturedColumnWidths;
    *CGFloat mCurrentColumnWidths;
    *CGFloat mMinimumColumnWidths;
    CGFloat mCapturedColumnWidthTotal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasHeightForRow:(unsigned int)arg0 ;
-(BOOL)hasWidthForColumn:(unsigned short)arg0 ;
-(BOOL)valid;
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
-(void)dealloc;
-(void)enumerateColumnWidthsUsingBlock:(id)arg0 ;
-(void)enumerateRowHeightsUsingBlock:(id)arg0 ;
-(void)invalidate;
-(void)p_captureRowColumnInformation:(id)arg0 columnRegion:(id)arg1 rowRegion:(id)arg2 ;


@end


#endif