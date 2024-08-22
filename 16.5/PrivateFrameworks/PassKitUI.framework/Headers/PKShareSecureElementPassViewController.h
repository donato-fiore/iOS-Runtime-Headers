// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARESECUREELEMENTPASSVIEWCONTROLLER_H
#define PKSHARESECUREELEMENTPASSVIEWCONTROLLER_H

@class UIViewController, PKSecureElementPass, _UIAsyncInvocation, NSString;
@protocol PKClientShareSecureElementPassViewControllerDelegate, PKShareSecureElementPassViewControllerDelegate;


#import "WrappedRemoteViewController.h"

@interface PKShareSecureElementPassViewController : UIViewController <PKClientShareSecureElementPassViewControllerDelegate>

 {
    PKSecureElementPass *_pass;
    NSUInteger _environment;
    BOOL _isFromPeopleScreen;
    BOOL _remoteVCConfigured;
    _UIAsyncInvocation *_remoteVCRequest;
    WrappedRemoteViewController *_remoteVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKShareSecureElementPassViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL promptToShareURL; // ivar: _promptToShareURL
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)shouldViewControllerBeAnimatedIn;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)init;
-(id)initWithSecureElementPass:(id)arg0 delegate:(id)arg1 ;
-(id)initWithSecureElementPass:(id)arg0 environment:(NSUInteger)arg1 isFromPeopleScreen:(BOOL)arg2 delegate:(id)arg3 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_addRemoteVCToView;
-(void)_remoteDidGetConfigured;
-(void)dealloc;
-(void)didCreateShareURL:(id)arg0 activationCode:(id)arg1 error:(id)arg2 ;
-(void)didFinishShareWithDidUserShare:(BOOL)arg0 error:(id)arg1 ;
-(void)loadRemoteViewController;
-(void)loadView;
-(void)setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif