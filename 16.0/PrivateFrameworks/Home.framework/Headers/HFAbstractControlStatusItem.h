// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFABSTRACTCONTROLSTATUSITEM_H
#define HFABSTRACTCONTROLSTATUSITEM_H

@protocol HFServiceLikeStatusItem;


#import "HFStatusItem.h"

@interface HFAbstractControlStatusItem : HFStatusItem <HFServiceLikeStatusItem>





+(BOOL)_isControlItem:(id)arg0 identicalToControlItem:(id)arg1 ;
+(BOOL)_isControlItem:(id)arg0 similarToControlItem:(id)arg1 ;
+(id)serviceTypes;
-(BOOL)supportsInvalidation;
-(id)_aggregatedValueSourceWithServiceItems:(id)arg0 ;
-(id)_buildControlItemsForServices:(id)arg0 ;
-(id)_buildServiceItemsForServices:(id)arg0 ;
-(id)_primaryServiceDescriptorForServices:(id)arg0 ;
-(id)standardResultsForBatchReadResponse:(id)arg0 serviceTypes:(id)arg1 ;


@end


#endif