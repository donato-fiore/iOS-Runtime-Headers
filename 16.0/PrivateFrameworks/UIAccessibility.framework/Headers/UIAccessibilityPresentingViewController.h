// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACCESSIBILITYPRESENTINGVIEWCONTROLLER_H
#define UIACCESSIBILITYPRESENTINGVIEWCONTROLLER_H

@class UIViewController, UIWindow;



@interface UIAccessibilityPresentingViewController : UIViewController {
    UIWindow *_presentationWindow;
}




-(id)init;
-(void)_cleanUpPresentationWindow;
-(void)_voiceOverStatusChanged;
-(void)dealloc;
-(void)dismissViewControllerWithTransition:(int)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif