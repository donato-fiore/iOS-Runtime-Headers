// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFRESIDENTDEVICEITEM_H
#define HFRESIDENTDEVICEITEM_H

@class NSString, HMResidentDevice;
@protocol HFHomeKitItemProtocol, NSCopying, HFHomeKitObject;


#import "HFItem.h"

@interface HFResidentDeviceItem : HFItem <HFHomeKitItemProtocol, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HMResidentDevice *residentDevice; // ivar: _residentDevice
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithResidentDevice:(id)arg0 ;


@end


#endif