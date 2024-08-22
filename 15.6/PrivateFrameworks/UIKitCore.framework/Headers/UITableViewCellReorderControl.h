// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWCELLREORDERCONTROL_H
#define UITABLEVIEWCELLREORDERCONTROL_H



#import "UIControl.h"
#import "UITableViewCell.h"
#import "UIImageView.h"
#import "UIColor.h"

@interface UITableViewCellReorderControl : UIControl {
    UITableViewCell *_cell;
    CGPoint _downPoint;
    CGFloat _focalY;
    CGFloat _focalHeight;
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor
@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(id)_imageView;
-(id)grabberImage;
-(id)initWithTableViewCell:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateImageView;
-(void)adjustLayoutForFocalRect:(struct CGRect )arg0 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif