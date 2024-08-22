// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMHIGHFIDELITYVIDEOOVERLAYBUTTON_H
#define PMHIGHFIDELITYVIDEOOVERLAYBUTTON_H

@class UIView, _UIBackdropView, UIImageView;
@protocol PMVideoOverlayButton;



@interface PMHighFidelityVideoOverlayButton : UIView <PMVideoOverlayButton>

 {
    NSInteger _style;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
}




-(NSInteger)style;
-(id)initWithStyle:(NSInteger)arg0 allowBackdropStatisticsSupression:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif