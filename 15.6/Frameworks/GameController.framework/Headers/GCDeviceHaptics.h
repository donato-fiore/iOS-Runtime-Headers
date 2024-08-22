// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCDEVICEHAPTICS_H
#define GCDEVICEHAPTICS_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "GCHapticCapabilityGraph.h"
#import "GCController.h"

@interface GCDeviceHaptics : NSObject {
    GCHapticCapabilityGraph *_capabilityGraph;
}


@property (readonly, nonatomic) GCHapticCapabilityGraph *capabilityGraph;
@property (weak, nonatomic) GCController *controller;
@property (weak, nonatomic) GCController *controller; // ivar: _controller
@property (retain, nonatomic) NSMutableSet *supportedLocalities; // ivar: _supportedLocalities


-(id)createEngineWithLocality:(id)arg0 ;
-(id)initWithCapabilityGraph:(id)arg0 ;


@end


#endif