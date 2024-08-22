// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTPHRASEBOUNDARYINTERACTION_H
#define UITEXTPHRASEBOUNDARYINTERACTION_H

@protocol UITextCursorAssertion;


#import "UITextInteraction.h"
#import "UITextGestureTuning.h"

@interface UITextPhraseBoundaryInteraction : UITextInteraction {
    UITextGestureTuning *_gestureTuning;
    id<UITextCursorAssertion> *_blinkAssertion;
}




-(id)_phraseBoundaryGestureRecognizer;
-(id)initWithTextInput:(id)arg0 ;
-(struct CGPoint )pointIfPlacedCarefully:(struct CGPoint )arg0 ;
-(struct CGPoint )touchAlignedPointForPoint:(struct CGPoint )arg0 translation:(struct CGPoint )arg1 ;
-(void)_createGestureTuningIfNecessary;
-(void)_phraseBoundaryGesture:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)updateVisibilityOffsetForGesture:(id)arg0 ;


@end


#endif