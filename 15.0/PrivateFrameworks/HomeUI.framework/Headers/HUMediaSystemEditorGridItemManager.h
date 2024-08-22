// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMEDIASYSTEMEDITORGRIDITEMMANAGER_H
#define HUMEDIASYSTEMEDITORGRIDITEMMANAGER_H

@class HFMediaSystemBuilder, NSSet;


#import "HUServiceGridItemManager.h"

@interface HUMediaSystemEditorGridItemManager : HUServiceGridItemManager

@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // ivar: _mediaSystemBuilder
@property (retain, nonatomic) NSSet *prioritizedRooms; // ivar: _prioritizedRooms


+(id)defaultItemProviderCreatorForMediaSystemBuilder:(SEL)arg0 options:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_roomComparator:(SEL)arg0 ;
-(id)_sortedItems:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 shouldGroupByRoom:(BOOL)arg1 itemProvidersCreator:(id)arg2 ;
-(id)initWithMediaSystemBuilder:(id)arg0 delegate:(id)arg1 ;


@end


#endif