// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIHEADERPOCKETVIEW_H
#define CCUIHEADERPOCKETVIEW_H

@class UIView, SBUIChevronView, NSString;
@protocol CCUIHeaderPocketViewSensorAttributionDelegate, CCUISensorAttributionCompactControlDelegate, OS_dispatch_group, CCUIStatusBarDelegate;


#import "CCUISensorAttributionCompactControl.h"
#import "CCUISensorAttributionExpandedViewController.h"
#import "CCUIStatusBar.h"

@interface CCUIHeaderPocketView : UIView <CCUIHeaderPocketViewSensorAttributionDelegate, CCUISensorAttributionCompactControlDelegate>

 {
    UIView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    CCUISensorAttributionCompactControl *_compactSensorAttributionControl;
    CCUISensorAttributionExpandedViewController *_sensorAttributionExpandedViewController;
    UIView *_sensorAttributionExpandedWrapperView;
    CGFloat _sensorAttributionControlTouchDownDate;
    UIEdgeInsets _sensorAttributionEdgeInsets;
    NSObject<OS_dispatch_group> *_expandedViewControllerCloseDispatchGroup;
}


@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (nonatomic) CGFloat chevronAlpha; // ivar: _chevronAlpha
@property (nonatomic) NSUInteger chevronState;
@property (nonatomic) CGAffineTransform compactScaleTransform;
@property (nonatomic) CGFloat contentAlphaMultiplier; // ivar: _contentAlphaMultiplier
@property (readonly, nonatomic) CGRect contentBounds;
@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (nonatomic) UIView *customBackgroundView; // ivar: _customBackgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CCUIHeaderPocketViewSensorAttributionDelegate> *headerPocketViewDelegate; // ivar: _headerPocketViewDelegate
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) CGFloat sensorStatusViewAlpha; // ivar: _sensorStatusViewAlpha
@property (readonly, nonatomic) CCUIStatusBar *statusBar; // ivar: _statusBar
@property (nonatomic) CGFloat statusBarAlpha; // ivar: _statusBarAlpha
@property (weak, nonatomic) NSObject<CCUIStatusBarDelegate> *statusBarDelegate; // ivar: _statusBarDelegate
@property (retain, nonatomic) UIView *statusLabelView; // ivar: _statusLabelView
@property (readonly) Class superclass;
@property (nonatomic) CGFloat verticalContentTranslation; // ivar: _verticalContentTranslation


-(BOOL)hitTestedViewIsCompactSensorAttributionView:(id)arg0 ;
-(BOOL)isDisplayingSensorStatus;
-(BOOL)isSensorAttributionViewControllerExpanded;
-(CGFloat)additionalHeightForOrientation:(NSInteger)arg0 ;
-(CGFloat)yOriginForCompactControlForFrame:(struct CGRect )arg0 ;
-(id)_newDefaultBackgroundView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )compactModeFrameForSensorView;
-(void)_preheatEntityIconsForAttributions:(id)arg0 ;
-(void)_setHeaderBackgroundView:(id)arg0 ;
-(void)_updateAlpha;
-(void)_updateContentTransform;
-(void)addSensorAttributionViewControllerAsChildOfViewController:(id)arg0 ;
-(void)didCloseExpandedSensorAttributionViewController;
-(void)dismissSensorAttributionExpandedView:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleCompactControlCompactionEvent;
-(void)handleCompactControlExpansionEvent;
-(void)handleCompactControlTouchBeganEvent;
-(void)layoutSubviews;
-(void)sensorAttributionsChanged:(id)arg0 ;
-(void)setSensorAttributionEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)willOpenExpandedSensorAttributionViewController;


@end


#endif