// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIREMOTEALERTSERVICEVIEWCONTROLLER_H
#define SBUIREMOTEALERTSERVICEVIEWCONTROLLER_H

@class UIViewController;
@protocol SBUIRemoteAlertServiceInterface_Internal, SBUIRemoteAlertServiceInterface;



@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface_Internal, SBUIRemoteAlertServiceInterface>

 {
    BOOL _hasPreservedInputViews;
    BOOL _hasSentAnimationFence;
}




+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_selectorIsOverriden:(SEL)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didInvalidateForRemoteAlert;
-(void)didTransitionToAttachedToWindowedAccessory:(BOOL)arg0 windowedAccessoryCutoutFrameInScreen:(struct CGRect )arg1 ;
-(void)handleButtonActions:(id)arg0 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)noteActivatedForActivityContinuationWithIdentifier:(id)arg0 ;
-(void)prepareForActivationWithContext:(id)arg0 completion:(id)arg1 ;
-(void)sb_becomeFirstResponder;
-(void)sb_dismissForAlertAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)sb_presentForAlertAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)sb_preserveInputViewsAnimated:(BOOL)arg0 ;
-(void)sb_resignFirstResponder;
-(void)sb_restoreInputViewsAnimated:(BOOL)arg0 ;
-(void)setUserInfo:(id)arg0 ;
-(void)synchronizeAnimationsInActions:(id)arg0 ;


@end


#endif