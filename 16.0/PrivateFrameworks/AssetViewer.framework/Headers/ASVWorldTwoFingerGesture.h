// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVWORLDTWOFINGERGESTURE_H
#define ASVWORLDTWOFINGERGESTURE_H

@protocol ASVWorldTwoFingerGestureDelegate;


#import "ASVTwoFingerGesture.h"
#import "ASVWorldGestureDragOffsetCorrector.h"

@interface ASVWorldTwoFingerGesture : ASVTwoFingerGesture

@property (retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector; // ivar: _dragOffsetCorrector
@property (weak, nonatomic) NSObject<ASVWorldTwoFingerGestureDelegate> *worldDelegate; // ivar: _worldDelegate


-(id)initWithFirstTouch:(id)arg0 secondTouch:(id)arg1 dataSource:(id)arg2 worldDelegate:(id)arg3 ;
-(void)finishGesture;
-(void)updatePanWithFirstTouchLocationsecondTouchLocationmidPoint;


@end


#endif