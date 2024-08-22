// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTROLLER_H
#define PKCONTROLLER_H

@class NSArray, NSMutableArray;
@protocol PKControllerDelegate, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKMetalConfig.h"
#import "PKMetalRendererController.h"
#import "PKDrawing.h"

@interface PKController : NSObject {
    NSArray *_renderedStrokes;
    NSMutableArray *_mutableRenderedStrokes;
    PKMetalConfig *_metalConfig;
    BOOL _liveInteraction;
    BOOL _invertColors;
    BOOL _sixChannelBlending;
    NSObject<PKControllerDelegate> *_delegate;
    PKMetalRendererController *_rendererController;
    PKDrawing *_drawing;
    NSObject<OS_dispatch_semaphore> *_interactSemaphore;
    NSObject<OS_dispatch_queue> *_interactQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
}




-(id)init;


@end


#endif