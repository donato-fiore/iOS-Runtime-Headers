// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSTASHEDMASKVIEW_H
#define PGSTASHEDMASKVIEW_H

@class UIView;



@interface PGStashedMaskView : UIView {
    BOOL _tabHidden;
    BOOL _tabShownLeft;
    UIView *_mainBody;
    UIView *_tab;
    UIView *_tabTopCornerFill;
    UIView *_tabBottomCornerFill;
    UIView *_tabLeftTopCornerDestOut;
    UIView *_tabLeftBottomCornerDestOut;
    UIView *_tabRightTopCornerDestOut;
    UIView *_tabRightBottomCornerDestOut;
}


@property (nonatomic) CGSize minimumStashTabSize; // ivar: _minimumStashTabSize
@property (weak, nonatomic) UIView *tabShadowView; // ivar: _tabShadowView
@property (readonly, nonatomic) CGRect tabViewBounds;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_continuousCornerRadius;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 minimumStashTabSize:(struct CGSize )arg1 ;
-(struct CGRect )_mainBodyBounds;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setTabHidden:(BOOL)arg0 left:(BOOL)arg1 ;


@end


#endif