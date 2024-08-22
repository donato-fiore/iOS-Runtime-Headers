// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPERSONALREQUESTSDESCRIPTIONFOOTERITEM_H
#define HUPERSONALREQUESTSDESCRIPTIONFOOTERITEM_H

@class HFItem;


#import "HULocationDeviceManager.h"

@interface HUPersonalRequestsDescriptionFooterItem : HFItem

@property (nonatomic) BOOL hasSiriEndpointAccessories; // ivar: _hasSiriEndpointAccessories
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager; // ivar: _locationDeviceManager


-(id)_itemUpdateOutcomeForLocationDeviceText:(id)arg0 ;
-(id)_locationDeviceTextForDeviceNameString:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;


@end


#endif