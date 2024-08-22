// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_DYNAMICSPLIT_H
#define _UISTATUSBARVISUALPROVIDER_DYNAMICSPLIT_H

@class Split, NSLayoutConstraint;



@interface _UIStatusBarVisualProvider_DynamicSplit : Split

@property (retain, nonatomic) NSLayoutConstraint *cutoutCenterConstraint; // ivar: _cutoutCenterConstraint
@property (retain, nonatomic) NSLayoutConstraint *cutoutWidthConstraint; // ivar: _cutoutWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingCenterYConstraint; // ivar: _leadingCenterYConstraint


+(CGFloat)baseFontSize;
+(CGFloat)expandedFontSize;
+(CGFloat)height;
+(Class)visualProviderSubclassForScreen:(id)arg0 visualProviderInfo:(id)arg1 ;
-(BOOL)_needsUpdateOfConstraintsForAvoidanceFrame:(struct CGRect )arg0 cutoutOffset:(*CGFloat)arg1 cutoutWidth:(*CGFloat)arg2 ;
-(BOOL)_updateSystemNavigationWithData:(id)arg0 avoidanceFrame:(struct CGRect )arg1 ;
-(CGFloat)bottomLeadingTopOffset;
-(CGFloat)cutoutEdgeInset;
-(CGFloat)effectiveTargetDisplayWidth;
-(CGFloat)expandedIconScale;
-(CGFloat)itemSpacing;
-(CGFloat)minimumBottomLeadingWidth;
-(CGFloat)normalIconScale;
-(CGFloat)sensorAreaCenterOffsetFromTrailing;
-(CGFloat)topLeadingCenterOffset;
-(NSUInteger)leadingNumberOfItemsForWidth:(CGFloat)arg0 ;
-(NSUInteger)trailingNumberOfItemsForWidth:(CGFloat)arg0 includingPrivacyIndicator:(BOOL)arg1 ;
-(id)_orderedDisplayItemPlacements;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)normalRoundFont;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg0 ;
-(id)region:(id)arg0 willSetDisplayItems:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg0 itemAnimation:(id)arg1 ;
-(id)setupInContainerView:(id)arg0 ;
-(id)willUpdateWithData:(id)arg0 ;
-(struct CGRect )sensorAreaRect;
-(struct CGSize )sensorAreaSize;
-(struct CGSize )smallPillSize;
-(struct NSDirectionalEdgeInsets )edgeInsets;
-(struct NSDirectionalEdgeInsets )expandedEdgeInsets;
-(void)avoidanceFrameUpdatedFromFrame:(struct CGRect )arg0 withAnimationSettings:(id)arg1 interactively:(BOOL)arg2 ;
-(void)dataUpdated:(id)arg0 ;
-(void)orientationUpdatedFromOrientation:(NSInteger)arg0 ;


@end


#endif