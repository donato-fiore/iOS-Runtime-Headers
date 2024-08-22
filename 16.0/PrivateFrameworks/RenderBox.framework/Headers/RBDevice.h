// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBDEVICE_H
#define RBDEVICE_H

@class NSString;
@protocol RBImageRenderer, MTLCaptureScope, MTLDevice, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RBDevice : NSObject <RBImageRenderer>

 {
    refcounted_ptr<RB::Device> _device;
    atomic<unsigned int> _pending_collect;
}


@property (readonly, nonatomic) NSObject<MTLCaptureScope> *captureScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;


+(BOOL)isSupported;
+(id)allDevices;
+(id)sharedDefaultDevice;
+(id)sharedDevice:(id)arg0 ;
+(void)didEnterBackground:(id)arg0 ;
+(void)willEnterForeground:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)pipelineDescriptions:(id)arg0 extraColorFormats:(id)arg1 ;
-(struct CGImage *)renderImageInRect:(struct CGRect )arg0 options:(id)arg1 renderer:(id)arg2 ;
-(void)collectResources;
-(void)dealloc;
// -(void)renderImageInRect:(struct CGRect )arg0 options:(id)arg1 renderer:(id)arg2 completionQueue:(unk)arg3 handler:(id)arg4  ;


@end


#endif