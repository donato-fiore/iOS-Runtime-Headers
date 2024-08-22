// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFHOMEPODALARMITEMPROVIDER_H
#define HFHOMEPODALARMITEMPROVIDER_H

@class NSMutableDictionary, NSMutableSet;
@protocol HFMediaProfileContainer;


#import "HFItemProvider.h"
#import "HFAccessorySettingMobileTimerAdapter.h"

@interface HFHomePodAlarmItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableDictionary *alarmIDToItemMap; // ivar: _alarmIDToItemMap
@property (readonly, nonatomic) NSMutableSet *alarmItems; // ivar: _alarmItems
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly, nonatomic) HFAccessorySettingMobileTimerAdapter *mobileTimerAdapter; // ivar: _mobileTimerAdapter


-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)items;
-(id)reloadItems;


@end


#endif