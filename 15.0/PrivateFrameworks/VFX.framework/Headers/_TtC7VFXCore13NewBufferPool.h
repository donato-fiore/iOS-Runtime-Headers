// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7VFXCORE13NEWBUFFERPOOL_H
#define _TTC7VFXCORE13NEWBUFFERPOOL_H

@class SwiftObject;



@interface _TtC7VFXCore13NewBufferPool : SwiftObject {
    ? device;
    ? label;
    ? resourceOptions;
    ? blockSize;
    ? isActive;
    ? canBeConsumedByMultipleRenderer;
    ? consumedFrame;
    ? buffersBeingConsumedByGPU;
    ? gpuConsumingCount;
    ? storage;
    ? storageLock;
    ? buffersUsedByCPU;
    ? buffersUnused;
    ? heapsUsedByCPU;
    ? heapsUnused;
    ? smallBufferLock;
    ? currentSmallBuffer;
    ? smallBufferPreferredSize;
}






@end


#endif