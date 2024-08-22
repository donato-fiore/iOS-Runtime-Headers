// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPIVOTTABLE_H
#define EDPIVOTTABLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDReference.h"
#import "EDCollection.h"

@interface EDPivotTable : NSObject {
    EDResources *mResources;
    BOOL mShowLastColumn;
    BOOL mShowRowHeaders;
    BOOL mShowColumnHeaders;
    BOOL mShowRowStripes;
    BOOL mShowColumnStripes;
    BOOL mApplyNumberFormats;
    BOOL mApplyBorderFormats;
    BOOL mApplyFontFormats;
    BOOL mApplyPatternFormats;
    BOOL mApplyAlignmentFormats;
    BOOL mApplyWidthHeightFormats;
    BOOL mUseAutoFormatting;
    BOOL mColGrandTotals;
    BOOL mRowGrandTotals;
    BOOL mCustomListSort;
    BOOL mCompactData;
    BOOL mCompact;
    BOOL mDataCaption;
    BOOL mDataOnRows;
    BOOL mDisableFieldList;
    BOOL mMergeItem;
    BOOL mMultipleFieldFilters;
    BOOL mOutline;
    BOOL mOutlineData;
    BOOL mPageOverThenDown;
    BOOL mShowCalcMbrs;
    BOOL mShowDataDropDown;
    BOOL mShowDropZones;
    BOOL mShowEmptyCol;
    BOOL mShowEmptyRow;
    BOOL mShowHeaders;
    BOOL mShowMemberPropertyTips;
    BOOL mShowMissing;
    BOOL mShowMultipleLabel;
    BOOL mSubtotalHiddenItems;
    NSString *mName;
    NSString *mStyleName;
    NSString *mColumnHeaderCaption;
    NSString *mRowHeaderCaption;
    NSString *mPageStyleName;
    EDReference *mPivotTableRange;
    NSUInteger mStyleIndex;
    NSInteger mFirstHeaderRow;
    NSInteger mFirstDataRow;
    NSInteger mFirstDataColumn;
    NSUInteger mRowPageCount;
    NSUInteger mColumnPageCount;
    NSUInteger mPageWrap;
    NSUInteger mAutoFormatId;
    NSUInteger mDataPosition;
    EDCollection *mRowFields;
    EDCollection *mColumnFields;
    EDCollection *mRowItems;
    EDCollection *mColumnItems;
    EDCollection *mPivotFields;
    EDCollection *mDataFields;
    EDCollection *mConditionalFields;
    EDCollection *mPivotAreas;
    EDCollection *mPageFields;
}




+(id)pivotTableWithResources:(id)arg0 ;
-(BOOL)applyAlignmentFormats;
-(BOOL)applyBorderFormats;
-(BOOL)applyFontFormats;
-(BOOL)applyNumberFormats;
-(BOOL)applyPatternFormats;
-(BOOL)applyWidthHeightFormats;
-(BOOL)colGrandTotals;
-(BOOL)compact;
-(BOOL)compactData;
-(BOOL)customListSort;
-(BOOL)dataCaption;
-(BOOL)dataOnRows;
-(BOOL)disableFieldList;
-(BOOL)mergeItem;
-(BOOL)multipleFieldFilters;
-(BOOL)outline;
-(BOOL)outlineData;
-(BOOL)pageOverThenDown;
-(BOOL)rowGrandTotals;
-(BOOL)showCalcMbrs;
-(BOOL)showColumnHeaders;
-(BOOL)showColumnStripes;
-(BOOL)showDataDropDown;
-(BOOL)showDropZones;
-(BOOL)showEmptyCol;
-(BOOL)showEmptyRow;
-(BOOL)showHeaders;
-(BOOL)showLastColumn;
-(BOOL)showMemberPropertyTips;
-(BOOL)showMissing;
-(BOOL)showMultipleLabel;
-(BOOL)showRowHeaders;
-(BOOL)showRowStripes;
-(BOOL)subtotalHiddenItems;
-(BOOL)useAutoFormatting;
-(NSInteger)firstDataColumn;
-(NSInteger)firstDataRow;
-(NSInteger)firstHeaderRow;
-(NSUInteger)autoFormatId;
-(NSUInteger)columnPageCount;
-(NSUInteger)dataPosition;
-(NSUInteger)pageWrap;
-(NSUInteger)rowPageCount;
-(NSUInteger)styleIndex;
-(id)columnFields;
-(id)columnHeaderCaption;
-(id)columnItems;
-(id)conditionalFormats;
-(id)dataFields;
-(id)description;
-(id)initWithResources:(id)arg0 ;
-(id)name;
-(id)pageFields;
-(id)pageStyleName;
-(id)pivotAreas;
-(id)pivotFields;
-(id)pivotTableRange;
-(id)rowFields;
-(id)rowHeaderCaption;
-(id)rowItems;
-(id)style;
-(id)styleName;
-(void)setApplyAlignmentFormats:(BOOL)arg0 ;
-(void)setApplyBorderFormats:(BOOL)arg0 ;
-(void)setApplyFontFormats:(BOOL)arg0 ;
-(void)setApplyNumberFormats:(BOOL)arg0 ;
-(void)setApplyPatternFormats:(BOOL)arg0 ;
-(void)setApplyWidthHeightFormats:(BOOL)arg0 ;
-(void)setAutoFormatId:(NSUInteger)arg0 ;
-(void)setColGrandTotals:(BOOL)arg0 ;
-(void)setColumnHeaderCaption:(id)arg0 ;
-(void)setColumnPageCount:(NSUInteger)arg0 ;
-(void)setCompact:(BOOL)arg0 ;
-(void)setCompactData:(BOOL)arg0 ;
-(void)setCustomListSort:(BOOL)arg0 ;
-(void)setDataCaption:(BOOL)arg0 ;
-(void)setDataOnRows:(BOOL)arg0 ;
-(void)setDataPosition:(NSUInteger)arg0 ;
-(void)setDisableFieldList:(BOOL)arg0 ;
-(void)setFirstDataColumn:(NSInteger)arg0 ;
-(void)setFirstDataRow:(NSInteger)arg0 ;
-(void)setFirstHeaderRow:(NSInteger)arg0 ;
-(void)setMergeItem:(BOOL)arg0 ;
-(void)setMultipleFieldFilters:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setOutline:(BOOL)arg0 ;
-(void)setOutlineData:(BOOL)arg0 ;
-(void)setPageOverThenDown:(BOOL)arg0 ;
-(void)setPageStyleName:(id)arg0 ;
-(void)setPageWrap:(NSUInteger)arg0 ;
-(void)setPivotTableRange:(id)arg0 ;
-(void)setRowGrandTotals:(BOOL)arg0 ;
-(void)setRowHeaderCaption:(id)arg0 ;
-(void)setRowPageCount:(NSUInteger)arg0 ;
-(void)setShowCalcMbrs:(BOOL)arg0 ;
-(void)setShowColumnHeaders:(BOOL)arg0 ;
-(void)setShowColumnStripes:(BOOL)arg0 ;
-(void)setShowDataDropDown:(BOOL)arg0 ;
-(void)setShowDropZones:(BOOL)arg0 ;
-(void)setShowEmptyCol:(BOOL)arg0 ;
-(void)setShowEmptyRow:(BOOL)arg0 ;
-(void)setShowHeaders:(BOOL)arg0 ;
-(void)setShowLastColumn:(BOOL)arg0 ;
-(void)setShowMemberPropertyTips:(BOOL)arg0 ;
-(void)setShowMissing:(BOOL)arg0 ;
-(void)setShowMultipleLabel:(BOOL)arg0 ;
-(void)setShowRowHeaders:(BOOL)arg0 ;
-(void)setShowRowStripes:(BOOL)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)setStyleIndex:(NSUInteger)arg0 ;
-(void)setStyleName:(id)arg0 ;
-(void)setSubtotalHiddenItems:(BOOL)arg0 ;
-(void)setUseAutoFormatting:(BOOL)arg0 ;


@end


#endif