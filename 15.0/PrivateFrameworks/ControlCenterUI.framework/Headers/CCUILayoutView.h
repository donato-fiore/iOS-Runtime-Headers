// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUILAYOUTVIEW_H
#define CCUILAYOUTVIEW_H

@protocol CCUILayoutViewLayoutSource;


#import "CCUIScrollView.h"
#import "CCUILayoutOptions.h"

@interface CCUILayoutView : CCUIScrollView {
    CCUILayoutOptions *_layoutOptions;
}


@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (weak, nonatomic) NSObject<CCUILayoutViewLayoutSource> *layoutSource; // ivar: _layoutSource


-(CGFloat)_extraItemSpacingForItemAtPosition:(NSUInteger)arg0 doubleMarginIndices:(id)arg1 itemSpacing:(CGFloat)arg2 ;
-(CGFloat)_totalExtraItemSpacingForDoubleMarginIndices:(id)arg0 itemSpacing:(CGFloat)arg1 ;
-(id)_horizontalDoubleMarginIndices;
-(id)_verticalDoubleMarginIndices;
-(id)initWithFrame:(struct CGRect )arg0 layoutOptions:(id)arg1 ;
-(id)subviewsToLayout;
-(struct CGRect )frameForLayoutRect:(struct CCUILayoutRect )arg0 ;
-(struct CGRect )frameForSubview:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didAddSubview:(id)arg0 ;
-(void)iterateLayoutSubviewsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif