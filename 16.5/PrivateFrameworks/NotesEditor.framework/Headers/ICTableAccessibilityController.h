// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLEACCESSIBILITYCONTROLLER_H
#define ICTABLEACCESSIBILITYCONTROLLER_H

@class UIView, UIScrollView;

#import <Foundation/Foundation.h>

#import "ICTableAccessibilityElementProvider.h"
#import "ICTableSelectionKnob.h"
#import "ICTableAttachmentView.h"
#import "ICTableAttachmentViewController.h"
#import "ICiOSTableAccessibilityElement.h"

@interface ICTableAccessibilityController : NSObject

@property (readonly, nonatomic) _NSRange attachmentRangeInNote;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) UIView *dragProviderView;
@property (readonly, nonatomic) ICTableAccessibilityElementProvider *elementProvider; // ivar: _elementProvider
@property (readonly, nonatomic) ICTableSelectionKnob *endSelectionKnob;
@property (readonly, nonatomic) ICTableAttachmentView *hostingTableAttachmentView;
@property (readonly, nonatomic) BOOL isTableRightToLeft;
@property (readonly, nonatomic) UIScrollView *noteScrollView;
@property (readonly, nonatomic) NSUInteger rowCount;
@property (readonly, nonatomic) ICTableSelectionKnob *startSelectionKnob;
@property (weak, nonatomic) ICTableAttachmentViewController *tableAttachmentViewController; // ivar: _tableAttachmentViewController
@property (retain, nonatomic) ICiOSTableAccessibilityElement *tableElement; // ivar: _tableElement
@property (readonly, nonatomic) UIScrollView *tableScrollView;


-(BOOL)cellIsEditingAtColumnID:(id)arg0 rowID:(id)arg1 ;
-(BOOL)isEditable;
-(BOOL)isHeaderCellAtColumnID:(id)arg0 rowID:(id)arg1 ;
-(BOOL)isTableTextRangeSelected;
-(NSUInteger)columnIndexForColumnID:(id)arg0 ;
-(NSUInteger)rowIndexForRowID:(id)arg0 ;
-(id)attributedContentStringForColumnID:(id)arg0 rowID:(id)arg1 ;
-(id)cellElementForColumnIndex:(NSUInteger)arg0 rowIndex:(NSUInteger)arg1 ;
-(id)cellElementsForColumnID:(id)arg0 ;
-(id)cellElementsForRowID:(id)arg0 ;
-(id)columnIDForColumnIndex:(NSUInteger)arg0 ;
-(id)initWithTableAttachmentViewController:(id)arg0 ;
-(id)rowIDForRowIndex:(NSUInteger)arg0 ;
-(id)selectedCells;
-(id)selectedColumnIDs;
-(id)selectedRowIDs;
-(id)table;
-(id)textViewForColumnID:(id)arg0 ;
-(id)titleForColumnID:(id)arg0 ;
-(id)titleForRowID:(id)arg0 ;
-(struct CGRect )boundingRectForCellWithColumnID:(id)arg0 rowID:(id)arg1 ;
-(struct CGRect )frameInScreenSpaceForCellWithColumnID:(id)arg0 rowID:(id)arg1 ;
-(void)addColumnAfter;
-(void)addColumnBefore;
-(void)addRowAbove;
-(void)addRowBelow;
-(void)beginEditingCellWithColumnID:(id)arg0 rowID:(id)arg1 ;
-(void)convertTableToText;
-(void)deleteSelectedColumns;
-(void)deleteSelectedRows;
-(void)invalidateAXElementsForColumnID:(id)arg0 ;
-(void)invalidateAXElementsForRowID:(id)arg0 ;
-(void)moveCurrentColumnOrRow:(BOOL)arg0 toIndex:(NSUInteger)arg1 ;
-(void)reverseTableDirection;
-(void)scrollColumnIDToVisible:(id)arg0 rowID:(id)arg1 ;
-(void)selectCellForColumnID:(id)arg0 rowID:(id)arg1 ;
-(void)selectCellRangeForCurrentCell;
-(void)selectColumnWithID:(id)arg0 ;
-(void)selectCurrentColumn;
-(void)selectCurrentRow;
-(void)selectRowWithID:(id)arg0 ;
-(void)selectTableTextRange:(BOOL)arg0 ;
-(void)speakCellRangeSelection:(id)arg0 ;
-(void)tableRowOrColumnSelectionDidChange;


@end


#endif