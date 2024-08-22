// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATINGDOCKVIEW_H
#define SBFLOATINGDOCKVIEW_H

@class SBFTouchPassThroughView, UIView;
@protocol SBFloatingDockViewDelegate;


#import "SBIconView.h"
#import "SBFloatingDockPlatterView.h"
#import "SBDockIconListView.h"

@interface SBFloatingDockView : SBFTouchPassThroughView

@property (retain, nonatomic) SBIconView *accessoryIconView; // ivar: _accessoryIconView
@property (nonatomic, getter=isAccessoryIconViewVisible) BOOL accessoryIconViewVisible; // ivar: _accessoryIconViewVisible
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) CGFloat contentHeight;
@property (weak, nonatomic) NSObject<SBFloatingDockViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIView *dividerView; // ivar: _dividerView
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) BOOL hasPlatterShadow;
@property (nonatomic) CGFloat iconContentScale; // ivar: _iconContentScale
@property (readonly, nonatomic) CGFloat interIconSpacing;
@property (retain, nonatomic) SBFloatingDockPlatterView *mainPlatterView; // ivar: _mainPlatterView
@property (readonly, nonatomic) CGFloat maximumDockContinuousCornerRadius;
@property (nonatomic) CGSize maximumEditingIconSize; // ivar: _maximumEditingIconSize
@property (readonly, nonatomic) CGSize maximumIconSize;
@property (readonly, nonatomic) CGFloat maximumInterIconSpacing;
@property (readonly, nonatomic) CGFloat maximumPlatterHeight;
@property (nonatomic) NSUInteger minimumUserIconSpaces; // ivar: _minimumUserIconSpaces
@property (nonatomic) UIEdgeInsets paddingEdgeInsets; // ivar: _paddingEdgeInsets
@property (readonly, nonatomic) CGRect platterFrame;
@property (readonly, nonatomic) UIEdgeInsets platterShadowOutsets;
@property (nonatomic) CGFloat platterVerticalMargin; // ivar: _platterVerticalMargin
@property (retain, nonatomic) SBDockIconListView *recentIconListView; // ivar: _recentIconListView
@property (retain, nonatomic) UIView *touchReceivingView; // ivar: _touchReceivingView
@property (retain, nonatomic) SBDockIconListView *userIconListView; // ivar: _userIconListView


+(CGFloat)_referenceInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(CGFloat)contentHeightForBounds:(struct CGRect )arg0 mainPlatterViewFrame:(struct CGRect )arg1 ;
+(CGFloat)maximumDockContinuousCornerRadiusWithIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(CGFloat)maximumInterIconSpacingWithIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(CGFloat)maximumPlatterHeightWithIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(CGFloat)minimumPlatterMargin;
+(struct CGSize )maximumIconSizeWithIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(void)getMetrics:(struct ? *)arg0 forBounds:(struct CGRect )arg1 numberOfUserIcons:(NSUInteger)arg2 numberOfRecentIcons:(NSUInteger)arg3 displayAccessoryIconView:(BOOL)arg4 paddingEdgeInsets:(struct UIEdgeInsets )arg5 referenceIconSize:(struct CGSize )arg6 maximumIconSize:(struct CGSize )arg7 referenceInterIconSpacing:(CGFloat)arg8 maximumInterIconSpacing:(CGFloat)arg9 platterVerticalMargin:(CGFloat)arg10 editing:(BOOL)arg11 ;
-(BOOL)_shouldDisplayAccessoryIconView;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_referenceInterIconSpacing;
-(CGFloat)contentHeightForBounds:(struct CGRect )arg0 ;
-(CGFloat)iconContentScaleForNumberOfUserIcons:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_referenceIconSize;
-(struct SBIconImageInfo )_iconImageInfo;
-(struct UIEdgeInsets )platterShadowOutsetsForBounds:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)bounce;
-(void)getMetrics:(struct ? *)arg0 forBounds:(struct CGRect )arg1 ;
-(void)layoutSubviews;
-(void)updateDividerVisualStyling;


@end


#endif