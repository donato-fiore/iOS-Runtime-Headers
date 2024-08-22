// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASVCONTROLSVIEW_H
#define ASVCONTROLSVIEW_H

@class UIView, NSString, UIAccessibilityHUDGestureManager, UIStackView;
@protocol UIAccessibilityHUDGestureDelegate;



@interface ASVControlsView : UIView <UIAccessibilityHUDGestureDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIAccessibilityHUDGestureManager *largeTextHUDGestureManager; // ivar: _largeTextHUDGestureManager
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)_buttonAtPoint:(struct CGPoint )arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;


@end


#endif