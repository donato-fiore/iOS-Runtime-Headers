// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFABSTRACTCONTROLSTATUSITEM_H
#define HFABSTRACTCONTROLSTATUSITEM_H



#import "HFStatusItem.h"

@interface HFAbstractControlStatusItem : HFStatusItem



+(BOOL)_isControlItem:(id)arg0 identicalToControlItem:(id)arg1 ;
+(BOOL)_isControlItem:(id)arg0 similarToControlItem:(id)arg1 ;
-(BOOL)supportsInvalidation;
-(id)_aggregatedValueSourceWithServiceItems:(id)arg0 ;
-(id)_buildControlItemsForServices:(id)arg0 ;
-(id)_buildServiceItemsForServices:(id)arg0 ;
-(id)_primaryServiceDescriptorForServices:(id)arg0 ;
-(id)serviceTypes;
-(id)standardResultsForBatchReadResponse:(id)arg0 serviceTypes:(id)arg1 ;


@end


#endif