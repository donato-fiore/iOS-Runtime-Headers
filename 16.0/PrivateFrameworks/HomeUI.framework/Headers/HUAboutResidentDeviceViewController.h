// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUABOUTRESIDENTDEVICEVIEWCONTROLLER_H
#define HUABOUTRESIDENTDEVICEVIEWCONTROLLER_H

@class UIViewController, UIImageView, NSArray, UILabel, UIScrollView, UIView;
@protocol HUAboutResidentDeviceViewControllerDelegate;


#import "HUGridLayoutOptions.h"

@interface HUAboutResidentDeviceViewController : UIViewController

@property (retain, nonatomic) UIImageView *atvImageView; // ivar: _atvImageView
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (weak, nonatomic) NSObject<HUAboutResidentDeviceViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *homeHubTextLabel; // ivar: _homeHubTextLabel
@property (retain, nonatomic) UIImageView *homePodImageView; // ivar: _homePodImageView
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIView *statusBarBackgroundView; // ivar: _statusBarBackgroundView
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)atvImageToTextBaselineConstantForViewSizeSubclass:(NSInteger)arg0 ;
+(CGFloat)subtitleBaselineToATVImageConstant;
-(BOOL)_shouldShowNavigationBar;
-(BOOL)useNavigationBarForAutomationTabStyle;
-(id)_backgroundColor;
-(id)_defaultLayoutOptionsForViewSize:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)_createSubviews;
-(void)_done:(id)arg0 ;
-(void)_setNavigationBarVisibility;
-(void)updateViews;
-(void)updateViewsAndConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif