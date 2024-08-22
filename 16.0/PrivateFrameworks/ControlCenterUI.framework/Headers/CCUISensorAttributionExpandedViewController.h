// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUISENSORATTRIBUTIONEXPANDEDVIEWCONTROLLER_H
#define CCUISENSORATTRIBUTIONEXPANDEDVIEWCONTROLLER_H

@class UIViewController, NSSet, UIView, UITapGestureRecognizer, NSArray, MTMaterialView, UIScrollView;
@protocol CCUIHeaderPocketViewSensorAttributionDelegate;


#import "CCUISensorAttributionCompactControl.h"
#import "CCUISensorAttributionPrivacyHeaderView.h"
#import "CCUISensorAttributionSensorButton.h"

@interface CCUISensorAttributionExpandedViewController : UIViewController {
    BOOL _prepared;
}


@property (retain, nonatomic) NSSet *activeAndRecentSensorActivityData; // ivar: _activeAndRecentSensorActivityData
@property (retain, nonatomic) CCUISensorAttributionCompactControl *clonedCompactControl; // ivar: _clonedCompactControl
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<CCUIHeaderPocketViewSensorAttributionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UITapGestureRecognizer *dismissTapGestureRecognizer; // ivar: _dismissTapGestureRecognizer
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) NSArray *entityAndWebsiteViews; // ivar: _entityAndWebsiteViews
@property (nonatomic) CGFloat firstRowYOffset; // ivar: _firstRowYOffset
@property (retain, nonatomic) MTMaterialView *materialView; // ivar: _materialView
@property (retain, nonatomic) CCUISensorAttributionPrivacyHeaderView *privacyHeaderView; // ivar: _privacyHeaderView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSArray *separatorViews; // ivar: _separatorViews
@property (retain, nonatomic) NSArray *subsequentSensorButtons; // ivar: _subsequentSensorButtons
@property (retain, nonatomic) CCUISensorAttributionSensorButton *topMostCameraButton; // ivar: _topMostCameraButton
@property (retain, nonatomic) CCUISensorAttributionSensorButton *topMostLocButton; // ivar: _topMostLocButton
@property (retain, nonatomic) CCUISensorAttributionSensorButton *topMostMicButton; // ivar: _topMostMicButton


-(BOOL)_cacheTopmostSensorButtonIfNotAlreadySet:(id)arg0 sensorData:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)isExpanded;
-(id)_iconInCompactViewForSensorType:(NSUInteger)arg0 ;
-(id)_makeHeaderSeparatorView;
-(id)_topMostButtons;
-(void)_animateAllSensorButtonsForExpanded:(BOOL)arg0 ;
-(void)_animateBackgroundBlurWeighting:(BOOL)arg0 ;
-(void)_animateCompactControlAlpha:(BOOL)arg0 ;
-(void)_animateEntityAndWebsiteViews:(BOOL)arg0 ;
-(void)_animatePrivacyHeader:(BOOL)arg0 ;
-(void)_animateSeparatorViews:(BOOL)arg0 ;
-(void)_animateSubsequentSensorIcon:(id)arg0 toExpanded:(BOOL)arg1 ;
-(void)_animateTopmostSensorButton:(id)arg0 toExpanded:(BOOL)arg1 ;
-(void)_applyAlphaAndBlurToFirstEntityViewExpanded:(BOOL)arg0 ;
-(void)_applyAlphaAndBlurToSubsequentEntityAndWebsiteViewsExpanded:(BOOL)arg0 ;
-(void)_applyAlphaAndStylingToEntityOrWebsiteView:(id)arg0 expanded:(BOOL)arg1 ;
-(void)_applyCompactAlphaForSensorButton:(id)arg0 isTopMost:(BOOL)arg1 ;
-(void)_applyCompactAppearanceToAllViews;
-(void)_applyCompactLayoutToSensorButton:(id)arg0 ;
-(void)_applyLayoutOfEntityAndWebsiteViewsExpanded:(BOOL)arg0 ;
-(void)_applyPrivacyHeaderAlphaAndBlurRadius:(BOOL)arg0 ;
-(void)_applyPrivacyHeaderLayoutExpanded:(BOOL)arg0 ;
-(void)_applySeparatorAlphaExpanded:(BOOL)arg0 ;
-(void)_applySeparatorsLayoutExpanded:(BOOL)arg0 ;
-(void)_cachePrivacyHeaderExpandedLayout;
-(void)_clonedPillButtonPressed:(id)arg0 ;
-(void)_recreateViewsForAttributionsAndCacheExpandedFrames;
-(void)_reduceMotionPrepareForPresentation;
-(void)_reduceMotionSetExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_removeClonedCompactPillViewAndNotifyDelegate;
-(void)_showClonedCompactControl:(id)arg0 ;
-(void)prepareForInteractionWithClonedCompactControl:(id)arg0 ;
-(void)recognizedDismissTapGesture:(id)arg0 ;
-(void)sensorAttributionsChanged:(id)arg0 ;
-(void)setExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif