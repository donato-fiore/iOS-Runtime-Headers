// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCARDPROPERTYGROUP_H
#define CNCARDPROPERTYGROUP_H

@class NSArray, CNContactStore, NSDictionary, CNPolicy, NSString;


#import "CNCardGroup.h"

@interface CNCardPropertyGroup : CNCardGroup {
    NSArray *_displayItems;
    NSArray *_editingItems;
    NSArray *_originalEditingItems;
}


@property (readonly, nonatomic) BOOL allowsAdding;
@property (nonatomic) BOOL allowsDisplayModePickerActions; // ivar: _allowsDisplayModePickerActions
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSArray *deletedItems; // ivar: _deletedItems
@property (retain, nonatomic) NSArray *editingItems;
@property (readonly, nonatomic, getter=isFixedValue) BOOL fixedValue;
@property (nonatomic) BOOL isAdded; // ivar: _isAdded
@property (readonly, nonatomic) NSDictionary *linkedPolicies; // ivar: _linkedPolicies
@property (readonly, nonatomic) BOOL modified;
@property (readonly, nonatomic, getter=isMultiLine) BOOL multiLine;
@property (readonly, nonatomic, getter=isMultiValue) BOOL multiValue;
@property (readonly, nonatomic) CNPolicy *policy; // ivar: _policy
@property (readonly, nonatomic) NSString *property; // ivar: _property
@property (readonly, nonatomic) NSArray *propertyItems; // ivar: _propertyItems
@property (nonatomic) BOOL showActionsWhenEmpty; // ivar: _showActionsWhenEmpty


+(id)groupForProperty:(id)arg0 contact:(id)arg1 store:(id)arg2 policy:(id)arg3 linkedPolicies:(id)arg4 ;
-(BOOL)_arrayContainsMaxAllowedItems:(id)arg0 ;
-(BOOL)_shouldShowGroupWhenEditing:(BOOL)arg0 ;
-(BOOL)addEditingItem;
-(BOOL)canAddEditingItem;
-(BOOL)isRequired;
-(BOOL)labelsAreUnique;
-(id)_availableLabelsInLabels:(id)arg0 forItem:(id)arg1 withValueSelector:(SEL)arg2 usedLabelsCount:(*NSInteger)arg3 ;
-(id)_itemToBeMergedWith:(id)arg0 fromItems:(id)arg1 forEditing:(BOOL)arg2 ;
-(id)_loadPropertyItems;
-(id)_mergeItems:(id)arg0 forEditing:(BOOL)arg1 ;
-(id)_nextAvailableInstantMessageService;
-(id)_nextAvailableLabel;
-(id)_nextAvailableLabelInLabels:(id)arg0 withValueSelector:(SEL)arg1 ;
-(id)_nextAvailableSocialService;
-(id)description;
-(id)displayItems;
-(id)initWithProperty:(id)arg0 contact:(id)arg1 store:(id)arg2 policy:(id)arg3 linkedPolicies:(id)arg4 ;
-(id)itemsUsingLabel:(id)arg0 ;
-(id)labelsForItem:(id)arg0 options:(NSUInteger)arg1 ;
-(id)labelsInUseByGroup;
-(id)lastEditingItem;
-(id)nextAvailableLabel;
-(id)policyForItem:(id)arg0 ;
-(void)_updateNameValuesForItems:(id)arg0 ;
-(void)reloadDataPreservingChanges:(BOOL)arg0 ;
-(void)removeEditingItem:(id)arg0 ;
-(void)saveChanges;
-(void)saveChangesForItems:(id)arg0 ;


@end


#endif