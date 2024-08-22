// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCVPIXELBUFFERPOOLMANAGER_H
#define VNCVPIXELBUFFERPOOLMANAGER_H


#import <Foundation/Foundation.h>


@interface VNCVPixelBufferPoolManager : NSObject {
    os_unfair_lock_s _poolsLock;
    unordered_map<apple::vision::BufferSizeFormat, __CVPixelBufferPool *, std::hash<apple::vision::BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>, std::allocator<std::pair<const apple::vision::BufferSizeFormat, __CVPixelBufferPool *>>> _pools;
}




-(id)init;


@end


#endif