// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFIRRIGATIONSYSTEMSERVICEITEM_H
#define HFIRRIGATIONSYSTEMSERVICEITEM_H



#import "HFServiceItem.h"

@interface HFIrrigationSystemServiceItem : HFServiceItem



+(id)supportedServiceTypes;
-(BOOL)containsActions;
-(id)_childValveServiceFilter;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)createControlItemsWithOptions:(id)arg0 ;
-(id)currentStateActionBuildersForHome:(id)arg0 ;
-(id)servicesToReadForCharacteristicType:(id)arg0 ;


@end


#endif