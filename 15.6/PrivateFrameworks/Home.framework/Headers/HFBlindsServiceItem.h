// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFBLINDSSERVICEITEM_H
#define HFBLINDSSERVICEITEM_H



#import "HFDoorServiceItem.h"

@interface HFBlindsServiceItem : HFDoorServiceItem



+(id)supportedServiceTypes;
-(NSInteger)_doorServicePriority;
-(id)createControlItems;


@end


#endif