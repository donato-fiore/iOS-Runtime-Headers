// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMESCREENVIEW_H
#define SBHOMESCREENVIEW_H

@class UIView, SBFStatusBarLegibilityView;



@interface SBHomeScreenView : UIView

@property (readonly, nonatomic) SBFStatusBarLegibilityView *statusBarLegibilityView; // ivar: _statusBarLegibilityView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif