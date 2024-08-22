// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCONTAINERTITLEVIEW_H
#define NUCONTAINERTITLEVIEW_H

@class UIView;



@interface NUContainerTitleView : UIView

@property (nonatomic) CGFloat contentAlpha;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView


-(id)_centeringReferenceView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif