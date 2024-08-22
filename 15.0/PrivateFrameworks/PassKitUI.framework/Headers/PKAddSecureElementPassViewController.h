// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDSECUREELEMENTPASSVIEWCONTROLLER_H
#define PKADDSECUREELEMENTPASSVIEWCONTROLLER_H

@class UIViewController, PKAddSecureElementPassConfiguration, _UIAsyncInvocation, NSString;
@protocol PKRemoteAddSecureElementPassViewControllerProtocol, PKAddSecureElementPassViewControllerDelegate;


#import "PKRemoteAddSecureElementPassViewController.h"

@interface PKAddSecureElementPassViewController : UIViewController <PKRemoteAddSecureElementPassViewControllerProtocol>

 {
    PKAddSecureElementPassConfiguration *_configuration;
    uint8_t _finished;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteAddSecureElementPassViewController *_remoteVC;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddSecureElementPassViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddSecureElementPassWithConfiguration:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)didFinishWithPass:(id)arg0 error:(id)arg1 ;
-(void)didFinishWithPasses:(id)arg0 error:(id)arg1 ;
-(void)loadRemoteViewController;
-(void)loadView;
-(void)setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif