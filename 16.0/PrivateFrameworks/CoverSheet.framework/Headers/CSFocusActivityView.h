// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSFOCUSACTIVITYVIEW_H
#define CSFOCUSACTIVITYVIEW_H

@class UIView, NSString, _UILegibilitySettings;
@protocol SBUILegibility, FCActivityDescribing, CSFocusActivityViewDelegate;


#import "CSCoverSheetViewBase.h"
#import "CSFocusActivityIndicator.h"

@interface CSFocusActivityView : CSCoverSheetViewBase <SBUILegibility>

 {
    CSFocusActivityIndicator *_activityIndicator;
}


@property (retain, nonatomic) NSObject<FCActivityDescribing> *activity;
@property (readonly, nonatomic) UIView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSFocusActivityViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActivityIndicatorVisible;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) CGFloat strength;
@property (readonly) Class superclass;


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addActivityIndicatorTargetActions;
-(void)_handleButtonPress:(id)arg0 ;
-(void)_handleButtonTouchBegan:(id)arg0 ;
-(void)_handleButtonTouchEnded:(id)arg0 ;
-(void)_removeActivityIndicatorTargetActions;
-(void)dealloc;
-(void)layoutSubviews;
-(void)removeIndicator;


@end


#endif