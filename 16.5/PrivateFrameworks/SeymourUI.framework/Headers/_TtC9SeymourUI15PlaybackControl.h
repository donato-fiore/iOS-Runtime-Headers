// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI15PLAYBACKCONTROL_H
#define _TTC9SEYMOURUI15PLAYBACKCONTROL_H

@class UIControl;



@interface _TtC9SeymourUI15PlaybackControl : UIControl {
    ? type;
    ? style;
    ? imageView;
    ? layout;
    ? transitionView;
    ? imageViewWidthConstraint;
    ? width;
    ? widthConstraint;
}


@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(BOOL)isEnabled;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif