// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFACCESSORYINFOITEM_H
#define HFACCESSORYINFOITEM_H

@class HMAccessory;


#import "HFItem.h"

@interface HFAccessoryInfoItem : HFItem

@property (readonly, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) NSUInteger infoType; // ivar: _infoType


+(id)localizedStringForCharacteristic:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 infoType:(NSUInteger)arg1 ;


@end


#endif