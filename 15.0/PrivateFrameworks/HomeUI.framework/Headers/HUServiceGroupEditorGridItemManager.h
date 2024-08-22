// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSERVICEGROUPEDITORGRIDITEMMANAGER_H
#define HUSERVICEGROUPEDITORGRIDITEMMANAGER_H

@class NSSet, HFServiceGroupBuilder;


#import "HUServiceGridItemManager.h"

@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager

@property (retain, nonatomic) NSSet *prioritizedRooms; // ivar: _prioritizedRooms
@property (readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder; // ivar: _serviceGroupBuilder


-(BOOL)_shouldHideServiceItem:(id)arg0 containedInServiceGroupItem:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_roomComparator:(SEL)arg0 ;
-(id)initWithDelegate:(id)arg0 shouldGroupByRoom:(BOOL)arg1 itemProvidersCreator:(id)arg2 ;
-(id)initWithServiceGroupBuilder:(id)arg0 delegate:(id)arg1 ;


@end


#endif