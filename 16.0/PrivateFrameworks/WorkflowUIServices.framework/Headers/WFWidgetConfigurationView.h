// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWIDGETCONFIGURATIONVIEW_H
#define WFWIDGETCONFIGURATIONVIEW_H

@class UIView, NSString;
@protocol UIGestureRecognizerDelegate;


#import "WFWidgetConfigurationContainerView.h"
#import "WFWidgetConfigurationRemoteViewController.h"

@interface WFWidgetConfigurationView : UIView <UIGestureRecognizerDelegate>

 {
    CGSize _preferredConfigurationCardViewSize;
}


@property (retain, nonatomic) WFWidgetConfigurationContainerView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect overridingCardViewFrame; // ivar: _overridingCardViewFrame
@property (retain, nonatomic) WFWidgetConfigurationRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 preferredCardSize:(struct CGSize )arg1 ;
-(void)requestDismissal;


@end


#endif