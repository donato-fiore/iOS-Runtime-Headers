// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDBASEDTEXTSELECTIONGESTURECONTROLLER_H
#define _UIKEYBOARDBASEDTEXTSELECTIONGESTURECONTROLLER_H

@class UIKeyboardTextSelectionGestureController;



@interface _UIKeyboardBasedTextSelectionGestureController : UIKeyboardTextSelectionGestureController

@property (nonatomic) BOOL delayForceMagnify; // ivar: _delayForceMagnify
@property (nonatomic) BOOL didLongForcePress; // ivar: _didLongForcePress


+(id)sharedInstance;
-(BOOL)allowOneFingerDeepPress;
-(BOOL)oneFingerForcePressShouldCancelTouchesInView;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(CGFloat)oneFingerForcePressMinimumDuration;
-(Class)textInteractionClass;
-(void)_cleanupDeadGesturesIfNecessary;


@end


#endif