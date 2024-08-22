// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFKEYBOARDLAYOUTALIGNMENTVIEW_H
#define SFKEYBOARDLAYOUTALIGNMENTVIEW_H

@class UIView, NSNotification, NSLayoutConstraint;



@interface SFKeyboardLayoutAlignmentView : UIView {
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;
    CGRect lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
}


@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled; // ivar: _automaticKeyboardFrameTrackingDisabled


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_frameInBoundsForKeyboardFrame:(struct CGRect )arg0 ;
-(void)_addConstraints;
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