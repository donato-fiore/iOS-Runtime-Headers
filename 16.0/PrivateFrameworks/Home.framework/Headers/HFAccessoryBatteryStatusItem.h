// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYBATTERYSTATUSITEM_H
#define HFACCESSORYBATTERYSTATUSITEM_H

@class NSMutableDictionary;


#import "HFStatusItem.h"

@interface HFAccessoryBatteryStatusItem : HFStatusItem

@property (retain, nonatomic) NSMutableDictionary *batteryLevelItems; // ivar: _batteryLevelItems


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;


@end


#endif