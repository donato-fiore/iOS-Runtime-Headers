// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUIPASSCODECONTAINERVIEW_H
#define AFUIPASSCODECONTAINERVIEW_H

@class UIView, _UIBackdropView, NSString, UIView<SBUIPasscodeLockView>;
@protocol SBUIPasscodeLockViewDelegate, AFUIPasscodeContainerViewDelegate;


#import "AFUIPasscodeBlurView.h"

@interface AFUIPasscodeContainerView : UIView <SBUIPasscodeLockViewDelegate>

 {
    AFUIPasscodeBlurView *_passcodeBlurView;
    NSInteger _mode;
    Class _factoryClass;
}


@property (weak, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AFUIPasscodeContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView<SBUIPasscodeLockView> *lockView; // ivar: _lockView
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger unlockAttemptCount; // ivar: _unlockAttemptCount
@property (copy, nonatomic) id *unlockCompletion; // ivar: _unlockCompletion


+(NSInteger)maxUnlockAttempts;
-(id)initWithFrame:(struct CGRect )arg0 backdropView:(id)arg1 mode:(NSInteger)arg2 passcodeViewFactoryClass:(Class)arg3 ;
-(void)cancelShowingPasscodeUnlock;
-(void)cleanupWithResult:(NSInteger)arg0 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg0 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg0 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg0 ;
// -(void)showPasscodeUnlockWithStatusText:(id)arg0 subtitle:(id)arg1 completionHandler:(id)arg2 unlockCompletionHandler:(unk)arg3  ;


@end


#endif