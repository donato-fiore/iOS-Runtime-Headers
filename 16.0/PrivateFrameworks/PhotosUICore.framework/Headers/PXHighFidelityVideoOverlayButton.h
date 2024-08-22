// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXHIGHFIDELITYVIDEOOVERLAYBUTTON_H
#define PXHIGHFIDELITYVIDEOOVERLAYBUTTON_H

@class UIView, UIButton, _UIBackdropView, UIImageView;
@protocol PXVideoOverlayButton;


#import "PXVideoOverlayButtonConfiguration.h"

@interface PXHighFidelityVideoOverlayButton : UIView <PXVideoOverlayButton>

 {
    UIButton *_button;
    _UIBackdropView *_backdropView;
    UIImageView *_overlayPlayBackground;
    PXVideoOverlayButtonConfiguration *_overlayConfiguration;
    id *_target;
    SEL _action;
}


@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause; // ivar: __didConfigureForPause
@property (nonatomic) BOOL showAsPause; // ivar: _showAsPause


-(id)initWithConfiguration:(id)arg0 ;
-(void)_playButtonActivate:(id)arg0 ;
-(void)_playButtonDeactivate:(id)arg0 ;
-(void)_playButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif