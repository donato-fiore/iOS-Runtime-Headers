// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIFACEIDSPLASHVIEWCONTROLLER_H
#define BKUIFACEIDSPLASHVIEWCONTROLLER_H

@class OBWelcomeController, OBAnimationController, OBTrayButton, BKDevice;



@interface BKUIFaceIDSplashViewController : OBWelcomeController

@property (retain, nonatomic) OBAnimationController *animationController; // ivar: _animationController
@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) BKDevice *device; // ivar: _device
@property (copy, nonatomic) id *endEnrollActionPrimary; // ivar: _endEnrollActionPrimary
@property (copy, nonatomic) id *endEnrollActionSecondary; // ivar: _endEnrollActionSecondary
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (nonatomic) BOOL isDemo; // ivar: _isDemo
@property (retain, nonatomic) OBTrayButton *skipButton; // ivar: _skipButton


// -(id)initInBuddy:(BOOL)arg0 isDemo:(BOOL)arg1 bkDevice:(id)arg2 withEndEnrollmentActionPrimary:(id)arg3 enrollmentActionSecondary:(unk)arg4  ;
-(void)_didSelectEnroll;
-(void)_didSelectSkip;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif