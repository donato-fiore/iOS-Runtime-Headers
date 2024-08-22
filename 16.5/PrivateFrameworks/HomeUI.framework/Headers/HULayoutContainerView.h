// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULAYOUTCONTAINERVIEW_H
#define HULAYOUTCONTAINERVIEW_H

@class UIView;



@interface HULayoutContainerView : UIView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy, nonatomic) id *layoutBlock; // ivar: _layoutBlock


-(id)initWithContentView:(id)arg0 layoutBlock:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;


@end


#endif