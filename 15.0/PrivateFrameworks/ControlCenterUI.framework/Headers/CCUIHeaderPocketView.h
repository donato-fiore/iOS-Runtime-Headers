// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUIHEADERPOCKETVIEW_H
#define CCUIHEADERPOCKETVIEW_H

@class UIView, SBUIChevronView;
@protocol CCUIStatusBarDelegate;


#import "CCUISensorStatusView.h"
#import "CCUIStatusBar.h"

@interface CCUIHeaderPocketView : UIView {
    UIView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
}


@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (nonatomic) CGFloat chevronAlpha; // ivar: _chevronAlpha
@property (nonatomic) NSUInteger chevronState;
@property (nonatomic) CGAffineTransform compactScaleTransform;
@property (nonatomic) CGFloat contentAlphaMultiplier; // ivar: _contentAlphaMultiplier
@property (readonly, nonatomic) CGRect contentBounds;
@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (nonatomic) UIView *customBackgroundView; // ivar: _customBackgroundView
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) CCUISensorStatusView *sensorStatusView; // ivar: _sensorStatusView
@property (nonatomic) CGFloat sensorStatusViewAlpha; // ivar: _sensorStatusViewAlpha
@property (readonly, nonatomic) CCUIStatusBar *statusBar; // ivar: _statusBar
@property (nonatomic) CGFloat statusBarAlpha; // ivar: _statusBarAlpha
@property (weak, nonatomic) NSObject<CCUIStatusBarDelegate> *statusBarDelegate; // ivar: _statusBarDelegate
@property (retain, nonatomic) UIView *statusLabelView; // ivar: _statusLabelView
@property (nonatomic) CGFloat verticalContentTranslation; // ivar: _verticalContentTranslation


-(CGFloat)additionalHeightForOrientation:(NSInteger)arg0 ;
-(id)_newDefaultBackgroundView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setHeaderBackgroundView:(id)arg0 ;
-(void)_updateAlpha;
-(void)_updateContentTransform;
-(void)addSensorStatusForStatusType:(NSUInteger)arg0 sensorActivityData:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeSensorStatusForSensorType:(NSUInteger)arg0 ;


@end


#endif