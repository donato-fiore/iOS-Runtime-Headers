// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUVALVEEDITORITEMMANAGER_H
#define HUVALVEEDITORITEMMANAGER_H

@class HFItemManager, HFControlPanelItemProvider, NSString, HFStaticItem, HFItem, HFServiceBuilder, HFValveServiceItem, HFStaticItemProvider;
@protocol HUControlPanelControllerDelegate;


#import "HUControlPanelController.h"
#import "HUNameItemModule.h"

@interface HUValveEditorItemManager : HFItemManager <HUControlPanelControllerDelegate>



@property (retain, nonatomic) HUControlPanelController *controlPanelController; // ivar: _controlPanelController
@property (retain, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider; // ivar: _controlPanelItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger editorMode; // ivar: _editorMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFStaticItem *identifyItem; // ivar: _identifyItem
@property (retain, nonatomic) HFItem *nameItem; // ivar: _nameItem
@property (retain, nonatomic) HUNameItemModule *nameModule; // ivar: _nameModule
@property (retain, nonatomic) HFServiceBuilder *serviceBuilder; // ivar: _serviceBuilder
@property (retain, nonatomic) HFValveServiceItem *sourceValveItem; // ivar: _sourceValveItem
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (readonly) Class superclass;


+(id)preferredSectionSortArray;
+(id)sortComparatorForValveEditorSections:(SEL)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_characteristicTypesForControlPanelItem:(id)arg0 ;
-(id)_characteristicsAffectedByControlItem:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 editorMode:(NSUInteger)arg2 ;
-(void)controlPanelController:(id)arg0 didEndPossibleWritesForControlItem:(id)arg1 ;
-(void)controlPanelController:(id)arg0 willBeginPossibleWritesForControlItem:(id)arg1 ;


@end


#endif