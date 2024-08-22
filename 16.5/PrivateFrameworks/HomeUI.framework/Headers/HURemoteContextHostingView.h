// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUREMOTECONTEXTHOSTINGVIEW_H
#define HUREMOTECONTEXTHOSTINGVIEW_H

@class UIView;



@interface HURemoteContextHostingView : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIView *destinationOutContainerView; // ivar: _destinationOutContainerView
@property (readonly, nonatomic) UIView *destinationOutView; // ivar: _destinationOutView
@property (readonly, nonatomic) UIView *destinationOverView; // ivar: _destinationOverView
@property (nonatomic) NSUInteger maskedCorners;


-(CGFloat)_continuousCornerRadius;
-(CGFloat)_cornerRadius;
-(id)initWithContentView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;


@end


#endif