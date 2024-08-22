// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDLAYOUTALIGNMENTVIEW_H
#define _UIKEYBOARDLAYOUTALIGNMENTVIEW_H

@class NSLayoutConstraint;


#import "UIView.h"

@interface _UIKeyboardLayoutAlignmentView : UIView {
    CGRect lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
}


@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled; // ivar: _automaticKeyboardFrameTrackingDisabled


+(BOOL)_shouldIgnoreFrameChangeNotification:(id)arg0 inView:(id)arg1 ;
+(struct CGRect )_endFrameForNotification:(id)arg0 inView:(id)arg1 ;
+(struct CGRect )_frameInBoundsForKeyboardFrame:(struct CGRect )arg0 inView:(id)arg1 ;
-(BOOL)_shouldOverrideAnimationForFrameChangeNotification:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameInBoundsForKeyboardFrame:(struct CGRect )arg0 ;
-(void)_createConstraints;
-(void)_keyboardChanged:(id)arg0 ;
-(void)_matchInitialKeyboardFrame;
-(void)_removeConstraints;
-(void)_startObservingKeyboardNotificationsForScreen:(id)arg0 ;
-(void)_stopObservingKeyboardNotifications;
-(void)_updateConstraintsForKeyboardNotification:(id)arg0 ;
-(void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif