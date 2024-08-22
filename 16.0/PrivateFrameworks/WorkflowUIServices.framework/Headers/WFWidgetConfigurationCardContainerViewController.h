// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETCONFIGURATIONCARDCONTAINERVIEWCONTROLLER_H
#define WFWIDGETCONFIGURATIONCARDCONTAINERVIEWCONTROLLER_H

@class UIViewController, UIColor, NSString, MTVisualStylingProvider;
@protocol WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationContainerViewDelegate, WFWidgetConfigurationContainerViewControllerProtocol, WFWidgetConfigurationContainerViewControllerProtocolDelegate;


#import "WFWidgetConfigurationCardView.h"
#import "WFWidgetConfigurationContainerView.h"
#import "WFWidgetConfigurationRequest.h"

@interface WFWidgetConfigurationCardContainerViewController : UIViewController <WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationContainerViewDelegate, WFWidgetConfigurationContainerViewControllerProtocol>



@property (retain) WFWidgetConfigurationCardView *cardView; // ivar: _cardView
@property (nonatomic) CGRect configurationCardViewFrame;
@property (retain, nonatomic) UIColor *containerBackgroundColor;
@property (weak, nonatomic) NSObject<WFWidgetConfigurationContainerViewControllerProtocolDelegate> *containerDelegate; // ivar: _containerDelegate
@property (retain) WFWidgetConfigurationContainerView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MTVisualStylingProvider *fillProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFWidgetConfigurationRequest *request; // ivar: _request
@property (readonly, nonatomic) MTVisualStylingProvider *strokeProvider;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger widgetConfigurationStyle; // ivar: _widgetConfigurationStyle


-(id)configurationView;
-(id)initWithRequest:(id)arg0 contentViewController:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUserInterfaceStyle;
-(void)viewDidLoad;
-(void)widgetConfigurationCardViewDidRequestToClose:(id)arg0 ;
-(void)widgetConfigurationContainerViewUserInterfaceStyleDidChange:(id)arg0 ;


@end


#endif