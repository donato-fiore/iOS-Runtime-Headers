// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARSENSORACTIVITYVIEW_H
#define _UISTATUSBARSENSORACTIVITYVIEW_H

@class NSString;
@protocol _UIStatusBarDisplayable;


#import "UIView.h"
#import "UIAccessibilityHUDItem.h"
#import "_UIPortalView.h"

@interface _UIStatusBarSensorActivityView : UIView <_UIStatusBarDisplayable>



@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger overriddenVerticalAlignment;
@property (retain, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (retain, nonatomic) UIView *sensorActivityView; // ivar: _sensorActivityView
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsCrossfade;


-(struct CGSize )intrinsicContentSize;
-(void)configurePortalViewIfNeeded;
-(void)configureSensorViewWithoutPortalIfNeeded;


@end


#endif