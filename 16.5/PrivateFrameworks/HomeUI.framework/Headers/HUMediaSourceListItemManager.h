// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMEDIASOURCELISTITEMMANAGER_H
#define HUMEDIASOURCELISTITEMMANAGER_H

@class HFItemManager, NSSet, NSArray;



@interface HUMediaSourceListItemManager : HFItemManager

@property (retain, nonatomic) NSSet *containers; // ivar: _containers
@property (readonly, nonatomic) NSArray *mediaSourceItems; // ivar: _mediaSourceItems
@property (retain, nonatomic) NSArray *sources; // ivar: _sources
@property (readonly) NSUInteger target; // ivar: _target


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initForMediaProfileContainers:(id)arg0 delegate:(id)arg1 forTarget:(NSUInteger)arg2 ;


@end


#endif