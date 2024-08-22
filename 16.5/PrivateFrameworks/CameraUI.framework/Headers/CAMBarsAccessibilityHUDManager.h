// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMBARSACCESSIBILITYHUDMANAGER_H
#define CAMBARSACCESSIBILITYHUDMANAGER_H

@class UILongPressGestureRecognizer, NSString, UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider>;
@protocol UIGestureRecognizerDelegate, CAMBarsAccessibilityHUDManagerDelegate;

#import <Foundation/Foundation.h>


@interface CAMBarsAccessibilityHUDManager : NSObject <UIGestureRecognizerDelegate>



@property (retain, nonatomic, setter=_setAccessibilityLongPressGestureRecognizer:) UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer; // ivar: __accessibilityLongPressGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMBarsAccessibilityHUDManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider> *view; // ivar: _view


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithView:(id)arg0 delegate:(id)arg1 cancelsTouchesInView:(BOOL)arg2 ;
-(struct CGPoint )locationOfAccessibilityGestureInView:(id)arg0 ;
-(void)_handleAccessibilityLongPressGesture:(id)arg0 ;
-(void)preferredContentSizeChanged;


@end


#endif