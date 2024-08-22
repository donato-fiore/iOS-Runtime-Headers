// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSOFTWAREUPDATEANIMATEDICON_H
#define HUSOFTWAREUPDATEANIMATEDICON_H

@class UIView, UIImageView;



@interface HUSoftwareUpdateAnimatedIcon : UIView {
    UIImageView *_innerGearView;
    UIImageView *_outerGearShadowView;
    UIImageView *_outerGearView;
    BOOL _animating;
}


@property (readonly, nonatomic) UIImageView *innerGearView;
@property (readonly, nonatomic) UIImageView *outerGearShadowView;
@property (readonly, nonatomic) UIImageView *outerGearView;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)createConstraints;
-(void)setAnimating:(BOOL)arg0 ;


@end


#endif