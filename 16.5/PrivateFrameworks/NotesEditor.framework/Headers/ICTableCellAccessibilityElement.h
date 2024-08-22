// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLECELLACCESSIBILITYELEMENT_H
#define ICTABLECELLACCESSIBILITYELEMENT_H

@class UIAccessibilityElement, NSAttributedString, NSUUID, NSString, NSArray;
@protocol UIAccessibilityContainerDataTableCell, ICAccessibilityRotorSearchElement;


#import "ICTableAccessibilityController.h"

@interface ICTableCellAccessibilityElement : UIAccessibilityElement <UIAccessibilityContainerDataTableCell, ICAccessibilityRotorSearchElement>



@property (readonly, nonatomic) NSAttributedString *attributedContentString;
@property (readonly, nonatomic) CGRect boundingRect; // ivar: _boundingRect
@property (readonly, nonatomic) NSUUID *columnID; // ivar: _columnID
@property (readonly, nonatomic) NSUInteger columnIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect frameInScreenSpace;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEditing;
@property (readonly, nonatomic) NSUUID *rowID; // ivar: _rowID
@property (readonly, nonatomic) NSUInteger rowIndex;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedRotorTypes;
@property (weak, nonatomic) ICTableAccessibilityController *tableAXController; // ivar: _tableAXController
@property (readonly, nonatomic) _NSRange textRangeInNote;


-(BOOL)accessibilityActivate;
-(BOOL)accessibilityScroll:(NSInteger)arg0 ;
-(BOOL)addColumnAfter;
-(BOOL)addRowBelow;
-(BOOL)deleteColumn;
-(BOOL)deleteRow;
-(BOOL)isAccessibilityElement;
-(BOOL)selectCellRange;
-(BOOL)selectCurrentColumn;
-(BOOL)selectCurrentRow;
-(BOOL)selectTable;
-(NSUInteger)accessibilityTraits;
-(id)_accessibilityTextInputElement;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)accessibilityContainer;
-(id)accessibilityCustomActions;
-(id)accessibilityCustomRotors;
-(id)accessibilityDragSourceDescriptors;
-(id)accessibilityElementForRow:(NSInteger)arg0 andColumn:(NSInteger)arg1 ;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)accessibilityUserInputLabels;
-(id)accessibilityValue;
-(id)initWithTableAccessibilityController:(id)arg0 columnID:(id)arg1 rowID:(id)arg2 ;
-(id)noteEditorController;
-(struct CGRect )accessibilityFrame;
-(struct _NSRange )accessibilityColumnRange;
-(struct _NSRange )accessibilityRowRange;
-(void)accessibilityElementDidBecomeFocused;
-(void)moveFocusToFirstSelectedCell;
-(void)reverseTableDirection;


@end


#endif