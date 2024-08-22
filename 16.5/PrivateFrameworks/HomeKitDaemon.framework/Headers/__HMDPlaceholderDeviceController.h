// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __HMDPLACEHOLDERDEVICECONTROLLER_H
#define __HMDPLACEHOLDERDEVICECONTROLLER_H



#import "HMDDeviceController.h"

@interface __HMDPlaceholderDeviceController : HMDDeviceController



+(id)sharedPlaceholder;
-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 accountRegistry:(id)arg1 ;
-(void)updateWithDevice:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif