// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTVTSCALER_H
#define FTVTSCALER_H

@class MPSImageStatisticsMean;
@protocol FTScaling, MTLDeviceSPI, MTLCommandQueue, MTLTexture;

#import <Foundation/Foundation.h>


@interface FTVTScaler : NSObject <FTScaling>

 {
    id<MTLDeviceSPI> *_device;
    id<MTLCommandQueue> *_commandQueue;
    MPSImageStatisticsMean *_meanFilter;
    id<MTLTexture> *_meanTexture;
    *OpaqueVTPixelTransferSession _transferSession;
}




-(BOOL)scaleSourceBuffer:(struct __CVBuffer *)arg0 toDestinationBuffer:(struct __CVBuffer *)arg1 sourceROI:(struct CGRect )arg2 destinationROI:(struct CGRect )arg3 ;
-(BOOL)scaleSourceBuffer:(struct __CVBuffer *)arg0 toDestinationBuffer:(struct __CVBuffer *)arg1 sourceROI:(struct CGRect )arg2 destinationROI:(struct CGRect )arg3 mean;
-(id)initWithCommandQueue:(id)arg0 ;
-(void)dealloc;


@end


#endif