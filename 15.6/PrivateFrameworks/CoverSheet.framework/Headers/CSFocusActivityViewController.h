// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSFOCUSACTIVITYVIEWCONTROLLER_H
#define CSFOCUSACTIVITYVIEWCONTROLLER_H

@class UIView, NSString, NSArray;
@protocol CSFocusActivityViewDelegate, CSActivityPickerViewControllerDelegate, PTSettingsKeyObserver, CSAdjunctItemHosting, FCActivityDescribing, CSFocusActivityViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"
#import "CSActivityPickerViewController.h"

@interface CSFocusActivityViewController : CSCoverSheetViewControllerBase <CSFocusActivityViewDelegate, CSActivityPickerViewControllerDelegate, PTSettingsKeyObserver, CSAdjunctItemHosting>

 {
    CGSize _containerSize;
}


@property (retain, nonatomic) NSObject<FCActivityDescribing> *activity; // ivar: _activity
@property (readonly, nonatomic) UIView *activityIndicator;
@property (readonly, nonatomic) CSActivityPickerViewController *activityPickerViewController; // ivar: _activityPickerViewController
@property (nonatomic) CGFloat containerCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSFocusActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActivityIndicatorVisible;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


+(Class)viewClass;
-(BOOL)_canShowWhileLocked;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)usesBackgroundView;
-(id)activityPickerViewControllerPresentingView:(id)arg0 ;
-(id)activityPickerViewControllerRepresentedActivityForDismissal:(id)arg0 ;
-(id)activityPickerViewControllerRepresentedActivityForPresentation:(id)arg0 ;
-(void)_removeActivityViewIndicatorIfNecessary;
-(void)_updateActivityViewActivity;
-(void)_updateActivityViewBehavior;
-(void)_updateActivityViewLegibility;
-(void)_updatePreferredContentSize;
-(void)focusActivityViewIndicatorDidChangeToVisible:(BOOL)arg0 ;
-(void)focusActivityViewIndicatorPressed:(id)arg0 ;
-(void)setContainerSize:(struct CGSize )arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif