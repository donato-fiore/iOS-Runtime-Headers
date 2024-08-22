// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APLATENCYVISUALIZATIONTRACKINGCONTROLLER_H
#define APLATENCYVISUALIZATIONTRACKINGCONTROLLER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "APLatencyVisualizationLayer.h"

@interface APLatencyVisualizationTrackingController : NSObject {
    APLatencyVisualizationLayer *_layer;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init:(id)arg0 ;
-(id)layer;
-(void)dealloc;
-(void)draw;


@end


#endif