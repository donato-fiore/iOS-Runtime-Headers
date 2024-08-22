// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFSTATUSBARLEGIBILITYVIEW_H
#define SBFSTATUSBARLEGIBILITYVIEW_H

@class UIView, NSString, UIImageView, _UILegibilitySettings;
@protocol SBUILegibility;



@interface SBFStatusBarLegibilityView : UIView <SBUILegibility>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceLegibilityGradientHidden; // ivar: _forceLegibilityGradientHidden
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *leftCornerView; // ivar: _leftCornerView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) UIImageView *rightCornerView; // ivar: _rightCornerView
@property (retain, nonatomic) UIView *statusBarGradientView; // ivar: _statusBarGradientView
@property (nonatomic) CGFloat strength;
@property (readonly) Class superclass;


+(id)gradientViewWithOpacities:(*CGFloat)arg0 locations:(id)arg1 ;
-(void)_configureAsPad;
-(void)_configureAsPhone;
-(void)_configureWithLegibilitySettings:(id)arg0 forceLegibilityGradientHidden:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif