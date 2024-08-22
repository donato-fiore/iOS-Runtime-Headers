// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFIRRIGATIONSYSTEMSTATUSITEM_H
#define HFIRRIGATIONSYSTEMSTATUSITEM_H

@protocol HFServiceLikeStatusItem;


#import "HFStatusItem.h"

@interface HFIrrigationSystemStatusItem : HFStatusItem <HFServiceLikeStatusItem>





+(id)serviceTypes;
-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif