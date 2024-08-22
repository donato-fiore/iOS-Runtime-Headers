// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFPINCODEITEMPROVIDER_H
#define HFPINCODEITEMPROVIDER_H

@class HMAccessory, HMHome, NSMutableSet;


#import "HFItemProvider.h"
#import "HFPinCodeManager.h"

@interface HFPinCodeItemProvider : HFItemProvider

@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger listType; // ivar: _listType
@property (retain, nonatomic) NSMutableSet *pinCodeItems; // ivar: _pinCodeItems
@property (readonly, nonatomic) HFPinCodeManager *pinCodeManager; // ivar: _pinCodeManager


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 pinCodeManager:(id)arg1 listType:(NSUInteger)arg2 forAccessory:(id)arg3 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif