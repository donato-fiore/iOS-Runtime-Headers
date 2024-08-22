// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGVIDEOLAYERINTERNAL_H
#define FIGVIDEOLAYERINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigVideoLayerInternal : NSObject {
    BOOL isPresentationLayer;
    BOOL visible;
    *OpaqueFigSimpleMutex serializationMutex;
    NSObject<OS_dispatch_queue> *notificationSerialQueue;
}






@end


#endif