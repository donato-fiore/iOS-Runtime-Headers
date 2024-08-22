// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __HMDCURRENTDEVICECONTROLLER_H
#define __HMDCURRENTDEVICECONTROLLER_H



#import "HMDDeviceController.h"

@interface __HMDCurrentDeviceController : HMDDeviceController



-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)__handleDeviceUpdated:(id)arg0 ;
-(void)updateWithDevice:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif