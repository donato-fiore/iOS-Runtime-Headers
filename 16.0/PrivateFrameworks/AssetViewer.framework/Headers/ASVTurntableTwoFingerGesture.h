// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVTURNTABLETWOFINGERGESTURE_H
#define ASVTURNTABLETWOFINGERGESTURE_H

@protocol ASVTurntableTwoFingerGestureDelegate;


#import "ASVTwoFingerGesture.h"

@interface ASVTurntableTwoFingerGesture : ASVTwoFingerGesture

@property (weak, nonatomic) NSObject<ASVTurntableTwoFingerGestureDelegate> *turntableDelegate; // ivar: _turntableDelegate


-(id)initWithFirstTouch:(id)arg0 secondTouch:(id)arg1 dataSource:(id)arg2 turntableDelegate:(id)arg3 ;
-(void)finishGesture;
-(void)updatePanWithFirstTouchLocationsecondTouchLocationmidPoint;


@end


#endif