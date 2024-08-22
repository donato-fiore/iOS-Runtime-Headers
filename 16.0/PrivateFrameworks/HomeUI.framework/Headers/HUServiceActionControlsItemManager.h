// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSERVICEACTIONCONTROLSITEMMANAGER_H
#define HUSERVICEACTIONCONTROLSITEMMANAGER_H

@class HFItemManager, HFControlPanelItemProvider, HFServiceActionItem;



@interface HUServiceActionControlsItemManager : HFItemManager

@property (retain, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider; // ivar: _controlPanelItemProvider
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) HFServiceActionItem *serviceActionItem; // ivar: _serviceActionItem


-(NSUInteger)_numberOfSections;
-(id)_actionControlsDelegate;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_sectionIdentifierForControlPanelItem:(id)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_sectionIdentifiers;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)currentSectionIdentifiersSnapshot;
-(id)initWithServiceActionItem:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;


@end


#endif