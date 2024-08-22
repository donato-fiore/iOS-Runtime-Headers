// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_FIXEDSPLIT_H
#define _UISTATUSBARVISUALPROVIDER_FIXEDSPLIT_H

@class Split, NSLayoutConstraint, UIFont;



@interface _UIStatusBarVisualProvider_FixedSplit : Split

@property (readonly) CGFloat bottomLeadingBaseline;
@property (readonly) CGFloat bottomLeadingWidth;
@property (retain, nonatomic) NSLayoutConstraint *leadingBottomConstraint; // ivar: _leadingBottomConstraint
@property (readonly) CGFloat leadingCenteringEdgeInset;
@property (readonly) NSDirectionalEdgeInsets leadingEdgeInsets;
@property (readonly) CGFloat leadingItemSpacing;
@property (readonly) CGFloat leadingPillInset;
@property (readonly) CGFloat leadingPillSpacing;
@property (readonly) CGFloat leadingSmallPillSpacing;
@property (readonly) CGFloat nativeDisplayWidth;
@property (readonly) CGFloat pillCenteringEdgeInset;
@property (readonly) UIFont *pillFont;
@property (readonly) CGSize pillSize;
@property (readonly) UIFont *pillSmallFont;
@property (readonly) CGFloat trailingCenteringEdgeInset;
@property (readonly) NSDirectionalEdgeInsets trailingEdgeInsets;


+(BOOL)showsLargeBatteryChargingAnimation;
+(CGFloat)additionalBottomLeadingMargin;
+(CGFloat)leadingCenteringOffset;
+(CGFloat)pillCenteringOffset;
+(CGFloat)trailingCenteringOffset;
+(CGFloat)trailingEdgeInsetLeadingAdjustment;
-(BOOL)_updateLowerRegionsWithData:(id)arg0 ;
-(CGFloat)referenceWidth;
-(id)_orderedDisplayItemPlacements;
-(id)animationForBackgroundActivityPillAnimation:(id)arg0 duration:(CGFloat)arg1 scale:(CGFloat)arg2 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg0 ;
-(id)region:(id)arg0 willSetDisplayItems:(id)arg1 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg0 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)styleAttributesForStyle:(NSInteger)arg0 ;
-(struct CGRect )notchRect;
-(struct CGSize )notchSize;
-(struct CGSize )smallPillSize;
-(struct NSDirectionalEdgeInsets )_edgeInsetsFromCenteringEdgeInset:(CGFloat)arg0 trailing:(BOOL)arg1 ;
-(struct NSDirectionalEdgeInsets )expandedEdgeInsets;
-(void)_updateSystemNavigationWithData:(id)arg0 ;
-(void)dataUpdated:(id)arg0 ;
-(void)orientationUpdatedFromOrientation:(NSInteger)arg0 ;


@end


#endif