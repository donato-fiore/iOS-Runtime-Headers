// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNSCREENGAZESTATE_H
#define VNSCREENGAZESTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface VNScreenGazeState : NSObject {
    int _temporalSmoothingFrameCount;
    unsigned int _currentFrame;
    NSMutableArray *_faceObjectStates;
}






@end


#endif