// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef METALINTERFACE_H
#define METALINTERFACE_H

@protocol MTLDevice, MTLCommandQueue, MTLLibrary;

#import <Foundation/Foundation.h>


@interface MetalInterface : NSObject {
    id<MTLDevice> *mtlDevice;
    id<MTLCommandQueue> *mtlCommandQueue;
    id<MTLLibrary> *mtlLibrary;
}




-(id)init;
-(id)textureFromCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)textureWithPixelData:(struct vImage_Buffer )arg0 format:(NSUInteger)arg1 ;
-(id)textureWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(NSUInteger)arg2 usage:(NSUInteger)arg3 ;
-(void)performAdaptiveBinarizationImage:(struct vImage_Buffer )arg0 output:(struct vImage_Buffer )arg1 sumTable:(struct vImage_Buffer )arg2 sumSqTable:(struct vImage_Buffer )arg3 ;
-(void)performVotingImage:(id)arg0 outputTex:(id)arg1 subBuffer:(char *)arg2 ;


@end


#endif