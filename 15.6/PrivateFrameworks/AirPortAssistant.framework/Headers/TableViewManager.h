// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TABLEVIEWMANAGER_H
#define TABLEVIEWMANAGER_H

@class NSMutableDictionary, UITableView, NSIndexPath, UIView, UIColor, NSString;
@protocol UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, TableViewManagerDelegate;

#import <Foundation/Foundation.h>

#import "ManagedTableViewCell.h"

@interface TableViewManager : NSObject <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>

 {
    NSMutableDictionary *_tableDescriptorDict;
    UITableView *_managedTableView;
    id *_delegate;
    NSIndexPath *_currentFirstResponderCellPath;
    UIView *_currentFirstResponder;
    BOOL _handlingBulkUpdate;
    CGFloat _cellLeftEdgeOrigin;
    CGFloat _cellContentWidth;
    UIColor *_detailTextColor;
    UIColor *_selectedTextColor;
    UIColor *_editTextColor;
    UIColor *_subtitleColor;
    ManagedTableViewCell *_gLayoutGenericCell;
    ManagedTableViewCell *_gLayoutNoBackgroundCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TableViewManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITableView *managedTableView;
@property (readonly) Class superclass;


+(id)boldSystemLabelFont;
+(id)smallSystemLabelFont;
+(id)systemLabelFont;
-(BOOL)becomeFirstResponderAtIndexPath:(id)arg0 ;
-(BOOL)checkIfSectionDataSameInTable:(id)arg0 ;
-(BOOL)isCellAtIndexPath:(id)arg0 identicalToNewRow:(id)arg1 ;
-(BOOL)setNewRow:(id)arg0 itemAttribute:(id)arg1 forItemOfType:(id)arg2 atItemTypeIndex:(NSUInteger)arg3 toValue:(id)arg4 ;
-(BOOL)tableView:(id)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldShowMenuForRowAtIndexPath:(id)arg1 ;
-(BOOL)tagOfCellAtIndexPath:(id)arg0 tag:(*NSInteger)arg1 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldHasVerifierAtIndexPath:(id)arg0 ;
-(BOOL)textFieldIsSecureAndUnchanged:(id)arg0 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)textFieldVerifiedAtIndexPath:(id)arg0 ;
-(BOOL)updateRowAtIndexPath:(id)arg0 withNewRowInfo:(id)arg1 ;
-(BOOL)updateSectionsIfMatchingExisting:(id)arg0 ;
-(BOOL)verifyStr1:(id)arg0 forTag1:(NSUInteger)arg1 matchesStr2:(id)arg2 forTag2:(NSUInteger)arg3 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)totalTableHeight;
-(CGFloat)totalTableSectionsHeight;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)findAndSetItemObject:(id)arg0 toValue:(id)arg1 inCellWithInternalRowSectionTagValue:(NSUInteger)arg2 ;
-(NSUInteger)indexOfSectionWithIdentifier:(id)arg0 ;
-(NSUInteger)indexOfSelectedRowInMenuSection:(NSUInteger)arg0 ;
-(NSUInteger)tagOfSelectedRowInMenuSection:(NSUInteger)arg0 ;
-(id)activityView:(id)arg0 ;
-(id)buttonView:(id)arg0 ;
-(id)cellInfoOfSelectedRowInMenuSection:(NSUInteger)arg0 ;
-(id)commonAddOptionalBasicImage:(id)arg0 withNeighborItem:(id)arg1 toCellItems:(id)arg2 ;
-(id)commonAddOptionalStaticText:(id)arg0 withNeighborItem:(id)arg1 toCellItems:(id)arg2 ;
-(id)createRowStyleActivityStatus:(BOOL)arg0 text1:(id)arg1 grayedText1:(BOOL)arg2 text2:(id)arg3 grayedText2:(BOOL)arg4 withTag:(NSUInteger)arg5 ;
-(id)createRowStyleBasicButtons:(id)arg0 title2:(id)arg1 withTag:(NSUInteger)arg2 ;
-(id)createRowStyleBasicEditableWithImage:(id)arg0 labelText:(id)arg1 currentValue:(id)arg2 placeholderText:(id)arg3 isSecure:(BOOL)arg4 keyboardType:(NSInteger)arg5 withTag:(NSUInteger)arg6 ;
-(id)createRowStyleBasicOnOffWithImage:(id)arg0 labelText:(id)arg1 isOn:(BOOL)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleBasicWholeCellButton:(id)arg0 withTag:(NSUInteger)arg1 ;
-(id)createRowStyleBasicWithImage:(id)arg0 text1:(id)arg1 text2:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleBasicWithText:(id)arg0 centerImage:(id)arg1 text2:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleBasicWithUnreadBubble:(NSUInteger)arg0 text1:(id)arg1 text2:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleDatePicker:(id)arg0 minimumDate:(id)arg1 maximumDate:(id)arg2 withMode:(NSInteger)arg3 withTag:(NSUInteger)arg4 ;
-(id)createRowStyleProgressViewWithCancelAndStatus:(id)arg0 statusText:(id)arg1 altText:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleSegmentedControlWithItems:(id)arg0 selectedSegmentIndex:(id)arg1 enabled:(BOOL)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleSubtitleWitImage:(id)arg0 mainText:(id)arg1 subtitleText:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleSubtitleWithRightImage:(id)arg0 subtitleText:(id)arg1 rightImage:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleSubtitleWithRightText:(id)arg0 subtitleText:(id)arg1 rightText:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleTitledParagraph:(id)arg0 titleImage:(id)arg1 bodyText:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleTitledParagraphWithLeftImage:(id)arg0 title:(id)arg1 bodyText:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)createRowStyleTitledStaticMultiline:(id)arg0 titleImage:(id)arg1 bodyText:(id)arg2 withTag:(NSUInteger)arg3 ;
-(id)datePicker:(id)arg0 ;
-(id)editTextView:(id)arg0 ;
-(id)findFirstResponderInTableView:(id)arg0 foundParentCell:(*id)arg1 ;
-(id)findFirstResponderInTableView:(id)arg0 fromSection:(NSUInteger)arg1 fromRow:(NSUInteger)arg2 foundParentCell:(*id)arg3 ;
-(id)findFirstResponderInView:(id)arg0 ;
-(id)findNextResponderInTableView:(id)arg0 foundParentCell:(*id)arg1 ;
-(id)getCellDictForCellAtIndexPath:(id)arg0 ;
-(id)getDescriptorObjectForKey:(id)arg0 inSection:(NSInteger)arg1 ;
-(id)getInfoForItemOfType:(id)arg0 atItemTypeIndex:(NSUInteger)arg1 inCell:(id)arg2 ;
-(id)getRepresentedObjectForCellAtIndexPath:(id)arg0 ;
-(id)getRowArrayForSection:(NSUInteger)arg0 ;
-(id)getSectionDictForSection:(NSInteger)arg0 ;
-(id)getValueForFirstItemOfType:(id)arg0 inCellAtIndexPath:(id)arg1 ;
-(id)getValueForFirstItemOfType:(id)arg0 inCellWithTag:(NSInteger)arg1 ;
-(id)getValueForItemOfType:(id)arg0 atItemTypeIndex:(NSUInteger)arg1 inCell:(id)arg2 ;
-(id)getValueForItemOfType:(id)arg0 atItemTypeIndex:(NSUInteger)arg1 inCellAtIndexPath:(id)arg2 ;
-(id)getValueForItemOfType:(id)arg0 atItemTypeIndex:(NSUInteger)arg1 inCellWithTag:(NSInteger)arg2 ;
-(id)imageView:(id)arg0 ;
-(id)indexPathOfCellWithTag:(NSInteger)arg0 ;
-(id)indexPathOfFirstCellWithUnverifiedVerifier;
-(id)init;
-(id)labelView:(id)arg0 ;
-(id)multilineLabelView:(id)arg0 ;
-(id)progressView:(id)arg0 ;
-(id)segmentedControlView:(id)arg0 ;
-(id)switchView:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 layoutMode:(BOOL)arg2 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(id)unreadBubbleCount:(id)arg0 ;
-(id)wholeCellButtonView:(id)arg0 ;
-(void)addSectionInfo:(id)arg0 ;
-(void)addSectionInfo:(id)arg0 animated:(BOOL)arg1 ;
-(void)appendNewRow:(id)arg0 forSection:(NSUInteger)arg1 ;
-(void)awakeFromNib;
-(void)bulkUpdateBegin;
-(void)bulkUpdateEnd;
-(void)buttonAction:(id)arg0 ;
-(void)cleanTableViewForReuse;
-(void)dealloc;
-(void)deferedTouchInCellAtIndexPath:(id)arg0 ;
-(void)deleteAllRowsInSection:(NSUInteger)arg0 ;
-(void)deleteAllRowsInSectionCore:(NSUInteger)arg0 ;
-(void)deleteRowInSection:(NSUInteger)arg0 withTag:(NSInteger)arg1 ;
-(void)deleteRowsAtIndexPaths:(id)arg0 withRowAnimation:(NSInteger)arg1 ;
-(void)deleteSection:(NSUInteger)arg0 ;
-(void)deleteSectionWithIdentifier:(id)arg0 ;
-(void)deleteSectionWithIdentifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)deleteSections:(id)arg0 withRowAnimation:(NSInteger)arg1 ;
-(void)endEditing;
-(void)hideKeyboard;
-(void)informOfNewCellLeftEdge:(CGFloat)arg0 andWidth:(CGFloat)arg1 ;
-(void)initializeTableViewManagerCommon;
-(void)insertNewRows:(id)arg0 atIndexPaths:(id)arg1 withRowAnimation:(NSInteger)arg2 ;
-(void)insertSectionInfo:(id)arg0 atIndex:(NSUInteger)arg1 withRowAnimation:(NSInteger)arg2 ;
-(void)makeFirstEditableCellCurrentResponder;
-(void)recordInitialSelectedMenuItemsForNewSection:(NSInteger)arg0 ;
-(void)reloadSection:(NSUInteger)arg0 ;
-(void)segmentedControlValueChanged:(id)arg0 ;
-(void)selectMenuCellAtIndexPath:(id)arg0 ;
-(void)selectedDateChanged:(id)arg0 ;
-(void)setActivityViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setButtonViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setCellRowInfoItem:(id)arg0 atIndex:(NSUInteger)arg1 forKey:(id)arg2 toValue:(id)arg3 ;
-(void)setDatePickerValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setDescriptorObject:(id)arg0 forKey:(id)arg1 inSection:(NSInteger)arg2 ;
-(void)setEditTextViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setImageViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setLabelViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setMenuCell:(id)arg0 visualStateToSelected:(BOOL)arg1 atIndexPath:(id)arg2 ;
-(void)setMinValue:(id)arg0 andMaxValue:(id)arg1 forItem:(id)arg2 ;
-(void)setMinValue:(id)arg0 andMaxValue:(id)arg1 forItemOfType:(id)arg2 atItemTypeIndex:(NSUInteger)arg3 inCellWithTag:(NSInteger)arg4 ;
-(void)setMultilineLabelViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setNewRow:(id)arg0 accessoryType:(NSInteger)arg1 ;
-(void)setNewRow:(id)arg0 accessoryView:(id)arg1 ;
-(void)setNewRow:(id)arg0 editingAccessoryType:(NSInteger)arg1 ;
-(void)setNewRow:(id)arg0 editingAccessoryView:(id)arg1 ;
-(void)setNewRow:(id)arg0 editingStyle:(NSInteger)arg1 ;
-(void)setNewRow:(id)arg0 representedObject:(id)arg1 ;
-(void)setNewRow:(id)arg0 selectableCell:(BOOL)arg1 ;
-(void)setNewRow:(id)arg0 tag:(NSUInteger)arg1 ;
-(void)setNewRow:(id)arg0 textFieldViewMode:(NSInteger)arg1 ;
-(void)setNewRow:(id)arg0 verifierAccessoryType:(int)arg1 ;
-(void)setProgressViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setRepresentedObject:(id)arg0 forCellAtIndexPath:(id)arg1 ;
-(void)setSectionValue:(id)arg0 forKey:(id)arg1 inSection:(NSUInteger)arg2 ;
-(void)setSwitchViewValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setUnreadBubbleCountValue:(id)arg0 usingItemInfo:(id)arg1 ;
-(void)setValue:(id)arg0 forItem:(id)arg1 ;
-(void)setValue:(id)arg0 forItemOfType:(id)arg1 atItemTypeIndex:(NSUInteger)arg2 inCellAtIndexPath:(id)arg3 ;
-(void)setValue:(id)arg0 forItemOfType:(id)arg1 atItemTypeIndex:(NSUInteger)arg2 inCellWithTag:(NSInteger)arg3 ;
-(void)setVerifierAccessoryView:(int)arg0 forCell:(id)arg1 ;
-(void)setVerifierCellAccessoryType:(int)arg0 forCellsAtIndexPaths:(id)arg1 ;
-(void)switchAction:(id)arg0 ;
-(void)tableView:(id)arg0 accessoryButtonTappedForRowWithIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)uiTextFieldDidChange:(id)arg0 ;
-(void)updateCellAtIndexPath:(id)arg0 withNewRowInfo:(id)arg1 ;
-(void)updateFooter:(id)arg0 forSectionWithIdentifier:(id)arg1 ;
-(void)updateFooter:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)updateHeader:(id)arg0 forSectionWithIdentifier:(id)arg1 ;
-(void)updateHeader:(id)arg0 inSection:(NSUInteger)arg1 ;
-(void)updateSectionDataInIdenticalTable:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif