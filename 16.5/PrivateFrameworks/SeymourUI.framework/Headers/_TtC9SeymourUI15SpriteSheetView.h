// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI15SPRITESHEETVIEW_H
#define _TTC9SEYMOURUI15SPRITESHEETVIEW_H

@class UIView, UIColor;



@interface _TtC9SeymourUI15SpriteSheetView : UIView {
    ? offsetAnimationKey;
    ? offsets;
    ? spriteSheet;
    ? frameRate;
    ? animations;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, retain) UIColor *tintColor;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif