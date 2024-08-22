// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCICONTEXTMANAGER_H
#define VNCICONTEXTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VNCIContextsHandler.h"

@interface VNCIContextManager : NSObject {
    VNCIContextsHandler *_cpuContextsHandler;
    NSMutableDictionary *_gpuContextsHandlers;
    os_unfair_lock_s _gpuHandlersLock;
    NSUInteger _maxContextsCount;
}






@end


#endif