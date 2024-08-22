// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCONTIGUOUSCONTAINERVIEW_H
#define GKCONTIGUOUSCONTAINERVIEW_H

@class UIView, NSArray;



@interface GKContiguousContainerView : UIView

@property (nonatomic) BOOL applyOrthogonalConstraints; // ivar: _applyOrthogonalConstraints
@property (nonatomic) UIView *baselineView; // ivar: _baselineView
@property (nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (nonatomic) CGFloat overlap; // ivar: _overlap
@property (retain, nonatomic) NSArray *replaceableConstraints; // ivar: _replaceableConstraints
@property (nonatomic) BOOL vertical; // ivar: _vertical


+(id)containerForViewsFontsLeadings:(id)arg0 options:(NSInteger)arg1 ;
+(id)containerViewForViews:(id)arg0 overlap:(CGFloat)arg1 vertical:(BOOL)arg2 ;
+(id)containerViewForViews:(id)arg0 overlap:(CGFloat)arg1 vertical:(BOOL)arg2 applyOrthogonalConstraints:(BOOL)arg3 ;
-(id)viewForBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_addContiguousSubviews:(id)arg0 ;
-(void)replaceSubviews:(id)arg0 ;


@end


#endif