// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCTARGETSELECTIONBROWSERVIEWCONTROLLER_H
#define DOCTARGETSELECTIONBROWSERVIEWCONTROLLER_H

@class UINavigationController, DOCConfiguration, NSString, NSURL, NSArray, UIViewController<DOCRemoteAppearanceInterface>, _UIResilientRemoteViewContainerViewController;
@protocol DOCHostTargetSelectionBrowserViewControllerProxy, DOCAppearanceCustomization, DOCRemoteViewControllerDelegate, DOCKeyCommandDismissible, DOCServiceTargetSelectionBrowserViewControllerProxy, DOCTargetSelectionBrowserViewControllerDelegate;


#import "DOCAppearance.h"

@interface DOCTargetSelectionBrowserViewController : UINavigationController <DOCHostTargetSelectionBrowserViewControllerProxy, DOCAppearanceCustomization, DOCRemoteViewControllerDelegate, DOCKeyCommandDismissible>



@property (retain, nonatomic) DOCConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *directoryURLToReveal; // ivar: _directoryURLToReveal
@property (readonly) DOCAppearance *effectiveAppearance;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) DOCAppearance *lastAppearance; // ivar: _lastAppearance
@property (retain, nonatomic) UIViewController<DOCRemoteAppearanceInterface> *localViewController; // ivar: _localViewController
@property (retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSObject<DOCServiceTargetSelectionBrowserViewControllerProxy> *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<DOCTargetSelectionBrowserViewControllerDelegate> *targetSelectionDelegate; // ivar: _targetSelectionDelegate
@property (retain, nonatomic) NSArray *urls; // ivar: _urls


-(id)initForExportingWithConfiguration:(id)arg0 ;
-(id)initForPickingFolderWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 items:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 urls:(id)arg1 ;
-(id)remoteInterface;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_dismissWithBlock:(id)arg0 ;
-(void)_performDismiss:(id)arg0 ;
-(void)_updateNavigationBar;
-(void)cancelPresentation;
-(void)dismissViewController;
-(void)effectiveAppearanceDidChange:(id)arg0 ;
-(void)filesExportedAtURLs:(id)arg0 ;
-(void)notifyDelegateOfCancellation;
-(void)remoteViewController:(id)arg0 didTerminateViewServiceWithError:(id)arg1 ;
-(void)setURLs:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif