// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFOCUSCONFIGURATIONVIEWCONTROLLER_H
#define WFFOCUSCONFIGURATIONVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, UIStackView, NSExtension;
@protocol WFFocusConfigurationRemoteViewControllerDelegate, WFFocusConfigurationViewControllerDelegate, NSCopying;


#import "WFFocusConfigurationRemoteViewController.h"
#import "WFFocusConfigurationRequest.h"

@interface WFFocusConfigurationViewController : UIViewController <WFFocusConfigurationRemoteViewControllerDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFFocusConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIStackView *errorStackView; // ivar: _errorStackView
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSObject<NSCopying> *extensionRequest; // ivar: _extensionRequest
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFFocusConfigurationRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) WFFocusConfigurationRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(id)_containedRemoteViewController;
-(id)initWithContextualActionOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)clearAllViews;
-(void)dealloc;
-(void)embedRemoteViewController:(id)arg0 withExtension:(id)arg1 extensionRequest:(id)arg2 ;
-(void)focusConfigurationRemoteViewController:(id)arg0 configurationUIStateDidChange:(id)arg1 ;
-(void)focusConfigurationRemoteViewController:(id)arg0 didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect )arg2 ;
-(void)installRemoteViewController:(id)arg0 ;
-(void)loadFocusConfigurationRemoteViewController;
-(void)loadFocusConfigurationUI;
-(void)notifyDelegateWithPressedButtonIdentifier:(id)arg0 cellFrame:(struct CGRect )arg1 ;
-(void)notifyDelegateWithUIState:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)showErrorMessage:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif