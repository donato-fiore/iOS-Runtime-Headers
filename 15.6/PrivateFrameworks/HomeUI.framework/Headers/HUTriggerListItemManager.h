// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTRIGGERLISTITEMMANAGER_H
#define HUTRIGGERLISTITEMMANAGER_H

@class HFItemManager, HFStaticItemProvider;


#import "HUAddTriggerItem.h"
#import "HUTriggerListSubheadlineItem.h"
#import "HUTriggerItemProvider.h"

@interface HUTriggerListItemManager : HFItemManager

@property (retain, nonatomic) HUAddTriggerItem *addTriggerItem; // ivar: _addTriggerItem
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider
@property (retain, nonatomic) HUTriggerListSubheadlineItem *subheadlineItem; // ivar: _subheadlineItem
@property (retain, nonatomic) HUTriggerItemProvider *triggerItemProvider; // ivar: _triggerItemProvider


-(NSUInteger)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_currentSectionIdentifiers;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)currentSectionIdentifiersSnapshot;


@end


#endif