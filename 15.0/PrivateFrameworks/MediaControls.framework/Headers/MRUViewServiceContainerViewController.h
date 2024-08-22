// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVIEWSERVICECONTAINERVIEWCONTROLLER_H
#define MRUVIEWSERVICECONTAINERVIEWCONTROLLER_H

@class UIViewController, MPMediaControlsConfiguration, NSString, MTMaterialView, UIView;
@protocol UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, MRUViewServiceRoutingViewControllerDelegate, MRUViewServiceViewController;


#import "MRUViewServiceRoutingViewController.h"

@interface MRUViewServiceContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, MRUViewServiceRoutingViewControllerDelegate, MRUViewServiceViewController>



@property (retain, nonatomic) MPMediaControlsConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalBlock; // ivar: _dismissalBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTMaterialView *materialView; // ivar: _materialView
@property (retain, nonatomic) MRUViewServiceRoutingViewController *routingViewController; // ivar: _routingViewController
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldPresentUsingPopover;
-(id)init;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)transitionToVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateMaterialForPresenting:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewServiceRoutingViewControllerDidChangeSize:(id)arg0 ;
-(void)viewServiceRoutingViewControllerDidDismiss:(id)arg0 ;


@end


#endif