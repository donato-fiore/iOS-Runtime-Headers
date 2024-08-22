// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSERVICEDETAILSSHOWCONTAINEDITEMSINGROUPITEM_H
#define HUSERVICEDETAILSSHOWCONTAINEDITEMSINGROUPITEM_H



#import "HUServiceDetailsAbstractItem.h"

@interface HUServiceDetailsShowContainedItemsInGroupItem : HUServiceDetailsAbstractItem



-(BOOL)hasAnyVisibleBridgedAccessories;
-(BOOL)hasAnyVisibleBridgedServices;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)sourceBridgeAccessory;


@end


#endif