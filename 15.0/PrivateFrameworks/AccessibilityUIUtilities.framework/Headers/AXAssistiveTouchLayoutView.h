// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXASSISTIVETOUCHLAYOUTVIEW_H
#define AXASSISTIVETOUCHLAYOUTVIEW_H

@class UIView, NSArray, NSMutableArray;



@interface AXAssistiveTouchLayoutView : UIView

@property (retain, nonatomic) NSArray *itemConstraints; // ivar: _itemConstraints
@property (retain, nonatomic) NSMutableArray *positioningLayoutGuides; // ivar: _positioningLayoutGuides


+(CGFloat)_layoutViewSideLengthScaledFromDefaultLength:(CGFloat)arg0 labelContentSizeCategory:(id)arg1 ;
+(CGFloat)defaultSideLength;
+(CGFloat)layoutViewSideLengthScaledFromDefaultLength:(CGFloat)arg0 ;
+(CGFloat)minimumOuterPadding;
+(id)_imageMaximumContentSizeCategoryIndependentOfLabel;
+(id)_preferredContentSizeCategoryCappedByMinimumContentSizeCategory:(id)arg0 maximumContentSizeCategory:(id)arg1 ;
+(id)_traitCollectionForMinimumContentSizeCategory:(id)arg0 maximumContentSizeCategory:(id)arg1 ;
+(id)fontMetrics;
+(id)imageMaximumContentSizeCategory;
+(id)imageMinimumContentSizeCategory;
+(id)labelFont;
+(id)labelMaximumContentSizeCategory;
+(id)labelMinimumContentSizeCategory;
+(id)traitCollectionForImagePreferredContentSizeCategory;
+(id)traitCollectionForLabelPreferredContentSizeCategory;
-(id)_setUpConstraintsForPreferredPositionsForItems:(id)arg0 positions:(id)arg1 ;
-(id)_setUpConstraintsToAlignItems:(id)arg0 rows:(id)arg1 columns:(id)arg2 ;
-(id)_setUpConstraintsToAvoidCollisions:(id)arg0 rows:(id)arg1 columns:(id)arg2 clockwiseOctagonalLocations:(id)arg3 ;
-(void)_enableAutoLayoutForAllItems:(id)arg0 ;
-(void)_enumerateListsOfLocations:(id)arg0 items:(id)arg1 withBlock:(id)arg2 ;
-(void)centerItems:(id)arg0 ;
-(void)centerItems:(id)arg0 withView:(id)arg1 ;
-(void)layoutItemsByLocation:(id)arg0 hasBackButton:(BOOL)arg1 ;
-(void)layoutItemsByLocation:(id)arg0 positions:(id)arg1 rows:(id)arg2 columns:(id)arg3 clockwiseOctagonalLocations:(id)arg4 horizontallyCenteredLocation:(id)arg5 ;


@end


#endif