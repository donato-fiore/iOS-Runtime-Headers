// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKADDPASSESREMOTEALERTVIEWCONTROLLER_H
#define PKADDPASSESREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController, NSString;
@protocol PKServiceAddPassesViewControllerResultsDelegate, UIAdaptivePresentationControllerDelegate;


#import "PKServiceAddPassesViewController.h"

@interface PKAddPassesRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKServiceAddPassesViewControllerResultsDelegate, UIAdaptivePresentationControllerDelegate>

 {
    PKServiceAddPassesViewController *_controller;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_isSecureForRemoteViewService;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(void)_dismiss;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)didInvalidateForRemoteAlert;
-(void)handleButtonActions:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewController:(id)arg0 ingestionDidFinishWithResult:(NSUInteger)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif