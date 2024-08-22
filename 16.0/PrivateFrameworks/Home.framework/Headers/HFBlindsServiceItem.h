// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFBLINDSSERVICEITEM_H
#define HFBLINDSSERVICEITEM_H



#import "HFDoorServiceItem.h"

@interface HFBlindsServiceItem : HFDoorServiceItem



+(id)supportedServiceTypes;
-(NSInteger)_doorServicePriority;
-(id)createControlItemsWithOptions:(id)arg0 ;


@end


#endif