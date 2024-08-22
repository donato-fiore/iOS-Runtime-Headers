// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUADDTRIGGERITEM_H
#define HUADDTRIGGERITEM_H

@class HFItem, HMHome;
@protocol HUItemMapsToView;



@interface HUAddTriggerItem : HFItem <HUItemMapsToView>



@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger mode; // ivar: _mode


-(BOOL)_itemisHidden;
-(Class)mapsToViewClass;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithHome:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif