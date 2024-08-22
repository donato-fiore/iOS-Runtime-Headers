// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYCONTROLITEMPROVIDER_H
#define HFACCESSORYCONTROLITEMPROVIDER_H

@class HMAccessory, NSSet;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"
#import "HFAccessoryItem.h"

@interface HFAccessoryControlItemProvider : HFItemProvider

@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HFAccessoryItem *accessoryItem; // ivar: _accessoryItem
@property (retain, nonatomic) NSSet *previousControlItems; // ivar: _previousControlItems
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)initWithAccessoryItem:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif