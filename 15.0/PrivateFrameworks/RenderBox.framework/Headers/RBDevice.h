// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBDEVICE_H
#define RBDEVICE_H

@protocol MTLCaptureScope, MTLDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RBDevice : NSObject {
    refcounted_ptr<RB::Device> _device;
    objc_ptr<NSObject<OS_dispatch_queue> *> _queue;
    atomic<unsigned int> _pending_collect;
}


@property (readonly, nonatomic) NSObject<MTLCaptureScope> *captureScope;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;


+(BOOL)isSupported;
+(id)allDevices;
+(id)sharedDefaultDevice;
+(id)sharedDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)pipelineDescriptions:(id)arg0 extraColorFormats:(id)arg1 ;
-(void)collectResources;
-(void)dealloc;


@end


#endif