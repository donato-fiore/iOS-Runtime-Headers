// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTURESYNCHRONIZEDSAMPLEBUFFERDATAINTERNAL_H
#define AVCAPTURESYNCHRONIZEDSAMPLEBUFFERDATAINTERNAL_H


#import <Foundation/Foundation.h>


@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject {
    *opaqueCMSampleBuffer sampleBuffer;
    BOOL sampleBufferWasDropped;
    NSInteger droppedReason;
    BOOL hasCorrespondingDepthData;
    BOOL hasCorrespondingVisionData;
    int constituentDeviceCaptureID;
}






@end


#endif