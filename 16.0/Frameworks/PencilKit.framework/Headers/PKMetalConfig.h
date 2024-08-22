// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMETALCONFIG_H
#define PKMETALCONFIG_H

@protocol OS_dispatch_queue, MTLDevice;

#import <Foundation/Foundation.h>

#import "PKMetalResourceHandler.h"

@interface PKMetalConfig : NSObject {
    BOOL _privateResourceHandler;
    PKMetalResourceHandler *_resourceHandler;
    NSObject<OS_dispatch_queue> *_renderQueue;
    id<MTLDevice> *_device;
}




-(id)init;


@end


#endif