// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCTOGGLECONTROLPAIR_H
#define NCTOGGLECONTROLPAIR_H

@class UIView, NSString, NSArray;
@protocol PLContentSizeCategoryAdjusting, MTMaterialGrouping;



@interface NCToggleControlPair : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>



@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *toggleControls; // ivar: _toggleControls


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_effectiveInterControlPadding;
-(CGFloat)_effectiveValueForMinValue:(CGFloat)arg0 withFont:(id)arg1 ;
-(id)_leadingToggleControl;
-(id)_trailingToggleControl;
-(id)initWithLeadingToggleControl:(id)arg0 trailingToggleControl:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleTouchUpInside:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setLeadingControlExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif