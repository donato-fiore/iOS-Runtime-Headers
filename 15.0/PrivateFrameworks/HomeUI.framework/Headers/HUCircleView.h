// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCIRCLEVIEW_H
#define HUCIRCLEVIEW_H

@class UIView;



@interface HUCircleView : UIView

@property (nonatomic) BOOL backgroundColorFollowsTintColor; // ivar: _backgroundColorFollowsTintColor
@property (nonatomic) BOOL borderColorFollowsTintColor; // ivar: _borderColorFollowsTintColor
@property (retain, nonatomic) UIView *controlCenterMaterialView; // ivar: _controlCenterMaterialView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif