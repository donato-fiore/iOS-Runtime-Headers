// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETCONFIGURATIONCONTAINERVIEWCONTROLLER_H
#define WFWIDGETCONFIGURATIONCONTAINERVIEWCONTROLLER_H

@class UINavigationController, MTStylingProvidingSolidColorView, UIColor, UIViewController, NSString, MTVisualStylingProvider;
@protocol WFWidgetConfigurationContainerViewControllerProtocol, WFWidgetConfigurationContainerViewControllerProtocolDelegate;


#import "WFWidgetConfigurationRequest.h"

@interface WFWidgetConfigurationContainerViewController : UINavigationController <WFWidgetConfigurationContainerViewControllerProtocol>



@property (readonly, nonatomic) MTStylingProvidingSolidColorView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (weak, nonatomic) NSObject<WFWidgetConfigurationContainerViewControllerProtocolDelegate> *containerDelegate; // ivar: _containerDelegate
@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider; // ivar: _fillProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFWidgetConfigurationRequest *request; // ivar: _request
@property (readonly, nonatomic) MTVisualStylingProvider *strokeProvider; // ivar: _strokeProvider
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 contentViewController:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif