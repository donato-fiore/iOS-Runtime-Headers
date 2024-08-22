// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCONTACTSENSORSTATUSITEM_H
#define HFCONTACTSENSORSTATUSITEM_H

@protocol HFServiceLikeStatusItem;


#import "HFStatusItem.h"

@interface HFContactSensorStatusItem : HFStatusItem <HFServiceLikeStatusItem>





+(id)serviceTypes;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)defaultTitleForRepresentedHomeKitObjects:(id)arg0 ;
-(id)iconDescriptorForRepresentedHomeKitObjects:(id)arg0 ;


@end


#endif