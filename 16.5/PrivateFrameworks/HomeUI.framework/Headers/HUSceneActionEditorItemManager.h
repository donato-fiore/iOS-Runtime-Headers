// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSCENEACTIONEDITORITEMMANAGER_H
#define HUSCENEACTIONEDITORITEMMANAGER_H

@class HFItemManager, NSSet, NSMutableDictionary, HFActionSetBuilder, HFStaticItem, HFItem;



@interface HUSceneActionEditorItemManager : HFItemManager

@property (readonly, nonatomic) NSSet *actionGridItems;
@property (readonly, nonatomic) NSMutableDictionary *actionGridItemsByEditorType; // ivar: _actionGridItemsByEditorType
@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder; // ivar: _actionSetBuilder
@property (retain, nonatomic) HFStaticItem *changeServicesItem; // ivar: _changeServicesItem
@property (retain, nonatomic) HFStaticItem *deleteSceneItem; // ivar: _deleteSceneItem
@property (readonly, nonatomic) NSSet *instructionsItems; // ivar: _instructionsItems
@property (readonly, nonatomic) NSSet *itemsToHideWhenEmpty;
@property (readonly, nonatomic) HFStaticItem *mediaInstructionsItem; // ivar: _mediaInstructionsItem
@property (retain, nonatomic) HFStaticItem *mediaItem; // ivar: _mediaItem
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) HFStaticItem *nameAndIconItem; // ivar: _nameAndIconItem
@property (copy, nonatomic) NSSet *prioritizedAccessories; // ivar: _prioritizedAccessories
@property (retain, nonatomic) HFItem *showInHomeDashboardItem; // ivar: _showInHomeDashboardItem
@property (retain, nonatomic) HFStaticItem *testSceneItem; // ivar: _testSceneItem


+(NSUInteger)actionGridEditorTypeForSectionIdentifier:(id)arg0 ;
+(id)allActionGridEditorSectionIdentifiers;
+(id)sectionIdentifierForActionGridEditorType:(NSUInteger)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionForActionGridEditorType:(NSUInteger)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)initWithActionSetBuilder:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;
-(void)_createItemsForActionGridEditorType:(NSUInteger)arg0 home:(id)arg1 ;


@end


#endif