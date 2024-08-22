// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLISTEDITORVIEW_H
#define WFLISTEDITORVIEW_H

@class UIView, NSSet, NSString, NSArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegatePrivate, WFListEditorViewCellDelegate, WFListEditorViewDelegate, WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;



@interface WFListEditorView : UIView <UITableViewDataSource, UITableViewDelegatePrivate, WFListEditorViewCellDelegate>



@property (copy, nonatomic) NSSet *allowedValueTypes; // ivar: _allowedValueTypes
@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFListEditorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *localizedNewItemTypeName; // ivar: _localizedNewItemTypeName
@property (weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (nonatomic) BOOL standaloneVariablesAsContentItems; // ivar: _standaloneVariablesAsContentItems
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate
@property (nonatomic) BOOL variablesDisabled; // ivar: _variablesDisabled


+(Class)cellClass;
-(BOOL)isAccessibilityElement;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldDrawBottomSeparatorForSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)accessibilityElements;
-(id)addNewItemIndexPath;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)appendNewItem;
-(void)beginEditingWithContext:(id)arg0 ;
-(void)configureCell:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)configureCell:(id)arg0 withItem:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)deleteItemAtIndex:(NSUInteger)arg0 ;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertNewItemOfType:(NSInteger)arg0 ;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)layoutSubviews;
-(void)listEditorCell:(id)arg0 didUpdateToValue:(id)arg1 ;
-(void)movedItemAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)updateCells;
-(void)updatedItem:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif