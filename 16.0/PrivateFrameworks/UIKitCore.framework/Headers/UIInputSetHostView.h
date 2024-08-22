// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTSETHOSTVIEW_H
#define UIINPUTSETHOSTVIEW_H



#import "UIView.h"

@interface UIInputSetHostView : UIView



+(BOOL)_notifyOnExplicitLayout;
+(BOOL)_shouldHitTestInputViewFirst;
+(BOOL)requiresConstraintBasedLayout;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(NSUInteger)_clipCornersOfView:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)_didChangeKeyplaneWithContext:(id)arg0 ;
-(void)_updateSafeAreaInsets;
-(void)layoutIfNeeded;


@end


#endif