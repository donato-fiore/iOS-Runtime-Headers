// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCONTROLPANELITEMPROVIDER_H
#define HFCONTROLPANELITEMPROVIDER_H

@class NSSet, HFItem<NSCopying>;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"

@interface HFControlPanelItemProvider : HFItemProvider

@property (copy, nonatomic) NSSet *controlPanelItems; // ivar: _controlPanelItems
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, copy, nonatomic) HFItem<NSCopying> *item; // ivar: _item
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(BOOL)prefersNonBlockingReloads;
-(id)controlPanelItemComparator:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithItem:(id)arg0 valueSource:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;


@end


#endif