// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVWORLDSINGLEFINGERGESTURE_H
#define ASVWORLDSINGLEFINGERGESTURE_H

@protocol ASVWorldSingleFingerGestureDelegate;


#import "ASVSingleFingerGesture.h"
#import "ASVWorldGestureDragOffsetCorrector.h"

@interface ASVWorldSingleFingerGesture : ASVSingleFingerGesture

@property (retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector; // ivar: _dragOffsetCorrector
@property (weak, nonatomic) NSObject<ASVWorldSingleFingerGestureDelegate> *worldDelegate; // ivar: _worldDelegate


-(float)potentialAssetDistanceFromInitialLocationOnScreen;
-(id)initWithTouch:(id)arg0 dataSource:(id)arg1 worldDelegate:(id)arg2 enabledGestureTypes:(NSUInteger)arg3 ;
-(void)finishGesture;
-(void)updateGesture;
-(void)updateTranslation;


@end


#endif