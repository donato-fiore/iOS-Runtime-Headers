// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPERFORMACTIONSETUPVIEWCONTROLLER_H
#define PKPERFORMACTIONSETUPVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, NSString;
@protocol PKPerformActionSetupViewControllerDelegate;


#import "PKRemotePerformActionSetupViewController.h"

@interface PKPerformActionSetupViewController : UIViewController {
    PKRemotePerformActionSetupViewController *_remoteVC;
    _UIAsyncInvocation *_remoteVCRequest;
    NSString *_passIdentifier;
    BOOL _explicitPresentationStyle;
}


@property (weak, nonatomic) NSObject<PKPerformActionSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)init;
-(id)initWithPassIdentifier:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didCancel;
-(void)didFinish;
-(void)loadView;
-(void)updateModalPresentationStyle;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif