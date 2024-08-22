// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWIDGETCONFIGURATIONVIEWCONTROLLER_H
#define WFWIDGETCONFIGURATIONVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSString, NSExtension;
@protocol _UIRemoteViewControllerContaining, WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationRemoteViewControllerDelegate, WFWidgetConfigurationViewControllerDelegate, NSCopying;


#import "WFWidgetConfigurationHostCardView.h"
#import "WFWidgetConfigurationView.h"
#import "WFWidgetConfigurationRemoteViewController.h"
#import "WFWidgetConfigurationRequest.h"

@interface WFWidgetConfigurationViewController : UIViewController <_UIRemoteViewControllerContaining, WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationRemoteViewControllerDelegate>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, weak, nonatomic) WFWidgetConfigurationHostCardView *cardView; // ivar: _cardView
@property (readonly, nonatomic) WFWidgetConfigurationView *configurationView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWidgetConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) NSObject<NSCopying> *extensionRequest; // ivar: _extensionRequest
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize preferredContentSize;
@property (readonly, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController; // ivar: _remoteViewController
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