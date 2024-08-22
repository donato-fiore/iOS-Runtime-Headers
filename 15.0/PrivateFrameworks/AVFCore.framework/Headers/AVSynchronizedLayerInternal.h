// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSYNCHRONIZEDLAYERINTERNAL_H
#define AVSYNCHRONIZEDLAYERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVPlayerItem.h"

@interface AVSynchronizedLayerInternal : NSObject {
    AVPlayerItem *playerItem;
    BOOL isVisible;
    NSObject<OS_dispatch_queue> *serialQueue;
}






@end


#endif