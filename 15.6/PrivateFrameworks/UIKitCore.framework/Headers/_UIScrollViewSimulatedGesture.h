// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCROLLVIEWSIMULATEDGESTURE_H
#define _UISCROLLVIEWSIMULATEDGESTURE_H


#import <Foundation/Foundation.h>


@interface _UIScrollViewSimulatedGesture : NSObject {
    CGFloat _simulationDuration;
    CGFloat _beginTime;
    id *_beginBlock;
    id *_updateBlock;
    id *_endBlock;
}




-(BOOL)updateSimulation;
// -(id)initWithDuration:(CGFloat)arg0 begin:(id)arg1 update:(unk)arg2 end:(id)arg3  ;


@end


#endif