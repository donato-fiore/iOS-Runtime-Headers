// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSYNCHRONIZEDLAYERINTERNAL_H
#define AVSYNCHRONIZEDLAYERINTERNAL_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVPlayerItem.h"

@interface AVSynchronizedLayerInternal : NSObject {
    NSObject<OS_dispatch_queue> *serialQueue;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVPlayerItem *playerItem;
    NSMutableSet *oldPlayerItems;
    BOOL isVisible;
}






@end


#endif