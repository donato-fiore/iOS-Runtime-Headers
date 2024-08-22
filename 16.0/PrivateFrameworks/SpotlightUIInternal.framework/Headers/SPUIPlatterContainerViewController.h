// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUIPLATTERCONTAINERVIEWCONTROLLER_H
#define SPUIPLATTERCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, UIGestureRecognizer, NUIContainerBoxView;
@protocol NUIContainerViewDelegate, UIGestureRecognizerDelegate, SPUINavigationControllerDelegate;


#import "SPUINavigationController.h"

@interface SPUIPlatterContainerViewController : UIViewController <NUIContainerViewDelegate, UIGestureRecognizerDelegate, SPUINavigationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) SPUINavigationController *navController; // ivar: _navController
@property (retain) UIView *platterBackgroundView; // ivar: _platterBackgroundView
@property (readonly) Class superclass;
@property (retain) UIGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain) NUIContainerBoxView *view;
@property (retain) UIView *visualEffectView; // ivar: _visualEffectView


+(BOOL)isHardwareKeyboardAttached;
-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithNavigationController:(id)arg0 ;
-(id)platterVisualEffectView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(struct UIEdgeInsets )layoutMarginsForContainer;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)dealloc;
-(void)hardwareKeyboardAvailabilityChangedAnimated:(BOOL)arg0 ;
-(void)navigationViewDidInvalidateSizeAnimated:(BOOL)arg0 ;


@end


#endif