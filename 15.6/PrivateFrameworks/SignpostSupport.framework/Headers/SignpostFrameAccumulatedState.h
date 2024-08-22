// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNPOSTFRAMEACCUMULATEDSTATE_H
#define SIGNPOSTFRAMEACCUMULATEDSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SignpostFrameLatencyInterval.h"
#import "SignpostHIDLatencyInterval.h"
#import "SignpostRenderServerRenderInterval.h"

@interface SignpostFrameAccumulatedState : NSObject

@property (retain, nonatomic) NSMutableDictionary *contextIDtoContextInfoDict; // ivar: _contextIDtoContextInfoDict
@property (retain, nonatomic) SignpostFrameLatencyInterval *frameLatency; // ivar: _frameLatency
@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (retain, nonatomic) NSMutableDictionary *frameSeedToSkippedRenderIntervals; // ivar: _frameSeedToSkippedRenderIntervals
@property (retain, nonatomic) SignpostHIDLatencyInterval *hidLatency; // ivar: _hidLatency
@property (retain, nonatomic) SignpostRenderServerRenderInterval *renderInterval; // ivar: _renderInterval


-(id)initWithFrameSeed:(unsigned int)arg0 ;
-(void)_addSkippedRender:(id)arg0 ;


@end


#endif