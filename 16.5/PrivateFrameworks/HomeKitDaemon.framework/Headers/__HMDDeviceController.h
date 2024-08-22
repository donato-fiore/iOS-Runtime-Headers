// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __HMDDEVICECONTROLLER_H
#define __HMDDEVICECONTROLLER_H



#import "HMDDeviceController.h"
#import "HMDAccountRegistry.h"

@interface __HMDDeviceController : HMDDeviceController

@property (readonly) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry


-(id)init;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 accountRegistry:(id)arg1 ;
-(void)__handleAddedAccount:(id)arg0 ;
-(void)__handleAddedDevice:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateWithDevice:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif