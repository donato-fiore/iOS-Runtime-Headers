// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDEVICECONTROLLER_H
#define HMDDEVICECONTROLLER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMFLocking, HMDDeviceControllerDelegate;


#import "HMDDevice.h"

@interface HMDDeviceController : HMFObject <HMFLogging>

 {
    id<HMFLocking> *_lock;
    HMDDevice *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDDeviceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)updateWithDevice:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif