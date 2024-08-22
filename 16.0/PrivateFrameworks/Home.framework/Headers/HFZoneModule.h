// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFZONEMODULE_H
#define HFZONEMODULE_H

@class NSString, NSSet, HMRoom;
@protocol HFHomeObserver;


#import "HFItemModule.h"
#import "HFItem.h"
#import "HFStaticItemProvider.h"
#import "HFCurrentZonesItem.h"
#import "HFZoneItemProvider.h"
#import "HFZoneSuggestionItemProvider.h"

@interface HFZoneModule : HFItemModule <HFHomeObserver>



@property (retain, nonatomic) HFItem *createNewZoneItem; // ivar: _createNewZoneItem
@property (retain, nonatomic) HFStaticItemProvider *createNewZoneItemProvider; // ivar: _createNewZoneItemProvider
@property (readonly, nonatomic) HFCurrentZonesItem *currentZoneItem; // ivar: _currentZoneItem
@property (retain, nonatomic) HFStaticItemProvider *currentZoneItemProvider; // ivar: _currentZoneItemProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) HFStaticItemProvider *expandedItemProvider; // ivar: _expandedItemProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *itemProviders; // ivar: _itemProviders
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (readonly) Class superclass;
@property (retain, nonatomic) HFZoneItemProvider *zoneItemProvider; // ivar: _zoneItemProvider
@property (retain, nonatomic) HFZoneSuggestionItemProvider *zoneSuggestionItemProvider; // ivar: _zoneSuggestionItemProvider


-(BOOL)canExpand;
-(BOOL)toggleExpansion;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 room:(id)arg1 ;
-(void)_reloadItemProviders;
-(void)home:(id)arg0 didAddRoom:(id)arg1 toZone:(id)arg2 ;
-(void)home:(id)arg0 didAddZone:(id)arg1 ;
-(void)home:(id)arg0 didRemoveRoom:(id)arg1 fromZone:(id)arg2 ;
-(void)home:(id)arg0 didRemoveZone:(id)arg1 ;
-(void)home:(id)arg0 didUpdateNameForZone:(id)arg1 ;


@end


#endif