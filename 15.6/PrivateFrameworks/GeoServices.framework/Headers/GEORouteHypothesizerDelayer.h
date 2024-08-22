// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOROUTEHYPOTHESIZERDELAYER_H
#define GEOROUTEHYPOTHESIZERDELAYER_H

@class geo_isolater;

#import <Foundation/Foundation.h>

#import "GEORouteHypothesizer.h"
#import "GEOXPCActivity.h"

@interface GEORouteHypothesizerDelayer : NSObject {
    *__CFBinaryHeap _minHeap;
    GEORouteHypothesizer *_nextHypothesizer;
    geo_isolater *_isolater;
    GEOXPCActivity *_activity;
}




+(void)checkin;
-(id)init;
-(void)_setNextHypothesizer:(id)arg0 ;
-(void)_startValidHypothesizers;
-(void)dealloc;
-(void)delayStartOfHypothesizer:(id)arg0 ;


@end


#endif