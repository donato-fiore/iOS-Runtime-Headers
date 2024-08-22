// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUICONTENTSCROLLVIEW_H
#define NUICONTENTSCROLLVIEW_H

@class UIScrollView, UIView;



@interface NUIContentScrollView : UIScrollView

@property (nonatomic) BOOL canScrollDocumentViewHorizontally; // ivar: _canScrollDocumentViewHorizontally
@property (nonatomic) BOOL canScrollDocumentViewVertically; // ivar: _canScrollDocumentViewVertically
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *documentView; // ivar: _documentView
@property (nonatomic) NSInteger horizontalAlignment; // ivar: _horizontalAlignment
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_layoutHeightDependsOnWidth;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(NSUInteger)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithDocumentView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGSize )_finalSizeForTargetSize:(struct CGSize )arg0 resultSize:(struct CGSize )arg1 insets:(struct UIEdgeInsets )arg2 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )_measureSizeForTargetSize:(struct CGSize )arg0 insets:(struct UIEdgeInsets )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif