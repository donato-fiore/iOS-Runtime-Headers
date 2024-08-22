// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI17MICAANIMATIONVIEW_H
#define _TTC18HEALTHEXPERIENCEUI17MICAANIMATIONVIEW_H

@class UIView;



@interface _TtC18HealthExperienceUI17MicaAnimationView : UIView {
    ? packageLayer;
    ? package;
    ? stateController;
    ? animation;
    ? state;
    ? transitionSpeed;
    ? insetSize;
    ? scaleForDeviceSize;
    ? loopCount;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)stepAnimationForLayer:(id)arg0 ;


@end


#endif