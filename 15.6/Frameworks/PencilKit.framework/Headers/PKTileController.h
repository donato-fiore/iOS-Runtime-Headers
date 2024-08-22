// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTILECONTROLLER_H
#define PKTILECONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKMetalRendererController.h"

@interface PKTileController : NSObject {
    BOOL _invertColors;
    BOOL _sixChannelBlending;
    BOOL _previewsSuspended;
    PKMetalRendererController *_rendererController;
    NSObject<OS_dispatch_queue> *_previewQueue;
}






@end


#endif