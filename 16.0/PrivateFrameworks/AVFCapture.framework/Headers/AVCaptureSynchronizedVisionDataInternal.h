// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTURESYNCHRONIZEDVISIONDATAINTERNAL_H
#define AVCAPTURESYNCHRONIZEDVISIONDATAINTERNAL_H


#import <Foundation/Foundation.h>


@interface AVCaptureSynchronizedVisionDataInternal : NSObject {
    *__CVBuffer visionDataPixelBuffer;
    BOOL visionDataWasDropped;
    NSInteger droppedReason;
}






@end


#endif