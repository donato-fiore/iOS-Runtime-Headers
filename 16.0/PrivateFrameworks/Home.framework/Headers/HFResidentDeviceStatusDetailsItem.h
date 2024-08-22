// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFRESIDENTDEVICESTATUSDETAILSITEM_H
#define HFRESIDENTDEVICESTATUSDETAILSITEM_H

@class NSString, HMHome, HMResidentDevice;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;


#import "HFItem.h"

@interface HFResidentDeviceStatusDetailsItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HMResidentDevice *residentDevice; // ivar: _residentDevice
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 residentDevice:(id)arg1 ;


@end


#endif