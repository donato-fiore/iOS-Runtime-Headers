// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVSINGLEFINGERGESTURE_H
#define ASVSINGLEFINGERGESTURE_H

@protocol ASVSingleFingerGestureDelegate, ASVTouch;


#import "ASVGesture.h"

@interface ASVSingleFingerGesture : ASVGesture {
    ? _initialTouchLocation;
    ? _latestTouchLocation;
}


@property (weak, nonatomic) NSObject<ASVSingleFingerGestureDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger enabledGestureTypes; // ivar: _enabledGestureTypes
@property ? initialTouchLocation;
@property ? latestTouchLocation;
@property (nonatomic) BOOL panThresholdPassed; // ivar: _panThresholdPassed
@property (retain, nonatomic) NSObject<ASVTouch> *touch; // ivar: _touch
@property (nonatomic) CGFloat touchStartTime; // ivar: _touchStartTime


-(BOOL)gestureTypeIsEnabled:(NSUInteger)arg0 ;
-(id)initWithTouch:(id)arg0 dataSource:(id)arg1 delegate:(id)arg2 enabledGestureTypes:(NSUInteger)arg3 ;


@end


#endif