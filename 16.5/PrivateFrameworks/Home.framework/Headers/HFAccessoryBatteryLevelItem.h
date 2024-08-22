// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYBATTERYLEVELITEM_H
#define HFACCESSORYBATTERYLEVELITEM_H

@class HMAccessory;
@protocol NSCopying, HFCharacteristicValueSource;


#import "HFItem.h"

@interface HFAccessoryBatteryLevelItem : HFItem <NSCopying>



@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource; // ivar: _valueSource


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessory:(id)arg0 valueSource:(id)arg1 ;


@end


#endif