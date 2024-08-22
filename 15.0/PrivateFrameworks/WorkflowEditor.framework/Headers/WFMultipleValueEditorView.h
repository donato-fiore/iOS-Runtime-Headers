// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMULTIPLEVALUEEDITORVIEW_H
#define WFMULTIPLEVALUEEDITORVIEW_H

@class UIView, NSString, NSSet, NSArray, UIColor, WFParameter, WFMultipleValueParameterState, UITableView, NSIndexPath;
@protocol UITableViewDataSource, UITableViewDelegatePrivate, WFMultipleValueEditorViewCellDelegate, WFModuleSummaryEditorDelegate, WFMultipleValueEditorViewDelegate, WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;


#import "WFModuleSummaryEditor.h"

@interface WFMultipleValueEditorView : UIView <UITableViewDataSource, UITableViewDelegatePrivate, WFMultipleValueEditorViewCellDelegate, WFModuleSummaryEditorDelegate>



@property (readonly, nonatomic) NSString *addNewItemCellTitle; // ivar: _addNewItemCellTitle
@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor; // ivar: _currentEditor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFMultipleValueEditorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (retain, nonatomic) id *fillProvider; // ivar: _fillProvider
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *localizedNewItemTypeName; // ivar: _localizedNewItemTypeName
@property (weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (retain, nonatomic) UIColor *overridingCellBackgroundColor; // ivar: _overridingCellBackgroundColor
@property (retain, nonatomic) WFParameter *parameter; // ivar: _parameter
@property (copy, nonatomic) WFMultipleValueParameterState *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSIndexPath *textEditingCellIndexPath; // ivar: _textEditingCellIndexPath
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled
@property (nonatomic) NSInteger widgetFamily; // ivar: _widgetFamily


-(BOOL)isAccessibilityElement;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)accessibilityElements;
-(id)addNewItemIndexPath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)reuseIdentifierForIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)addNewItemAtIndexPath:(id)arg0 ;
-(void)beginEditingWithContext:(id)arg0 ;
-(void)configureCell:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)configureCell:(id)arg0 withItem:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)deleteItemAtIndex:(NSUInteger)arg0 ;
-(void)editItemAtIndexPath:(id)arg0 ;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)movedItemAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)multipleValueEditorViewCell:(id)arg0 didUpdateParameterState:(id)arg1 ;
-(void)multipleValueEditorViewCellDidInvalidateSize:(id)arg0 ;
-(void)multipleValueEditorViewCellDidRequestEditing:(id)arg0 ;
-(void)summaryEditor:(id)arg0 didCommitParameterState:(id)arg1 ;
-(void)summaryEditorDidFinish:(id)arg0 returnToKeyboard:(BOOL)arg1 withTextAttachmentToEdit:(id)arg2 ;
-(void)summaryEditorDidRequestTextEntry:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)updateCells;
-(void)updatedItem:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif