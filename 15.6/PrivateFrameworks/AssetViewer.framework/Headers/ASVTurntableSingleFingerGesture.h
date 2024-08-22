// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVTURNTABLESINGLEFINGERGESTURE_H
#define ASVTURNTABLESINGLEFINGERGESTURE_H

@protocol ASVTurntableSingleFingerGestureDelegate;


#import "ASVSingleFingerGesture.h"

@interface ASVTurntableSingleFingerGesture : ASVSingleFingerGesture

@property (weak, nonatomic) NSObject<ASVTurntableSingleFingerGestureDelegate> *turntableDelegate; // ivar: _turntableDelegate


-(id)initWithTouch:(id)arg0 dataSource:(id)arg1 turntableDelegate:(id)arg2 enabledGestureTypes:(NSUInteger)arg3 ;
-(void)finishGesture;
-(void)updateGesture;
-(void)updatePan;


@end


#endif