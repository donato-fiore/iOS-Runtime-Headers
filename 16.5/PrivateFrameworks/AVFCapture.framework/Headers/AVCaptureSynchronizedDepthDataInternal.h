// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTURESYNCHRONIZEDDEPTHDATAINTERNAL_H
#define AVCAPTURESYNCHRONIZEDDEPTHDATAINTERNAL_H


#import <Foundation/Foundation.h>

#import "AVDepthData.h"

@interface AVCaptureSynchronizedDepthDataInternal : NSObject {
    AVDepthData *depthData;
    BOOL depthDataWasDropped;
    NSInteger droppedReason;
}






@end


#endif