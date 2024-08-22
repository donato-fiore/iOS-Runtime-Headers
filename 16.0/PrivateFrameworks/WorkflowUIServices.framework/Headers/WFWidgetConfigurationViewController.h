// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETCONFIGURATIONVIEWCONTROLLER_H
#define WFWIDGETCONFIGURATIONVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, UIViewController<WFWidgetConfigurationContainerViewControllerProtocol>, NSString, NSExtension;
@protocol _UIRemoteViewControllerContaining, WFWidgetConfigurationRemoteViewControllerDelegate, WFWidgetConfigurationViewControllerDelegate, NSCopying;


#import "WFWidgetConfigurationView.h"
#import "WFWidgetConfigurationLoadingContentViewController.h"
#import "WFWidgetConfigurationRemoteViewController.h"
#import "WFWidgetConfigurationRequest.h"

@interface WFWidgetConfigurationViewController : UIViewController <_UIRemoteViewControllerContaining, WFWidgetConfigurationRemoteViewControllerDelegate>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, nonatomic) WFWidgetConfigurationView *configurationView;
@property (readonly, nonatomic) UIViewController<WFWidgetConfigurationContainerViewControllerProtocol> *containerViewController; // ivar: _containerViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWidgetConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSObject<NSCopying> *extensionRequest; // ivar: _extensionRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFWidgetConfigurationLoadingContentViewController *loadingContentViewController; // ivar: _loadingContentViewController
@property (nonatomic) CGSize preferredContentSize;
@property (retain, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly, nonatomic) WFWidgetConfigurationRequest *request; // ivar: _request
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finishWithCurrentConfiguration;
-(void)installRemoteViewController:(id)arg0 ;
-(void)loadView;
-(void)loadWidgetConfigurationRemoteViewController;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)showErrorMessage;
-(void)viewDidLoad;
-(void)widgetConfigurationCardViewDidRequestToClose:(id)arg0 ;
-(void)widgetConfigurationRemoteViewController:(id)arg0 didReceiveConfiguredIntent:(id)arg1 ;


@end


#endif