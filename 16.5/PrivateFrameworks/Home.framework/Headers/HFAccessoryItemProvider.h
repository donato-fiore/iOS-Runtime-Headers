// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYITEMPROVIDER_H
#define HFACCESSORYITEMPROVIDER_H

@class NSMutableSet, HMHome;
@protocol HFCharacteristicValueSource;


#import "HFItemProvider.h"

@interface HFAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *accessoryItems; // ivar: _accessoryItems
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *overrideValueSource; // ivar: _overrideValueSource
@property (retain, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif